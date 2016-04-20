##### Web Track

[Back to Class 0](../../class0)

# Studio: FlickList 0

Welcome to your first Studio! Today is mostly just about getting set up. First, you will use Git to grab the starter code for the project. Next, you will register for an API key with themoviedb.org, an open source database of movies. Finally you'll plug your key into the code, and see some results!

### Gitting Started

On all Studio assignments from now on, you are going to use Git and GitHub for obtaining starter code, working on it, and submitting it (kind of. You're still going to use Vocareum also.) 

Warning: At this juncture, we are about to to walk you through exactly what to do, without stopping to over-explain everything. You are probably going to feel overwhelmed by Git-related jargon. Don't worry! Just try to absorb what you can, and trust that the gaps will fill in over time.

Follow these steps to get started:

##### Make account on GitHub

You should already have made an account while doing <a href="https://guides.github.com/activities/hello-world/" target="_blank">this exercise</a> for today's Prep Work, but if not, <a href="https://github.com/join?source=header-home" target="_blank">make one now</a>.

##### Fork the FlickList Repo

Once you have signed into github, head over to the repository where our class project is hosted: https://github.com/LaunchCodeEducation/flicklist.

To work on this project, you'll need to *fork* your own version of it. Near the upper-right corner of the screen, you should see a button that says "Fork". Click it!

You should now be taken to a new, nearly identical project page. But instead of LaunchCodeEducation/flicklist, this is jharvard/flicklist (where "jharvard" is your username). 

###### Clone your fork

Now that you have your own *remote* repository hosted on GitHub, it's time to start working on it! To do so, you will *clone* your remote repo onto your local machine (the CS50 IDE). 

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

There's some code in here! Open up index.html and take a very brief look. Seems like a lot of stuff. In fact, open up this page in the browser (by clicking preview, or by running the apche50 server and then visiting your ide url). 

3. Add upstream as a remote (git remote add upstream https://github.com/LaunchCodeEducation/flicklist.git)
4. git fetch upstream
5. git checkout -b studio0 upstream/studio0
6. git checkout -b studio0-my-solution


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


### Your Assignment

Paste your api key into the TODO in `flicklist.js`. 

In `index.html`, complete the `<script>` tag to link to the `flicklist.js` file. 



### How to Submit



