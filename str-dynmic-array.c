#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
int size,i;
printf("Please type the size of array: \n");
scanf("%d",&size);
char *str_array[size];
char array_i[size];

printf("Enter the strings:\n");
for(i=0;i<size;i++)
{
scanf("%s", array_i);
str_array[i]= (char*)malloc(strlen(array_i)*sizeof(char));
strcpy(str_array[i],array_i);
}

printf("Your strings were: %d\n",strlen(array_i)*(sizeof(char)));
for(i=0;i<size;i++)
 {
  printf("%s\n", str_array[i]);
 }
return 0;
}