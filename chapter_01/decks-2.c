#include<stdio.h>
//The stdio(Standard dot I/O) library contains code that allows you to read and write data from and to the terminal.
int main()
/*
The main() function has a return type of int. So what does this mean?
Well, when the computer runs your program, it will need to have some way of
deciding if the program ran successfully or not. It does this by checking the return
value of the main() function. If you tell your main() function to return 0, this
means that the program was successful. If you tell it to return any other value,
this means that there was a problem. 
*/
{
 int decks;
 puts("Enter a number of decks");
 scanf("%i", &decks);

 if (decks < 1) 
 {
    puts("That is not a valid number of decks");
    return 1;
 }

 printf("There are %i cards\n", (decks * 52));

 return 0;

}