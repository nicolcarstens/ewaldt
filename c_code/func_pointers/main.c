//==========================================================
//
// Demo Function Pointer return via call by reference
// works in C++ but not in C ... some other way possible??
//
// Solution: use double pointers (or ask ChatGPT)
// 
// Call by Reference using "&" only available in C++ ... not C99
//
// The only Pass by Reference in C++:
// void foo(int* param) { (*param)++; }
//
// The additional Pass by Reference in C++
// void foo(int& param) { param++; }
//
// >> g++ main.c -o runme
//
//==========================================================

#include <stdio.h>

int addFunction(int a, int b)
{
  return a + b; 
}

int multiFunction(int a, int b)
{
  return a * b; 
}

typedef int (*FunctionPointer)(int, int);

void functionsetter1(FunctionPointer *funPtr)
{
  // returns a mat function 
  *funPtr = multiFunction;
}

void functionsetter2(int (**ptr2fun)(int, int)) 
{
  *ptr2fun = addFunction;  
}

void printFunc(void)
{
  int (*localMath)(int, int);

  functionsetter1(&localMath); 
  printf("Function 1 output = %d\n",localMath(3,4));

  functionsetter2(&localMath); 
  printf("Function 2 output = %d\n",localMath(3,4));
}

int main(int args, const char * argv[])
{
  printf("Hello World\n");
  printFunc();
  return 0;
}
