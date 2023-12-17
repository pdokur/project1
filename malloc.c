#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define ONEGB (1 << 30)

int main() {
    printf("%d\n",ONEGB );
    int count =0;
    int *p=(int*)malloc(ONEGB);
     printf("%d\n",sizeof(p) );

     
    while(1)
    {
        int *p=malloc(ONEGB);
        if(p==NULL){
            printf("malloc refused after %d GB\n",count);
            return 0;
        }
        memset(p,1,ONEGB);
        printf("got %d GB \n", ++count);
        //free(p); don't use this for now
    }
    
}