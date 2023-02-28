//==========================================
// A trivial little C program 
// Experiments with Static Variables
// >> gcc config.c main.c -o runme
//==========================================

#include <stdio.h>

#include "config.h"

extern int myConfigNumber;

int main(int args, const char * argv[])
{
  // demonstrating the use of extern keyword
  printf("Printing Main World...\n");
  printConfig();
  printf("My main Config Number = %d\n",myConfigNumber); 
  return 0; 
}