/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    /*
    Q: Wait, I don’t get it. When we ask the user what the name of the card is, we’re using an array of characters.
       An array of characters???? Why? Can’t we use a string or something???
    A: C is more low-level than most other languages, so instead of strings, it normally uses something similar: 
       an array of single characters.
    */
    int count = 0;

    while (card_name[0] != 'X')
    {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        //defines a space on output screen with length of 2 characters
        int val = 0;

        switch (card_name[0])
        {
            case 'K':
            case 'J':
            case 'Q':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
                /*break wouldn’t break us out of the loop, because we’re inside a switch statement. We need a continue to go back and check 
                the loop condition agai*/
            
            default:
                val = atoi(card_name);
                // 'atoi' converts the text into a number form "<stdlib.h>" library
                if ((val < 1) || (val > 10))
                {
                    puts("I don't understand that value");
                    continue;
                    //You need another continue here because you want to keep looping
                }
        }
        /* Check if the value is 3 to 6 */
        if ((val > 2) && (val < 7))
        {
            count++;
        }
        /* Otherwise check if the card was 10, J, Q, or K */
        else if (val == 10)
        {
            count--;
        }
        printf("Current count: %i\n",count);

    }
    
    return 0;
    
    
}

/*
Q: Why do I have to prefix the program with ./ when I run it on Linux and the Mac?
A: On Unix-style operating systems, programs are run only if you specify the directory where 
   they live or if their directory is listed in the PATH environment variable.
*/

/*
READ PAGE #52 & #53 TO UNDERSTAND 'STRING' AND ANSWER SOME 'DUMB QUESTIONS'
*/