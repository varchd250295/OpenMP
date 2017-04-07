/*
#include<stdlib.h>
#include<stdio.h>
#include"omp.h"

#define SIZE 10

int main()
{
	int a[SIZE],i,sum=0;

	for(i=0;i<SIZE;i++)
	{
		a[i]=i;
	}

	#pragma omp parallel for

	for(i=0;i<SIZE;i++)
	{
		sum+=a[i];
		printf("Thread %d  a[%d]= %d \n",omp_get_thread_num(),i,a[i]);
	}
	printf("Sum = %d \n",sum);
}
*/

/* OUTPUT -

Thread 0  a[0]= 0
Thread 0  a[1]= 1
Thread 5  a[7]= 7
Thread 6  a[8]= 8
Thread 7  a[9]= 9
Thread 1  a[2]= 2
Thread 1  a[3]= 3
Thread 3  a[5]= 5
Thread 4  a[6]= 6
Thread 2  a[4]= 4
Sum = 45
Press any key to continue . . .

*/