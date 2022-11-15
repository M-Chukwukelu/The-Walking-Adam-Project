#include <stdio.h>
#include <stdlib.h>

/*THE WALKING ADAM PROJECT*/

int main()
{
    printf("WELCOME TO THE WALKING ADAM PROJECT\n\n");

    char line1_numoftestsline[100]; /*variable that will store the first line that contains how many test cases there will be*/

    FILE * fpointer = fopen("Adam.in", "r");/*opening Adam.in and stating that we are reading the file*/
    /*please note that you will have to put the storage path for Adam.in to replicate the result.
    for my convenience, i stored it in the same folder as my C file so there was no need for that
    it should look like the following
    'C:\Documents\CSC235\The Walking Adam Project\Adam.in'
    C is a case sensitive language so adjust the adam.in file name until the code matches what is in your storage*/

    fgets(line1_numoftestsline, 100, fpointer);/*retrieve the first line and store it here*/

    int numoftests = atoi(line1_numoftestsline);/*convert it to an integer to serve as a counter that can be used to instruct the program how many times to loop*/

    int i;
    for (i = 1; i <= numoftests; i++ )
        {
            char steps_string[100];/*create a variable that will store each line of input*/
            fgets(steps_string, 100, fpointer);/*retrieving the string*/

            int numofsteps = 0;/*declare a variable to store the number of steps in each string*/
            int k = strlen(steps_string);/*storing the length of the string to serve as a counter*/

            for (int j = 0; steps_string[j] == 'U'; j < k) /*reiterating over each character in the string until we hit a D*/
                {
                    numofsteps++;
                    j++;
                }
            printf("%d\n", numofsteps);




        }


    fclose(fpointer);

    return 0;
}
