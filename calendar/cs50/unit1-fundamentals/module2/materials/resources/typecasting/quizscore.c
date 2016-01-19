#include <stdio.h>

int main(void)
{
    
    // Say we are grading a quiz, and the student got 46 right answers 
    // out of 50 total questions...
    
    int num_correct = 46;
    int total = 50;

    // Let's calculate the student's score as a value between
    // 0 and 1, representing the percentage they got correct.
    
    // In regular math terms, we just want to do this:
    // 46 / 50
    // which should yield 0.92
    
    // The line below is definitely not what we want. score needs to be a float, not an int
    // int score = num_correct / total; 
    
    // How about this?
    float score = num_correct / total;
    printf("Score: %f", score); // => prints out "Score: 0.0"
    // That's not right..
    
    // Remember that integer division is weird, truncates everything after the decimal point
    // 3 / 4 => 0.75 => 0
    // 150 / 100 => 1.5 => 1
    // 46 / 50 => 0.92 => 0
    
    // So we need to typecast. 
    // Like this?
    score = (float) (num_correct / total);
    printf("Score: %f", score); // => prints out "Score: 0.0"
    // Still 0.0!
    
    // Gotta cast the ints BEFORE we try to divide with them.
    score = (float) num_correct / (float) total;
    printf("Score: %f", score); // => prints out "Score: 0.92"
    // Much better :)
    
    // Incidentally, you only have to cast one of the values, and it will still work
    score = (float) num_correct / total
    printf("Score: %f", score); // => prints out "Score: 0.92"
    
    
    
}
