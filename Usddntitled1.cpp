//print even  no in the range 
#include<stdio.h>
int main ()
{
	int a,i ,b;
	printf("enter a no of range ");
	scanf("%d", &a);
	
	for( i=0 ; i<a ; i++)
	{
		if(i%2==0)
		printf("%d", i);
	
	}
	printf("\n");
	

}