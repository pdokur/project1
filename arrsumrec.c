#include<stdio.h>

int addsum(int a[], int s, int n);
int main()
{
    int a[2];
    int s=0;
    int size= sizeof(a)/sizeof(a[1]);

printf("enter the elements\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum=addsum(a, s, size);
        printf("print 2 : sum is : %d\n", sum);

}

int addsum(int a[], int s, int n)
{
    if (s>=n)
    return 0;

 static int sum=0;
    sum=sum+a[s];

    printf("print 1 :  sum is : %d\n", sum);
    //sum=sum+a[s];
    addsum(a, s+1, n);

return sum;

}