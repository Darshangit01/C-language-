/*
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    
    if ((a%5 ==0) && (a%11 ==0))


{
	printf("the value is divided by both 5 and 11");
}
    
    {
        if (a%5 ==0)
        {
            printf("the  value is divided by 5");
        }
        else
        {
        printf("value is not divided by 5  ");
        }
    }
    
    if (a%11 ==0)
    
    {
	printf("value is divide by 11");
}
        else 
        {
            printf("value is not divided by 11");
        }
        
       
        
        return 0;
    }
    
    
*/

/*
#include<stdio.h>
int main()

{
	
	int a;
	printf("enter a number");
	scanf("%d" , &a);
	
	if ((a%5 ==0) && (a%11 ==0))
	{
		printf("valur is divided by both 5 and 11");
	}
	
	else if (a%5 ==0)
	{
		printf("value is divided by 5");
	}
	
	else if (a%11 ==0)
	{
		printf("value is divided by 11");
		}
		
		else
		{
			printf("value is not divided by 5 or11");
		}
		
		return 0;
}
*/


/*
#include<stdio.h>
int main ()

{

int a;
printf("enter a numer");
scanf("%d" , &a);


switch(a)
{

case 90:
printf("you have grade a  ");
break;

case 80:
printf("you have grade b");
break;

case 70:
printf("you have grade c");
break ;

default: printf("you faild");
}
return 0;
}

*/


/*
#include<stdio.h>
int main ()

{
	int score;
	printf("enter your mark");
	scanf("%d" , &score);
	
	if (score>=0 && score<=100)
	{
	
	int range =score/10;
	
	switch(range)
	{
	
	case 10:
		printf("you have grade A+");
		break;
		
		case 9:
			printf("you have grade A");
			break;
			
			case 8:
				printf("you have grade B");
				break;
				
				case 7:
					printf("you have grade C");
					break;
					
					case 6:
						printf("you have grade D");
						break;
						
						case 5:	
						
						default: printf("you failed");
					
}

return 0;
}
}

*/

/*
#include<stdio.h>
int main ()
{
	char value ;
	double num1,num2,result;
	
	printf("enter a operator -,+,*,/");
	scanf("%c" , &value);
	
	printf("enter a two int");
	scanf("%lf%lf" , &num1, &num2);
	
	switch(value)
	{
		case '-':
			result= num1-num2;
			printf("%.2lf" , result);
			break;
			
			
			case '+':
				result=num1=-num2;
				printf("%.2lf", result);
				break;
				
				case '*':
					result=num1*num2;
					printf("%.2lf" ,result);
					break;
					
					case'/':
						result=num1/num2;
						printf("%.lf" , result );
						break;
						
						
						
	}
	
}

*/

/*

#include <stdio.h>

int main() 
{
    int num_cups, size;
    float cost_cup, total_cost, discount;

    printf("Enter the number of cups  ");
    scanf("%d", &num_cups);

    printf("Enter the size of each cup (1 for small, 2 for medium, 3 for large) ");
    scanf("%d", &size);

    switch (size)
	
	 {
        case 1:
        	
            cost_cup = 2.5;
            break;
            
        case 2:
        	
            cost_cup = 3.5;
            break;
            
        case 3:
        	
            cost_cup = 4.5;
            break;
            
        default:
            printf("Invalid cup size entered.\n");
            return 0;
    }

    total_cost = num_cups * cost_cup;

    if (num_cups >= 30) 
	{
        discount = 0.8;
    } 
	
	else if (num_cups >= 20)
	
	 {
        discount = 0.85;
    }
	
	 else if (num_cups >= 10)
	 {
        discount = 0.9;
    } 
	

    total_cost -= total_cost * discount;

    printf("Total cost of your order per cup is %.2f\n", total_cost );

    return 0;
}
*/

/*
#include<stdio.h>
int main ()

{
	
	int a=1;
while (a<=20)
{
	printf("%d", a);
	a= a+1;
	
}
printf("value" , a);

return 0;
}

*/
/*
#include<stdio.h>
int main ()

{
	char vovels;
	printf("enter a alphabate");
	scanf("%c", vovels);
	
switch (vovels)
{
	case 'a':
		printf(" a is a vovels");
		break;
		
		case 'e':
			printf("e is a  vovels");
			break;
			
			case 'i':
				printf(" i is a vovels");
				break;
				
				case 'o':
					printf(" o is a vovels");
					break;
					
					case 'u':
						printf(" u isa vovels");
						
						default:
							printf("enter alphabate is not vovels");
						}
						
}
return 0;
}

*/

#include<stdio.h>
int main ()
{
	int a;
	printf("enter a no ");
	scanf("%d", &a);
	
	
	if(a/2)
	{
		printf("value is prime");
	}
	
	else 
	{
		printf("value is prime");
	}
	return 0;
}