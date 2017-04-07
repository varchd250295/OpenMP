/*
#include<stdlib.h>
#include <stdio.h>
#include "omp.h"

#define N 10
#define THREADS 3

int main()
{
	int i,B=0;

	#pragma omp parallel num_threads(THREADS)
	{	
		for(i=0; i<N; i++)
		{
			B = i;
			#pragma omp critical
			printf("Thread = %d has value of B=%d \n",omp_get_thread_num(),(B+=i));
		}
	}
	printf("%d",B);
}
*/

/* OUTPUT -

Thread = 0 has value of B=0
Thread = 2 has value of B=0
Thread = 2 has value of B=4
Thread = 2 has value of B=6
Thread = 2 has value of B=8
Thread = 2 has value of B=10
Thread = 2 has value of B=12
Thread = 2 has value of B=14
Thread = 2 has value of B=16
Thread = 2 has value of B=18
Thread = 0 has value of B=28
Thread = 1 has value of B=39
39
Press any key to continue . . .

*/