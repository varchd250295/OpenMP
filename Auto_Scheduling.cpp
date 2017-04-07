/*
ERROR !!!!!!!!!!!!!!!!!!!!!!!

#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

#define THREADS 4
#define N 25

int main ( ) 
{
	 #pragma omp parallel for schedule(auto)

	for (int i = 0; i < N; i++) 
	{
		printf("Thread %d has completed iteration %d.\n", omp_get_thread_num( ), i);

	}
	return 0;
}
*/