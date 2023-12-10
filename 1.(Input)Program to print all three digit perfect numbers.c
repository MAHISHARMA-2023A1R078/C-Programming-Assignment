//Title of program
//Program to print all three digit perfect numbers
#include<stdio.h>
//function heading
void main()
{
//variable declaration
    int n,i,sum;
    int max,min;
    //output statement 
    printf("Enter the maximum limit:");
    //input statement 
    scanf("%d",&min);
    //output statement
    printf("Enter the minimum limit:");
    //input statement 
    scanf("%d",&max);
    //condition to print all three digit perfect numbers
    for(n=min;n<max;n++)
    {
        i=1;
        sum=0;
        while(i<n)
        {
        if(n%i==0)
            sum=sum+i;
        i++;
        }
    if(sum==n) 
    {
    //output statement 
    printf("all the three digit perfect numbers:%d\n",n);
    }
    }
}