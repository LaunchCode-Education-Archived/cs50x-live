##### Module 6
[Back to Class 1](../../class1)

# Studio: Food Finder

The CS50 staff have created a few APIs that are available for students to play with. API stands for Application Program Interface. An API provides a consistent way to access a program. The programmer (that's you!) provides a request to the API using a **method**, providing **parameters** that specify what exactly is being requested. If it sounds similar to using functions in C, that's because it is! The biggest difference for this studio is that the requests are sent over the web instead of using C.

For this studio we are going to use the <a href="https://manual.cs50.net/api/food/">Food API</a> for meals served at Harvard to answer some basic questions.

### Setting Up

You'll notice that you need an "API key" in order to proceed.

<a href="https://docs.cs50.net/signup" target="_blank">https://docs.cs50.net/signup</a>

Fill out the form in the link above. You will then be sent an email to verify your account. Go to the link in the email and login then click the API credentials link at the top of the page. You should then see something that says:

```nohighlight
User Key 123456789123456789123456789
```

This is your API key. When you start forming requests to be sent to the API, you will need to use your API key. If you don't, the API will not send you back any results! This will make more sense once we look at a few examples of requests.

### Using the API

To use the API we need to send a request. According to <a href="https://manual.cs50.net/api/food/">the documentation</a>, a request looks something like this:

```nohighlight
http://api.cs50.net/food/3/facts?param1=value1&param2=value2&...
```

Each request will contain the address to the API, followed by a list of parameters. To request a specific piece of information you need to set these parameters appropriately. For example, if I want to see what was on the menu for lunch today, I could use the following request:

```nohighlight
http://api.cs50.net/food/3/menus?key=123456789123456789123456789&meal=LUNCH&output=json
```
Remember that you will have to use the API key that was assigned to you. The key in the example above will not work! Take it out and replace it with your own key.

Once you have your request, you can run it by using curl, or by pasting the request into a browser window. The first entry of the results might look something like this:

```nohighlight
{
    "date": "2016-03-10",
    "meal": "LUNCH",
    "category": "ACCOMPANIMENTS & FRUIT",
    "recipe": "201002",
    "name": "Local Apples",
    "portion": "1",
    "unit": "each"
}
```

This is a format called JSON. JSON lists key value pairs separated by a colon, and is fairly easy to read. You can also get results in XML if you wish.

### Food Finder

Once you have everything set up, use <a href="https://manual.cs50.net/api/food/">the documentation</a> to form requests that will answer the following questions:

**Question 1**: What items were on the menu for breakfast yesterday?

**Question 2**: Examine this menu item:

```nohighlight
{
  "date": "2016-03-10",
  "meal": "DINNER",
  "category": "ENTREE SALADS",
  "recipe": "510036",
  "name": "Taco Nacho Salad",
  "portion": "6",
  "unit": "oz"
}
```

Write a request that determines how many calories are in five portions of this item.

**Question 3**: Write a request that looks up the ingredients for Taco Nacho Salad. Try this request in two ways: one that uses JSON for the results and one that uses XML. Compare the two result sets and take note of the similarities and differences between them. Your answer to this question should include 2 requests: one for JSON, and one for XML.

###How to Submit

Once you are finished, put your requests into a text file called **requests.txt** and upload that file to Vocareum. Your should include the answers to all 3 questions. 
