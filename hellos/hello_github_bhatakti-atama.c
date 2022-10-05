#include <stdio.h>
#include <string.h>

int main()
{
/* language: c */
/* Author: bhatakti-atama*/
  /*Adding user input as a contibution in the code
  Author: Zeeshan*/

  char username[15];
  printf("Enter your name:\t");
  gets(username);

  printf("Hello, %s, thankyou for using this programme\n",username);
  
  return 0;
}
