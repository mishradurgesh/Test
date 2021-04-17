#include<stdio.h>
#define total_elements sizeof(array)/sizeof (array[0])
int array[] = {23,34,12,17,204,99,16};
int main()
{
	int d;
	printf("%d",total_elements);
	for(d=-1;d<=(total_elements -2);d++)
	printf("%d",array[d+1]);
	return 0;
	
}
