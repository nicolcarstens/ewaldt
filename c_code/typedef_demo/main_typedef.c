#include <stdio.h>

typedef enum
{
	myE1,
	myE2,
	myE_length
} myEnum_e; 

typedef struct
{
	int aaa;
	myEnum_e eee;
}  myStruct_t;

struct myOtherStruct
{
	int bbb;
	myEnum_e eee;	
};

int main(int argv, const char* argc[])
{
	myStruct_t a1;
	a1.aaa = 1;
  a1.eee = myE1;

	struct myOtherStruct b3;
	b3.bbb = 3;	
	b3.eee = myE2;

  typedef struct myOtherStruct b5; 

	printf("hello world!\na1.aaa = %d and b3.bbb=%d\n\n",a1.aaa,b3.bbb);

  printf("e1 = %d ... e2 = %d\n",b3.eee,a1.eee);

	return 0;
}