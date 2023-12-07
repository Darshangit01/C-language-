#include<stdio.h>
int main()

{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b,c,d;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3;j++)
		{
			printf("%d" , a[i][j]);
		}
			printf("\n");

	}
	
	b=a[0][0];
	a[0][0]=a[0][2];
	a[0][2]=b;
	
		b=a[1][1];
	a[1][1]=a[1][2];
	a[1][2]=b;
	
		b=a[2][0];
	a[2][0]=a[2][2];
	a[2][2]=b;
	
	
		for(int i=0;i<3;i++)
	{
		for(int j=0; j<3;j++)
		{
			printf("%d" , a[i][j]);
		}
			printf("\n");

	}
	
	return 0;
}