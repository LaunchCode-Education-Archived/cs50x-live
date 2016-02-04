#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    int* hashLocations;
    int length;
} csvLine;

csvLine extractNumbers(char* line);

int main(void)
{
	//You need to do the following:
	
	//Prompt the user for an input file
	
	//Prompt the user for an output file
	
	//Open the file to read from
	
	//Open the file you're writing to
	
	//For each line being read in from the input file:
	
		//Pass the line into the given extractNumbers function
		
		//Create a string that contains 1000 spaces using the following line of code
		char lineOut[1000] = {' '};
		
		//For each value in the int array returned by extractNumbers:
		
			//set that position in lineOut to be a '#'
			
		//Print all of lineOut to the output file
		
	//Close both files
	
}

csvLine extractNumbers(char* line)
{
	int count = 0;
	for(int i = 0; i < strlen(line); i++)
	{
		if(line[i] == ',')
		{
			count++;
		}
	}
	
	char* token;
	int* hV = malloc(sizeof(int) * (count+1));
	int i = 0;
	token = strtok(line, ",");
	hV[i] = atoi(token);
	i++;
	while ((token = strtok(NULL, ",")) != NULL)
	{
		hV[i] = atoi(token);
		i++;
	}
	struct csvLine result;
	result.hashLocations = hV;
	result.length = count + 1;
	return result;
}
