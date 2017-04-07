/*
#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

#define THREADS 4
#define N 25

int main ( ) 
{
	int i;

	#pragma omp barrier
	#pragma omp parallel for num_threads(THREADS)	

	for (i = 0; i < N; i++) 
	{
		printf("Thread %d = Iteration %d.\n", omp_get_thread_num( ), i);
	}
	return 0;
}
*/

/* OUTPUT -

Thread 0 = Iteration 0.
Thread 3 = Iteration 19.
Thread 1 = Iteration 7.
Thread 1 = Iteration 8.
Thread 1 = Iteration 9.
Thread 1 = Iteration 10.
Thread 3 = Iteration 20.
Thread 3 = Iteration 21.
Thread 3 = Iteration 22.
Thread 3 = Iteration 23.
Thread 3 = Iteration 24.
Thread 2 = Iteration 13.
Thread 2 = Iteration 14.
Thread 2 = Iteration 15.
Thread 2 = Iteration 16.
Thread 2 = Iteration 17.
Thread 2 = Iteration 18.
Thread 0 = Iteration 1.
Thread 0 = Iteration 2.
Thread 0 = Iteration 3.
Thread 0 = Iteration 4.
Thread 0 = Iteration 5.
Thread 0 = Iteration 6.
Thread 1 = Iteration 11.
Thread 1 = Iteration 12.
Press any key to continue . . .

*/
