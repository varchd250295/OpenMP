/*
#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

void main()
{
	//omp_set_nested(1);
	int i,j;

	#pragma omp parallel for collapse(2) num_threads(8)
	for(i=0;i<4;i++)
	 for(j=0;j<4;j++)
		printf("hello from thread %d \n ", omp_get_thread_num());

}
*/