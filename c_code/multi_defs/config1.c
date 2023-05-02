#include <stdio.h>
#include "globals.h"
#include "config1.h"

// static int myConfigNumber = 234; 
// int myConfigNumber = 234; 
extern int myConfigNumber = 234; 

void printConfig1(void)
{
  myConfigNumber += 1;
  printf("Printing Config 1 Demo = %d\n", myConfigNumber);
}