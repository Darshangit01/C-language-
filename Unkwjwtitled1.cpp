/*

#include<stdio.h>
int main()
{
	int num[5];
	int even=0;
	int odd=0;
	for(int i=0 ; i<5 ; i++)
	{
		printf("enter any five no" , i+1);
		scanf("%d" , &i);
	}
	
	for(int i=0 ;i<5 ; i++)
	{
		if(num[i]%2)
		{
			even++;
		}
		else{
		odd++;
		}
		printf("total even no are" , even);
		printf("total odd no are " , odd);
		
	}

return 0;
}




*/
/*

#include<stdio.h>
int main ()
{
int i,n;


int a[5];
printf("entwr  a no ");
scanf("%d%d", &a ,&n)

for(int i=b ; i<n ; i++)
{
	scanf("%d" , &a[i]);
}

for(int i=n-1; i>=b;i--)
{

}
	printf("%d " , a[i]);
return 0;
}

*/
/*

#include <stdio.h>

int main() {
    int n;
    printf("Enter how many no u wnat to reverse ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d value: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    

    printf("Reversed value is  ");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/



#include<stdio.h>
int main ()
{
	int row=3;
	int col=4;
	int i,j ; 
	int a[row][col];
	for(i=0 ;i<col ; i++)
	{
		for(j=0 ; j<row ; j++)
		{
			scanf("%d" , &a[i][j]);
		}
		
		for(i=0; i<col;i++)
		{
			for(j=0 ;j<col ;j++)
			{
				printf("%d" , a[i][j]);
			}
			printf("\n");
			
		}
	}
	return 0;
}
