##### Web Track
[Back to Class 2](../../class2)

# Studio: FlickList 2

### Demo

Here is a demo of what you are trying to accomplish: <a href="http://htmlpreview.github.io/?https://github.com/LaunchCodeEducation/flicklist/blob/f3dae711763c73f56267ac35e076c56383183829/index.html" target="_blank">FlickList 2 Demo</a>. Play around with the demo for a minute and get familiar with its features.

Note the following additions since last time:
* In the browse list, each movie is accompanied by a paragraph summarizing its plot.
* Once the user clicks the "Add to Watchlist" button for a movie, the button then becomes disabled, thereby preventing the same movie from being added more than once.
* In the watchlist, each movie is represented by an orange rectangle. These rectangles line up next to each other from left to right, without skipping down to a new line until they run out of space on the right-hand side of their container.
* The page has some styles and is a little prettier than before.
* At the top of the browselist, there is a search bar which users can use to search for particular movies. Upon submitting the form, the browse list repopulates full of movies with matching titles.

### Git Yer Hands on the Starter Code

Same procedure as usual here. First, fetch the upstream studio2 branch:

```nohighlight
$ git fetch upstream studio2
remote: Counting objects: 21, done.
remote: Compressing objects: 100% (15/15), done.
remote: Total 21 (delta 6), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (21/21), done.
From https://github.com/LaunchCodeEducation/flicklist
 * branch            studio2    -> FETCH_HEAD
   74b1223..fe10c4f  studio2    -> upstream/studio2
```

Then, checkout a new local branch:

```nohighlight
$ git checkout -b studio2-my-work upstream/studio2
Branch studio2-my-work set up to track remote branch studio2 from upstream.
Switched to a new branch 'studio2-my-work'
```

### A Brief Tour

##### index.html
##### flicklist.js
##### styles.css

### Assignment

##### 0. API key

##### 1. Add a Description Paragraph to Each Browselist Item

##### 2. Disable Buttons

##### 3. Give Watchlist Items a Class Attribute

##### 4. Style the Watchlist Items as Orange Bricks

##### 5. Change the Text Color to Gray

##### 6. Style the Buttons

##### 7. Add a Form to the Page

##### 8. Add a Submit Handler to the Form

##### 9. Implement the `searchMovies` Function

### How to Submit
