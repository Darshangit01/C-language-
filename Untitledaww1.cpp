/*
#include<stdio.h>
#include<string.h>

int main ()
{
	char s[]="abcd";
	int i;
	
	for(i=0 ; s[i] !=  '\0'; ++i)

		printf("%s", i);
	
}
*/

//the strlel writtens the lenght of give string if dosnt count \0 

#include<stdio.h>
#include<string.h>
int main ()
{
	char s[5] ,s1[5];
	printf("enter a no ");
	gets(s);
	printf("entr a second no");
	gets(s1);
	
	if(strcmp(s,s1)==0)
	{
		printf("string are same ");
	}
	else{
		printf("str are not same ");
	}



	}
	
//strcpy:this function copy the store strength in destination
//strcat: this function  cancadinate  two string and result iswritten ti friswt string 
//strrev: this function  writeen the revrese of the give string 
//strcmp: 