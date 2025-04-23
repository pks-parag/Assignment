#include <stdio.h>

int main() {
    int row1,row2,col1,col2;
    printf("\n\nPlease makesure first and second Matrix's row and column same .\n\n\n ");
    printf("Enter Row of first Matrix : ");
    scanf("%d",&row1);
    printf("Enter Column  of first Matrix : ");
    scanf("%d",&col1);
     printf("Enter Row of second Matrix : ");
    scanf("%d",&row2);
    printf("Enter Column  of second Matrix : ");
    scanf("%d",&col2);

   int arr[row1][col1];
   int arr2[row2][col2];
   printf("Enter Your First Array(A) :  ");
   for (int row=0;row<row1;row++){
       for(int col=0;col<col1;col++){
           scanf(" %d",&arr[row][col]);
       }
   }
   printf("Enter Your Second Array(B) :  ");
   for (int row=0;row<row2;row++){
       for(int col=0;col<col2;col++){
           scanf(" %d",&arr2[row][col]);
       }
   }
   printf("---------------------------------------\n---------------------------------------\nYour First Array :\n");
   for (int row=0;row<row1;row++){
       for(int col=0;col<col1;col++){
           printf(" %d",arr[row][col]);
       }printf("\n");
   }
   printf("----------------------\nYour Second Array :\n");
   for (int row=0;row<row2;row++){
       for(int col=0;col<col2;col++){
           printf(" %d",arr2[row][col]);
       }printf("\n");
   }
   printf("----------------------\n----------------------\nSummation of first and Second Array(A+B)  :\n");
   for (int row=0;row<row1;row++){
       for(int col=0;col<col1;col++){
           printf(" %d",arr2[row][col]+arr[row][col]);
       }printf("\n");
   }
   printf("----------------------\nSubtraction of First and Second  Array(A-B) :\n");
   for (int row=0;row<row2;row++){
       for(int col=0;col<col2;col++){
           printf(" %d", arr[row][col]-arr2[row][col]);
       }printf("\n");

   }


    return 0;
}
