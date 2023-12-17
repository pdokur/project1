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
                countArray[j] = 0;    
                count++;
            }  
        }  
        if(countArray[i]!=0) {  
            countArray[i] = count;  
        }  
    }  
   
    /* Print count of each element */   
    for(i = 0; i<elementCount; i++) {  
        if(countArray[i] != 0) {  
            printf("Element %d : Count %d\n", 
              inputArray[i], countArray[i]);  
        }  
    }  
   
    return 0;  
}

/*
#include <stdio.h>
void findDuplicates(int arr[], int n);

// main function
int main()
{
  // original array
  int arr[] = {50, 20, 10, 40, 20, 10, 10, 60, 30, 20, 70,90,10,90};

  // find array size
  int size = sizeof(arr)/sizeof(arr[0]);
      
  // find duplicates
  findDuplicates(arr, size);
  
  return 0;
}
void findDuplicates(int arr[], int n)
{
  // create another array of similar size
  int temp[n];
  int count = 0;
      
  // traverse original array
  for(int i=0; i<n; i++) {
         
    int element = arr[i];
    int flag = 0;
         
    // check current element is already 
    // checked or not
    for(int j=0; j<count; j++) {
      if(temp[j] == element) {
        flag = 1;
        break;
      }
    }
         
    // if already exist then don't check
    if(flag) {
      continue;
    }
         
    // check occurrence of element
    for(int j=i+1; j<n; j++) {
      if(arr[j] == element) {
        temp[count++] = element;
        // found, therefore break
        break;
      }
    }
  }
      
  // display duplicate elements
  printf("Repeated elements are: \n");
  for (int i = 0; i < count; i++) {
    printf("%d \n",temp[i]);
  }
}




/*
#include <stdio.h>
// function to find duplicates in sorted array
void findDuplicates(int arr[], int n)
{
  // create another array of similar size
  int temp[n];
  int count = 0;
    
  // traverse original array
  // (don't check first element)
  for(int i=1; i<n; i++) {
   
    // current element
    int element = arr[i];

    // if already exist then don't check
    if(element == temp[count]) {
      continue;
    } 
   
    // check occurrence of element
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == element) {
        temp[count++] = element;
        // found, therefore break
        break;
      }
    }
  }

  // display duplicate elements
  printf("Repeated elements are: ");
  for (int i = 0; i < count; i++) {
    printf("%d ",temp[i]);
  }
}
// main function
int main()
{
  // original array
  int arr[] = { 55, 55, 55, 60, 60, 70, 75, 75, 80, 85 };

  // find array size
  int size = sizeof(arr)/sizeof(arr[0]);
    
  // find duplicates
  findDuplicates(arr, size);
  
  return 0;
}
*/