/*
#include<stdlib.h>
#include<stdio.h>
#include"omp.h"

#define SIZE 10

int main()
{
	int a[SIZE],b[SIZE],c[SIZE],i;

	for(i=0;i<SIZE;i++)
	{
		a[i]=i;
		b[i]=i;
	}

	#pragma omp parallel for

	for(i=0;i<SIZE;i++)
	{
		c[i]=a[i]+b[i];
		printf("Thread %d  c[%d]= %d \n",omp_get_thread_num(),i,c[i]);
	}
}
*/

/* OUTPUT -

Thread 4  c[6]= 12
Thread 1  c[2]= 4
Thread 1  c[3]= 6
Thread 6  c[8]= 16
Thread 2  c[4]= 8
Thread 5  c[7]= 14
Thread 0  c[0]= 0
Thread 0  c[1]= 2
Thread 3  c[5]= 10
Thread 7  c[9]= 18
Press any key to continue . . .


*/