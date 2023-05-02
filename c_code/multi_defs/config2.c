#include <stdio.h>
#include "globals.h"
#include "config2.h"

// static int myConfigNumber = 123; 
// int myConfigNumber = 123; 
extern int myConfigNumber;

void printConfig2(void)
{
  myConfigNumber += 2;
  printf("Printing Config 2 Demo = %d\n", myConfigNumber);
}