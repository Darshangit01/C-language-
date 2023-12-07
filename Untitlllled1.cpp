//write a c program to find sum of each row and collumn of an matrix


#include <stdio.h>
int main ()
{
    	int i, j ,sum;
	int a[3][3]={{1,2,3,},{4,5,6,} ,{7,8,9}} ;
	int rowsum[3]={0};
	int colsum[3]={0};

	
	for(i=0; i<3; i++)
	{
		for(j=0 ; j<3; j++)
		{
		rowsum[i]+=a[i][j];	
		    colsum[j]+=a[i][j];
		}
		

	}
	
	printf("sum of row is :");
	for(i=0 ;i<3 ; i++)
	{
		printf("%d%d \n" , i+1 ,rowsum[i]);
	}
	
	
		for(j=0 ;j<3 ; j++)
	{
		printf("%d%d \n" , j+1 ,colsum[j]);
	}
	
	
	

	
	return 0;
 } 