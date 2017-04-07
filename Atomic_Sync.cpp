#include<stdlib.h>
#include <stdio.h>
#include "omp.h"

#define N 10
#define THREADS 3

int main()
{
	int a[N];

	#pragma omp parallel for num_threads(THREADS)
	
		for(int i=0; i<N; i++)
		{
			#pragma omp atomic
			a[i]+=i;
			
			printf("Thread = %d has value of %d \n",omp_get_thread_num(),i);
		}
	
	
}