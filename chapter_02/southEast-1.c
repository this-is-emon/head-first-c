/*
- The game will track the location of players using latitudes and 
longitudes. The latitude is how far north(Up) or south(Down) the player 
is, and the longitude is her position east(Right) or west(Left). If a player 
wants to travel southeast, that means her latitude will go down, 
and her longitude will go up:
*/
#include<stdio.h>

void go_south_east(int lat, int lon){
    lat = lat - 1;
    lon = lon + 1;
}

int main(){
    /*Initially, the main() function has a local variable called latiitude, that had value -32*/
    int latitude = -32;
    int longitude = 64;
    /*
     - When the computer calls the go_south_east() function, it 
       copies the value of the 'latiitude' variable to the 'lat' argument. 
       This is just an assignment from the 'latiitude' variable to the 'lat'
       variable. 
     - "When you call a function, you don’t send the variable as an 
       argument, just its value."
    */
    go_south_east(latitude,longitude);
    /*
     - When the go_south_east() function changes the 
       value of lat, the function is just changing its local copy. 
     - That means when the computer returns to the main()
       function, the latitude variable still has its original value of -32.
    */

    printf("Avast! now at: [%i, %i]\n", latitude, longitude);
    // OUTPUT : Avast! now at: [-32, 64]

    return 0;
}

/* PROBLEM: Instead of passing the value of the latitude and longitude variables, 
  - what happens if you pass their addresses(means variable itself)?
  - Trying to pass a pointer to the variable,may full-fill that purpose. 
*/

/*  --Read the 'meomoryPointer-2.c' file, to get a hint to solve the above problem--*/