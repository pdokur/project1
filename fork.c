#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int main( ){
   pid_t child_pid;
   printf("1--- %d\n",  child_pid);
   printf("2-------%d\n\n\n",getpid());

   child_pid =  fork (); // Create a new child process;
   printf("3----- %d\n",  child_pid);
   printf("4-------\n");

   if (child_pid < 0) {
      printf("fork failed");
      return 1;
   } else if (child_pid == 0) {
      printf("5----- %d\n",  child_pid);
      printf ("child process successfully created!\n");
      printf ("child_PID = %d,parent_PID = %d\n",getpid(),getppid());
   } else {
      wait(NULL);
      printf("6----- %d\n",  child_pid);
      printf ("parent process successfully created!\n");
      printf ("child_PID = %d, parent_PID = %d \n", getpid( ), getppid( ) );
   }
   return 0;
}