// recursion: the process in which the function calls itself direcltly or indirectly is called recursion and the corrosponding function is i\called a recersive  function 
//in resuursive program soln of base case is provide and the soln of bigger problem is express in term of smaller problem 

/*
#include<stdio.h>
int fact ();
int main()
{
	int n,f;
	int fact;
	printf("enter a no ");
	scanf("%d " , &n);
	f= fact(n);
	printf("factorial =%d" , f);
	
}

int fact(int n )
{
	
	if(n==1)
	{
		return 1;
		
	}
	
	else 
	{
		return n*fact(n-1);
		
	}
}

*/

//the pointer in c is verianle which store the adress of another veriable cab be of type ; int , float , char etc 
// advantage of pointer reduces the code and improve the performance , 
//it is used to retreves string and use with arrey structur and funct
// we can return multiple values froma funct using pointer ,its make you able to acess memory location .



#include<stdio.h>
int main ()
{
	int a,b;
	a=10;
	b=20;
	
	int *ptr;
	ptr= &a ;
	int *q=&b;
	
	printf("the value os a and b is: %d\n%d" , *ptr);
	printf("the value os a and b is: %d\n%d" , *q);
}