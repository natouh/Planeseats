#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

//int seats[12 ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} ;
  int firstClass[4] ={1, 2, 3, 4};
  double  economy[8] ={5, 6, 7, 8, 9, 10, 11, 12};
  int run; 
  

  printf("Please type 1 for \"first class\"\nPlease type 2 for \"economy\"\nPlease type 0 to Exit.\n");
 
 //takes users input for the output menu and decides what should happen with that input
   scanf("%d", &run);
   if(run == 1 ) {
      int i;
   // for (i = 0; i< 4; i++) {
      int random = rand() % 4;
      int randomV = firstClass[random];
      printf( "You have been assigned with First Class seat:  %d\n", randomV);
// }
   }
   srand ( time(NULL) );
   if (run ==2) {
      int randomE = rand() % 15;
      int randomVe = economy[randomE];
      printf( "You have been assigned with economy seat: %d\n", randomVe);	
   }
   
   if (run ==0) {
      printf("Bye!");
      return(0);
  }

}




