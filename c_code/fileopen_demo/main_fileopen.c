//==========================================
// A trivial little C program 
// Demonstrates file open/close/create/etc
// >> gcc .\main_fileopen.c -o runfile
//==========================================

#include <stdio.h>

void openOrCreateFile(void)
{
  FILE *fp;
  fp = fopen("hellofile.txt","w");
  char myString[] = "This is a new string!!";
  int i = 0;
  printf("... here goes ... \n");
  while (myString[i] != 0)
  {
    printf("%c",myString[i]);
    putc(myString[i],fp);
    i++;
  }
  fclose(fp);
}

int main(int argv, const char* argc[])
{
  printf("hello file world!\n");

  //======================================================  
  // fopen() - create a new file or open a existing file
  // fclose() - close a file
  // getc() - reads a character from a file
  // putc() - writes a character to a file
  // fscanf() - reads a set of data from a file
  // fprintf() - writes a set of data to a file
  // getw() - reads a integer from a file
  // putw() - writes a integer to a file
  // fseek() - set the position to desire point
  // ftell() - gives current position in the file
  // rewind() - set the position to the beginning point
  //======================================================
  // r - open a file in read mode
  // w - opens or create a text file in write mode
  // a - opens a file in append mode
  // r+ - opens a file in both read and write mode
  // a+ - opens a file in both read and write mode
  // w+ - opens a file in both read and write mode
  //======================================================

  openOrCreateFile();

  return 0;
}