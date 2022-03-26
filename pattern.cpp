//pattern code

#include <stdio.h>
//#include <conio.h>

int main() {
   int i, space, rows, k = 0;
   // Input no. Of required rows
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
          if(k==i-1){
              printf("A ");
          }else{
              printf("B ");
          }
         ++k;
      }
      printf("\n");
   }
   return 0;
}

//      Output
//        A
//       BAB
//      BBABB
//...

//  Attached a Screenshot of the output in this repository.
