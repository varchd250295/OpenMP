/*
#include<stdlib.h>
#include<stdio.h>
#include"omp.h"

#define N 10

int main()
{
	int i;
	int a[N], b[N], c[N], d[N];

	for(i=0; i<N; i++)
	{
		a[i] = i;
		b[i] = i/2;
	}

	printf(" Array 1 : \n");
	for(i=0;i<N;i++)
		printf("%d  ",a[i]);

	printf("\n");

	printf(" Array 2 : \n");
	for(i=0;i<N;i++)
		printf("%d  ",b[i]);

	#pragma omp parallel shared(a,b,c,d) private(i)
	{
		#pragma omp sections nowait
		{
			#pragma omp section
			for(i=0; i<N;i++) 
				c[i] = a[i]+b[i];

			#pragma omp section
			for(i=0; i<N;i++) 
				d[i] = a[i]-b[i];
		}
	}

	printf(" SUM : \n");
	for(i=0;i<N;i++)
		printf("%d  ",c[i]);

	printf("\n");

	printf(" DIFFERENCE : \n");
	for(i=0;i<N;i++)
		printf("%d  ",d[i]);
}
*/

/* OUTPUT -

 Array 1 :
0  1  2  3  4  5  6  7  8  9
 Array 2 :
0  0  1  1  2  2  3  3  4  4   SUM :
0  1  3  4  6  7  9  10  12  13
 DIFFERENCE :
0  1  1  2  2  3  3  4  4  5  Press any key to continue . . .

*/