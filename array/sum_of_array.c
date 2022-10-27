#include<stdio.h>
int main()
{

    int a[100],n,i,sum=0;
    printf("enter the limit:\n");
    scanf("%d",&n);
    printf("enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum +a[i];
    }
    printf("sum is %d",sum);
}
