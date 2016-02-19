##### Module 5

[Back to Class 1 Prep](../../class1-prep#recursion-review-and-recursive-structs)

# Resource: Recursively Defined Structs

In Module 4 we learned about `struct`s, which allow us to define new data types by clustering together a handful of pieces of data into a single meaningful unit.

For example, we might represent a sports team as being composed of a city, a name, number of wins, and number of losses:

```c
typedef struct
{
    char* city;
    char* name;
    int wins;
    int losses;
} team;
```

We can create and initialize an "instance" of this type by using curly braces:

```c
team spoons = { "Springfield", "Spoons", 2, 13 };
team forks = { "Shelbyville", "Forks", 11, 4 };
```

We can read to and write from the "fields" or "members" of an instance by using dot-notation:

```c
printf("In a shock upset, our beloved %s %s actually won!\n", spoons.city, spoons.name);
spoons.wins = spoons.wins + 1;
forks.losses += spoons.wins + 1;
printf("%s's record is now %i and %i\n", spoons.city, spoons.wins, spoons.losses);
```

### Structs of Structs

In the above example, our `team` struct is composed entirely of regular "primitive" data types: `int` and `char*`.

But we are not restricted to primitives. If we want, we can make a struct whose fields are actually *other* structs.

For example, suppose we wanted to represent a game between two sports teams. What pieces of information do we need in order to comprise a game? Maybe something like this:
* the score of one team
* the score of the other team

We can represent both of these fields using integers:

```c
typedef struct
{
    int homeScore;
    int awayScore;
} game;
```

That's all well and good. But another pretty essential feature of a game is missing: the teams that are competing in it! How can we incorporate that?

Well, we could start adding a bunch of fields to hold the information to represent each of the teams:

```c
typedef struct
{
    int homeScore;
    int awayScore;
    char* homeCity;
    char* awayCity;
    char* homeName;
    char* awayName;
    int homeWins;
    int awayWins;
    ...
} game;
```

...but that's obviously not the way to go. We've already defined a new type called `team` which contains all that data. So in fact, our `game` only needs to keep track of its two `teams`:

```c
typedef struct
{
    team homeTeam;
    team awayTeam;
    int homeScore;
    int awayScore;
} game;
```

And we could create a game like this:

```c
game spoonsVsForks = { spoons, forks, 22, 19 };
```

### Value vs Reference

A quick tangent now:

Let's actually change one thing about our `game`. Currently it contains two `team`s, home and away, but in fact it actually contains *copies* of those teams. 

This means that the following code will behave unexpectedly:

```c
team spoons = { "Springfield", "Spoons", 2, 13 };
team forks = { "Shelbyville", "Forks", 11, 4 };

game spoonsVsForks = { spoons, forks, 22, 19 };

team homeTeam = forksVsSpoons.homeTeam; 
// homeTeam is spoons, right?

// so let's increase their wins
homeTeam.wins += 1;

// but in fact, homeTeam is merely a copy of spoons

// so homeTeam.wins is now 3

// but spoons.wins is still 2!

printf("The home team now has %i wins. The Spoons have %i wins.\n", homeTeam.wins, spoons.wins);
//prints out: The home team now has 3 wins. The Spoons have 2 wins.
```

Our beloved Spoons have a life of their own outside of this one particular game, and so the game should really refer to the *same exact* location in memory where our `spoons` variable is located. We can do this by giving the game a pointer to its teams.

```c
typedef struct
{
    team* homeTeam;
    team* awayTeam;
    int homeScore;
    int awayScore;
} game;
```

Now this code works as expected:

```c
team spoons = { "Springfield", "Spoons", 2, 13 };
team forks = { "Shelbyville", "Forks", 11, 4 };

// we now must use the address of our teams
game spoonsVsForks = { &spoons, &forks, 22, 19 };

// this time homeTeam really is a pointer to "the actual" spoons
team* homeTeam = spoonsVsForks.homeTeam; 

// and here we must use arrow notation instead of dot notation
homeTeam->wins += 1;

printf("The home team now has %i wins. The Spoons have %i wins.\n", homeTeam->wins, spoons.wins);
//prints out: The home team now has 3 wins. The Spoons have 3 wins.
```

(To be clear, it's not universally true that you'll want to use pointers instead of values in situations like this. Sometimes you just want the data, and you don't care if it's a copy.)


### Recursively Defined

So we've now seen how structs can be composed of other structs. In the example above, each `game` contains pointers to two `team`s.

But we are also not restricted to referring to different *types* of structs. A struct can contain fields whose type is the exact same as its own type.

For example, let's say we want to incorporate the idea of rivarlies into our program. We want each team, in addition to its other information, to have a field representing which *other team* is its biggest rival. To do this, we simply need to add another field, of type `team*`:

```c
typedef struct
{
    char* city;
    char* name;
    int wins;
    int losses;
    team* biggestRival;
} team;
```

Hopefully that makes sense.

There's actually one small complication. The compiler will not be able to handle the above code without some extra help on our part. The problem is that, because we are trying to use `team*` inside the definition of `team` itelf, the compiler says "Hey I don't know what a team is yet. You cant use that type." So on recursively defined structs like this, we have to add a little bit of syntax to tell the compiler "Trust me, there is going to be a type called team." We do this like so:

```c
typedef struct team // we add the word "team" to the end of this line
{
    char* city;
    char* name;
    int wins;
    int losses;
    struct team* biggestRival; // and we add the word "struct" to the beginning of this line
} team;
```

Now the compiler will be happy.

In [sports.c](./sports.html) you will find a complete working program that incorporates all the concepts discussed in this resource. If you run it, it behaves like so:

```nohighlight
$ ./sports 
Good evening, sports fans!
The score of this year's EPIC RIVALRY CLASH was
Springfield Spoons: 22
Shelbyville Forks: 19
Springfield now has a record of 3 wins, 13 losses
Shelbyville now has a record of 11 wins, 5 losses
```

Obviously this is a little contrived, since we don't take any user input, and we hard-code the results of the game inside `main`. But you could easily extend the program to be more dynamic. 

Check out the source code and make sure you understand how all the different `struct` fields enter into the picture.





