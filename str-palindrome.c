#include <stdio.h>
#include <string.h>
/*
int main()
{
    char str[]="maaadaaam";
    int len, flag=0;
    len= strlen(str);

    for (int i=0, j=len-1; i<j; i++, j--)
    {
        if(str[i]!=str[j])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    printf("String is palindrome\n");
    else
    printf("String is not palindrome\n");
    
}*/


int main()
{
    int a[]={1,2,3,4,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;

    for (int i=0, j=n-1; i<n/2; i++, j-- )
    {
        if(a[i]!=a[j]){
            count++;
            break;
        }
    }
    if(count){
        printf("given array is not palindrome\n");
    }else{
        printf("given array is a palindrome\n");
    }

}