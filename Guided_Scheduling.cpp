/*
#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

#define THREADS 4
#define N 25
#define CHUNK 2

int main ( ) 
{
	 #pragma omp parallel for schedule(guided,CHUNK) num_threads(THREADS)

	for (int i = 0; i < N; i++) 
	{
		printf("Thread %d has completed iteration %d.\n", omp_get_thread_num( ), i);

	 }
	return 0;
}
*/

/* OUTPUT - 

Thread 0 has completed iteration 0.
Thread 0 has completed iteration 1.
Thread 0 has completed iteration 2.
Thread 0 has completed iteration 3.
Thread 0 has completed iteration 4.
Thread 0 has completed iteration 5.
Thread 0 has completed iteration 6.
Thread 0 has completed iteration 19.
Thread 0 has completed iteration 20.
Thread 0 has completed iteration 21.
Thread 0 has completed iteration 22.
Thread 0 has completed iteration 23.
Thread 0 has completed iteration 24.
Thread 3 has completed iteration 16.
Thread 3 has completed iteration 17.
Thread 3 has completed iteration 18.
Thread 2 has completed iteration 12.
Thread 2 has completed iteration 13.
Thread 2 has completed iteration 14.
Thread 2 has completed iteration 15.
Thread 1 has completed iteration 7.
Thread 1 has completed iteration 8.
Thread 1 has completed iteration 9.
Thread 1 has completed iteration 10.
Thread 1 has completed iteration 11.
Press any key to continue . . .

*/