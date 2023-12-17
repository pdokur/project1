#include <stdio.h>  
   
int main() {  
    int inputArray[100], countArray[100];  
    int elementCount, i, j, count;  
   
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers\n", elementCount);
     
    for(i = 0; i < elementCount; i++){
        scanf("%d", &inputArray[i]);
        countArray[i] = -1;
    }
    
    for(i = 0; i < elementCount; i++) {  
        count = 1;  
        for(j = i+1; j < elementCount; j++) {  
            if(inputArray[i]==inputArray[j]) {
                for (int k=j; k<=elementCount; k++)
                {
                    inputArray[k]=inputArray[k+1];
                }
                elementCount--;
            }  
            
        }  
    }  
   
    /* Print count of each element */   
    for(int i = 0; i<elementCount; i++) {  
     
            printf("Element %d \n",inputArray[i]);  
        }  
     
   
    return 0;  
}