/*
#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

#define THREADS 4
#define N 17
#define CHUNK 2

int main ( ) 
{
	int i;

	#pragma omp parallel for schedule(static,CHUNK) num_threads(THREADS)

	for (i = 0; i < N; i++) 
	{		
	printf("Thread %d has completed iteration %d.\n", omp_get_thread_num( ), i);
	 }

	return 0;
}
*/

/* OUTPUT - 

Thread 0 has completed iteration 0.
Thread 0 has completed iteration 1.
Thread 0 has completed iteration 8.
Thread 0 has completed iteration 9.
Thread 0 has completed iteration 16.
Thread 2 has completed iteration 4.
Thread 2 has completed iteration 5.
Thread 2 has completed iteration 12.
Thread 2 has completed iteration 13.
Thread 3 has completed iteration 6.
Thread 3 has completed iteration 7.
Thread 3 has completed iteration 14.
Thread 3 has completed iteration 15.
Thread 1 has completed iteration 2.
Thread 1 has completed iteration 3.
Thread 1 has completed iteration 10.
Thread 1 has completed iteration 11.
Press any key to continue . . .

*/
