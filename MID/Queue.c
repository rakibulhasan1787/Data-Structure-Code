#include<stdio.h>

int queue[10]; int front = -1, back = 0;// declared array size and variables//

void enQueue(int value){
      front++; // index will increment
      queue[front] = value;// storing value in index
   }

void deQueue(){
      printf("\nDeleted : %d", queue[back]);// last element will show
      back++;
   }

void display(){
      printf("\nQueue elements are:\n");
      for(int i=back; i<=front; i++)
	 printf("%d\t",queue[i]);
   }


void main()
{

enQueue(5);enQueue(10);enQueue(15);enQueue(40);display();deQueue();deQueue();display();
}
