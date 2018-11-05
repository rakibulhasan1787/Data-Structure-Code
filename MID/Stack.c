#include <stdio.h>

int stack[20]; //Declared array size
int front = -1;

void push(int data){// it is the function of data storing//
front++;// here index will be increment.  0,1,2,3,4,5,6,7,.... first index will be 0 cause i have declared the front -1.//
stack[front] = data; // here data will be reserve in 0,1,2,3,4,5,6,....//
}

int pop(){ //this is data deletion function //
int data = stack[front];// here the function will check where is the data.
front--;  // here the data  will decrement from back side.// the last data will remove
return data; // the data will return//

}

void printstack(){ // this is a data display function, console will show everything by it.//
    printf("Data in your stack\n");
    for(int i=0;i<=front;i++){ // using loop
            printf("%d ",stack[i]);// showing the data of push or pop functions//
    }

}

void main()
{
    push(5);
    push(7);
    push(10);// entering data
    printstack();// showing data
    int data = pop();// it will call the pop function and will remove the last data.
    printf("\nyour pop data %d \n",data);// this will show the removed data.
    printstack(); // showing removed data
}
