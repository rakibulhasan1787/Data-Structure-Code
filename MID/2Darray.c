#include<stdio.h>

void main(){

int a[10][10]; // declared array size (Fixed)//

int i,j,rows, columns,sum; // Declared Variables
sum=0;                    //
printf("Enter Row : \n");
scanf("%d", &rows);
printf("Enter Columns : \n");
scanf("%d", &columns);

printf("Enter your array Element one by one\n");

for(i=0;i<rows;i++){ // using loops for 2d array

    for(j=0;j<columns;j++){

          scanf("%d", &a[i][j]);  // entering the elements of 2d arrays index.//
    }

}
printf("your array \n");

for(i=0;i<rows;i++){

    for(j=0;j<columns;j++){
    	sum = sum+a[i][j];  // adding row and columns//
          printf("%d ", a[i][j]);
    }
    printf("\n");
}

printf("\nSum of 2D array = %d\n",sum); // showing the sum of row and columns//

}
