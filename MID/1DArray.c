#include<stdio.h>

void main()
{
int a[10]; //Declared array size(fixed)//
int i, n;  //Declared variables

printf("How Much Elements you want to enter:\n");
scanf("%d", &n);// the number of total elements//

printf("enter element one by one===> \n");


for(i = 0; i<n; i++)//Using loop//
{

scanf("%d", &a[i]);// Entering Elements in the index of array //

}

printf("The List you entered\n");// all the entered elements will show //

for(i = 0; i<n; i++)// using loop for output//
{

printf("%d ", a[i]);// showing all the entered array elements//

}
}
