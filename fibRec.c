#include <stdio.h>
#include "fibRec.h"

unsigned int fibRec(unsigned int n){
  if(n == 0 || n ==1)
    return 1;
  return fibRec(n-1)+fibRec(n-2);

}

