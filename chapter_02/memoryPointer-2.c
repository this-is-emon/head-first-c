/*
- POINTERS MAKE IT EASIER TO SHARE MEMORY :
  -> This is one of the main reasons for using pointers—to let functions 
    share memory. The data created by one function can be modified by 
    another function, so long as it knows where to find it in memory.
  -> Now that you know the theory of using pointers to fix the 
    go_south_east()function, it’s time to look at the details of 
    how you do it.
*/
/*
Using memory pointers : There are 03 Steps you need to know in order to use 
pointers to read and write data.
*/
#include<stdio.h>

int main(){


    /*  --Step 1 : Getting the address of a variable : */
        int x = 4; 
        printf("x lives at %p\n", &x); // OUTPUT : x lives at 0061FF1C
        /* 
        Declaring a pointer variable named '*address_of_x', A pointer 
        variable is just a variable that stores a memory address. When you 
        declare a pointer variable, you need to say what kind of data is stored 
        at the address it will point to.
        */
        int *address_of_x = &x; 
        
    //    printf("value of 'x' : %i\n",x); //value of 'x' : 4
    //    printf("value of '*address_of_x' : %i\n",*address_of_x); //value of '*address_of_x' : 4
    //    printf("\n");
    //    printf("address of 'x' : %p\n",&x); //address of 'x' : 0061FF18
    //    printf("address of '*address_of_x' : %p\n",*address_of_x); //address of '*address_of_x' : 00000004
    //    printf("address of 'address_of_x' : %p\n",address_of_x); //address of 'address_of_x' : 0061FF18
       // 'address_of_x' variable stores the address of 'x' variable 
       // But '*address_of_x' has its won address as well
       
       

    /*  --Step 2 : Read the contents of an address : */
        int value_stored = *address_of_x;
        // printf("%i",value_stored); // 4
   
    /*  --Step 3 : Change the contents of an address : */
        *address_of_x = 99;
        // printf("%i\n",*address_of_x);
        // printf("%i\n",value_stored);

    return 0;
}