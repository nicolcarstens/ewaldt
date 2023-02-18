//==========================================
// A trivial little C program 
// Prints input arguments 
//==========================================

#include "stdio.h"

void printArguments(int args, const char * argv[])
{
  printf("Number of arguments = %d\n",args);
  for(int i=0; i<args; i++)
  {
    printf("Arg %d = %s\n",i+1,argv[i]);
  }
}

int main(int args, const char * argv[])
{
  printf("Hello C World!! \n");
  printArguments(args,argv);
  return 0;
}