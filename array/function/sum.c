// sum of n numbers using function....
int sum(){
    int a[100],i,n,sum=0;
    printf("enter the limit:\n");
    scanf("%d",&n);
    printf("|enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum =sum+a[i];
    }
    printf("sum is %d",sum);
}
void main()
{
    printf("\t \t sum of the numbers\n ");

    sum();
}