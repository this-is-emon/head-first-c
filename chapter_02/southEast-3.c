/*
- THE CODE WORKS! :
    Because the function takes pointer arguments, it’s able to 
    update the original latitude and longitude variables. 
    That means that you now know how to create functions that 
    not only return values, but can also update any memory 
    locations that are passed to them. 
*/
#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon +1;
}

int main()
{
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude,&longitude);

    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
}

/*
- BULLET POINTS :
    -> Variables are allocated storage in memory.
    -> Local variables live in the stack.
    -> Global variables live in the globals section.
    -> Pointers are just variables that store memory addresses.
    -> The & operator finds the address of a variable.
    -> The * operator can read the contents of a memory address.
    -> The * operator can also set the contents of a memory address.
*/