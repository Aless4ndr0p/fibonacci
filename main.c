#include "fibRec.h"
#include <stdio.h>

int main (){

  int num1 = 0;
  int num2 = 0;
  int num3 = 1;
  int i = 1;
  int n = 13;

  while(i < n){

    /* printf("%d\n", num2);*/
    num1 = num2 + num3;
    num2 = num3;
    num3 = num1;
    i+=1;

    int fib = fibRec(i - 1);
    printf("fibonacci=%d ou fibonacci Rec=%d\n", num1, fib); 
  }

}
