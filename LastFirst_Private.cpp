/*
#include<stdlib.h>
#include <stdio.h>
#include "omp.h"

#define N 10

int main()
{
	int a=0, j=0;

	#pragma omp parallel for private(j) lastprivate(a)

	for (j=0; j<N;j++)
	{
		a = j + 2;
		printf("Thread %d has a value of a = %d for j = %d \n",omp_get_thread_num(), a, j);
	}
	printf("Value of a after parallel = %d\n", a);
}
*/

/* OUTPUT -

Thread 0 has a value of a = 2 for j = 0
Thread 1 has a value of a = 4 for j = 2
Thread 3 has a value of a = 7 for j = 5
Thread 5 has a value of a = 9 for j = 7
Thread 7 has a value of a = 11 for j = 9
Thread 0 has a value of a = 3 for j = 1
Thread 4 has a value of a = 8 for j = 6
Thread 2 has a value of a = 6 for j = 4
Thread 6 has a value of a = 10 for j = 8
Thread 1 has a value of a = 5 for j = 3
Value of a after parallel = 11
Press any key to continue . . .


*/