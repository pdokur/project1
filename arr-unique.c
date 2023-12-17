#include<stdio.h>

int main()
{
    int a[20]={1, 1, 5, 1, 5, 20, 2, 12, 10,1,20,31,10,45};
    
    int size=sizeof(a)/sizeof(a[0]);
    int freq[size];

    for(int i=0; i<size; i++)
    {
        freq[i]=-1;
    }

    int i,j;
    for ( i=0; i<size; i++)
    {
        int count=1;
        for( j=i+1; j<size; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
                
            }
            if(freq[i]!=0)
            {
                freq[i]=count;
            }
        }
    }

    for(int i=0; i<size; i++)
    {
        if(freq[i]==1)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}