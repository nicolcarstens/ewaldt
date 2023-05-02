#include <stdio.h>

#include "config1.h"
#include "config2.h"

int myConfigNumber = 123; 

int main(int args, const char * argv[])
{
  // demonstrating the use of extern keyword
  printf("Printing Multi Defs...\n");
  printConfig1();
  printConfig2();
  return 0; 
}