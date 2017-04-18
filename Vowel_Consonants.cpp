#include <stdlib.h>
#include <omp.h>
#include <stdio.h>

int main()
{
	//omp_set_nested(1);

	int i,v=0,c=0,len=0;
	char s[1000];



	printf(" String de user (ye code mere maalik Varun ne banaya hain) \n");
	gets(s);

	while(s[i]!='\0')
	{
		len++;
		i++;
	}

	#pragma omp parallel for num_threads(8)
		for(i=0;i<len;i++)
		{

			if(s[i]==' ')
				s[i]='#';
			else
			{
				if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
					v++;
				else
					c++;
			}

		}
	 
	printf("\n Vowels = %d",v);
	printf("\n Consonants = %d",c);
	printf("\n %s ",s);

	return 0;

}