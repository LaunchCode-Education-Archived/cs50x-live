##### Web Track

[Back to Class 0](../../class0)

# Studio: FlickList 0

Welcome to your first Studio! Today is mostly just about getting set up. 

First, you will use Git to grab the starter code for the project. (This will be slightly complicated, but that's okay).

Next, you will register for an API key with themoviedb.org, an open source database of movies. Finally you'll plug your key into the code, and see some results!

### Submit Individually

Today, it is best if you complete this studio on your own computer, rather than with a partner. You are still encouraged to work together with others, but each coder should have their own computer open.

### Gitting Started

On all Studio assignments from now on, you are going to use Git and GitHub for obtaining starter code, working on it, and submitting it (kind of. You're still going to use Vocareum also.) 

Warning: At this juncture, we are about to to walk you through exactly what to do, with only a minimal amount of accompanying explanation. You are probably going to feel overwhelmed by Git-related jargon. Don't worry! Just try to absorb what you can, and trust that the gaps will fill in over time.

Follow these steps to get started:

##### Make account on GitHub

You should already have made an account while doing <a href="https://guides.github.com/activities/hello-world/" target="_blank">this exercise</a> for today's Prep Work, but if not, <a href="https://github.com/join?source=header-home" target="_blank">make one now</a>.

##### Fork the FlickList Repo

Once you have signed into github, head over to the repository where our class project is hosted: https://github.com/LaunchCodeEducation/flicklist.

To work on this project, you'll need to *fork* your own version of it. Near the upper-right corner of the screen, you should see a button that says "Fork". Click it!

You should now be taken to a new, nearly identical project page. But instead of `LaunchCodeEducation/flicklist`, this is `jharvard/flicklist` (where "jharvard" is your username). 

##### Clone your Fork

Now that you have your own *remote* repository hosted on GitHub, it's time to start working on it! To do so, you will *clone* the remote repo onto your local machine (the CS50 IDE). 

Open up the terminal in your IDE, and type the following:

```nohighlight
$ cd ~/workspace/web-track/studios/
$ git clone https://github.com/jharvard/flicklist.git
Cloning into 'flicklist'...
remote: Counting objects: 103, done.
remote: Compressing objects: 100% (49/49), done.
remote: Total 103 (delta 32), reused 102 (delta 31), pack-reused 0
Receiving objects: 100% (103/103), 17.92 KiB | 0 bytes/s, done.
Resolving deltas: 100% (32/32), done.
Checking connectivity... done.
```

You should now see a new folder!

```nohighlight
$ ls
flicklist
```

Have a look inside:

```nohighlight
$ cd flicklist/
$ ls
README.md  css/  index.html  js/
```

There's some code in here! Open up index.html and take a very brief look. Seems like a lot of stuff. In fact, the entire finished project is all here. See for yourself: open up this page in the browser by clicking preview, or by running the apche50 server and then visiting `ide50-jharvard.cs50.io`). 

Why did we give you the finished product? Well, this is a Git repo, so in fact, the entire history of the project is actually present. To start from the beginning, you just have to go back in time!

We have created 6 *branches* at various points in the history of the project, one for each Studio. You will complete each studio from a different one of these "jumping off points". 

You will learn more about branches in the next Prep Work, but for now, simply follow along blindly like a docile sheep.

##### Add Upstream as a Remote 

In order to obtain the branches we made, your local repo will need a reference to our "upstream" repo, `LaunchCodeEducation/flicklist`. Currently, it only has a reference to your personal "downstream" fork, `jharvard/flicklist`, but not ours. You can see this by asking git for a list of all the remote repos that this local repo knows about:

```nohighlight
$ git remote -v
origin	https://github.com/jharvard/flicklist.git (fetch)
origin	https://github.com/jharvard/flicklist.git (push)
```

Your local repo here has a reference to a remote repo at `https://github.com/jharvard/flicklist.git` (which it refers to as "origin"). But it does not have any references to the "upstream" granddady-of-them-all repo. Let's remedy that:

```nohighlight
$ git remote add upstream https://github.com/LaunchCodeEducation/flicklist.git
```

This says, "Hey git, there's another remote repository that you should know about. Let's call it "upstream", and it lives at this url: https://github.com/LaunchCodeEducation/flicklist.git.

Logging `git remote` again should now reveal that you have a local reference to both of the remotes:

```nohighlight
$ git remote -v
origin  https://github.com/jharvard/flicklist.git (fetch)
origin  https://github.com/jharvard/flicklist.git (push)
upstream        https://github.com/LaunchCodeEducation/flicklist (fetch)
upstream        https://github.com/LaunchCodeEducation/flicklist (push)
```

That's better!

##### Fetch the Branch from Upstream

Now you will *fetch* the branch for today's Studio:

```nohighlight
$ git fetch upstream studio0
From https://github.com/LaunchCodeEducation/flicklist
 * branch            studio0    -> FETCH_HEAD
 * [new branch]      studio0    -> upstream/studio0
```

Next, create a new local branch from the `upstream/studio0` branch:

```nohighlight
$ git branch studio0 upstream/studio0
Branch studio0 set up to track remote branch studio0 from upstream.
```

You now have a new local branch called "studio 0" whose contents came from "upstream/studio0". You can confirm the existence of the new branch by typing:

```nohighlight
$ git branch
* master
  studio0
```

The output indicates that we have two local branches, "master", and "studio0". The `*` next to "master" indicates that master is the branch we currently have *checked out*. 

What does that mean?

##### Check Out the new Branch

To find out, watch what happens when you checkout the new branch:

```nohighlight
$ git checkout studio0
Switched to branch 'studio0'
Your branch is up-to-date with 'upstream/studio0'.
```

Git informs us that we have "switched to" the other branch. If you close and reopen `index.html`, you should see a big change! You might also notice that the `css/` directory has disappeared entirely. And if you preview the webpage in the browser again, you will see that the fancy movie content has reverted to some very basic text.

We have officially time traveled into the past!


### Starter Code



### TheMovieDB API

TheMovieDB is an opensource database of movies and TV shows. We will use their API as the source of our project's data. This API, like most, requires that you register and obtain a key in order to use it. 

Here's how to nab that key:

##### Sign up for an Account

<a href="https://www.themoviedb.org/account/signup" target="_blank">Register here</a>. Then check your email and click the confirmation link.

##### Sign up for API Key

Visit the following url:

https://www.themoviedb.org/account/jharvard/request-api?type=developer

where "jharvard" is your username for the account you just created. Click on the "I agree" button.

##### Register Your Project

You will now be presented with a form. TheMovieDB wants to know about the cool people like us who are using their service. Go ahead and fill the form out. For the project url, point them to your repo on github.

##### Get the Key!

You should now be taken to your profile page, where your key should be visible.


### Your Mission

Paste your api key into the TODO in `flicklist.js`. 

In `index.html`, complete the `<script>` tag to link to the `flicklist.js` file. 



### How to Submit

On Vocareum, click on the assignment called **Studio: FlickList 0**.

You should see a file called `studio0.txt`, on which a secret quiz question awaits! Type your answer and click submit.


