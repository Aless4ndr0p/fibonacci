#include <stdio.h>

int main (){

  int num1 = 0;
  int num2 = 0;
  int num3 = 1;
  int i = 1;

  while(i < 13){

    printf("%d\n", num3);
    num1 = num2 + num3;
    num2 = num3;
    num3 = num1;
    i+=1;
  }
}
