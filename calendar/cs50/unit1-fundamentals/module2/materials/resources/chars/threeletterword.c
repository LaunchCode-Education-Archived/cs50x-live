#include <cs50.h>

// Our method: read in three chars, one after the other, then print them all out as part of a message.

// Ask for the first char, store it
printf("char please: ");
char firstChar = GetChar();

// Ask for the second char, store it
printf("char please: ");
char secondChar = GetChar();

// Ask for the third char, store it
printf("char please: ");
char thirdChar = GetChar();

// print them all out
printf(“That spells %c%c%c!”, firstChar, secondChar, thirdChar);
