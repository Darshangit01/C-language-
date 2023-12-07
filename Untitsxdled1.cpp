
#include<stdio.h>

int main()
{
char a;
double  num1,num2,result;

printf("enter a a (+,-,\,*)");
scanf("%c", &a);


printf("enter a two num ");
scanf("%lf%lf" , &num1, &num2);

switch(a)
{
	case'+':
	result=num1+num2;
	break;
	
	case'-':
	result=num1-num2;
	break;
	
	case '/':
	result=num1/num2;
	break;
	
	
	case'*':
	result=num1*num2;
	break;
	
	default:
		printf("enter valid ");

printf("%.2lf" , result);
	
return 0;
}
}

/*

#include<stdio.h>

int main()
{
int a;
char  n,result;

printf("enter a year");
scanf("%d", &a);


printf("enter a menu n(m,d,h,s) ");
scanf("%c" , &n);

switch(n)
{
	case'm':
	result=a*12;
	break;
	
	case'd':
	result=a*365;
	break;
	
	case 'h':
	result=a*8760;
	break;
	
	
	case's':
	result=a*1892160000;
	break;
	
	default:
		printf("enter valid ");

printf("%d" , result);
	
return 0;
}
}
*/