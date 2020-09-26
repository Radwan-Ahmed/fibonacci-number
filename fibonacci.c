#include<stdio.h>
int main()
{
    int f1=1,f2=1,i,n;
    printf("first 10 fibonacci number is: \n");
    printf("%d %d",f1,f2);
    for(i=1;i<=8;i++)
    {
        n=f1+f2;
        printf("\t%d",n);
        f1 =f2;
        f2=n;
    }
}
