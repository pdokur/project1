#include<stdio.h>
#include<limits.h>

int main()
{
    int a[]={1, 4, 6, 9, 15,99};
    int b[]={2, 5, 8, 10,77};
    int a_size=sizeof(a)/sizeof(a[0]);
    int b_size=sizeof(b)/sizeof(b[0]);
    int sum_ab= a_size+b_size;

    int c[sum_ab];
    int c_size=sizeof(c)/sizeof(c[0]);
    printf("size of C %d\n",c_size);


    for (int i=0; i<a_size; i++)
    {
        c[i]=a[i];
    }
    for (int i=0, j=a_size; i<b_size && j<c_size; i++,j++)
    {
        c[j]=b[i];
    }
    for (int i=0; i<c_size; i++)
    {
        printf("%d\n",c[i]);
    }


    for (int i=0; i<c_size; i++)
    {
        int temp=0;
        for(int j=i+1; j<c_size; j++)
        {
            if(c[i]>=c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\n -----------------\n");
    for (int i=0; i<c_size; i++)
    {
        printf("%d\n",c[i]);
    }
    
}