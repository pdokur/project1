#include <string.h>
#include <stdio.h>

 main () {
    
   char str[] = "bcdhbdh.jd.bcjdbc"; 
   int size=strlen(str);
   char tokenized_str[size];
   strcpy(tokenized_str,str);
   printf("%d %d\n",size,str[5]);
   printf( " before tokenized string %s\n", tokenized_str );
    

  
   const char s[] =".";
   char *token;
   //get the first token 
   token = strtok(tokenized_str, s);
   
   // walk through other tokens 
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s); //In place of delimiter it replace with NULL, so strtok is not safe for original string.
   }
   
   for (int i=0; i<=size; i++ )
   {
       if(tokenized_str[i]==NULL)
       printf("there is a null\n");
       else
       printf("%c\n",tokenized_str[i]);
       
   }
   printf( " After tokenized string %s\n", tokenized_str );
   return(0);
}