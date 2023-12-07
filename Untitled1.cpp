/*
#include<stdio.h>
int main ()
{
	
	int num , sum=0 ,firstnum,lastnum;
	
	
	lastnum=num %10;
	firstnum=num;
	while (num>=10)
	
	{
		num=num/10;
	}
	
	firstnum=num;
	sum=firstnum+lastnum;
	
	printf("%d", sum);

	
	
	return 0;
}
*/


/*
#include<stdio.h>
int main ()
{
	int a=10;
	
	do{
		printf("%d\n" , a);
		a=a-1;
		
	}
	
	while(a>=0);
	
	return 0;
}
*/


#include<stdio.h>
int main ()
{
	
	int x , i ,sum=0 , n ;
	
	printf("enter a size of no ");
	scanf("%d" , &n );
	for(i=1;i<=n; i++)
	{
	
	printf("enter a n0");
	scanf("%d" , &x);
	
	if(x<0)
	{
		break;
		continue;
	}
	
	sum=sum+x;
}
printf("%d " , sum);

return 0;
	}
	
