#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "lib.h"

int main() {
  int ret;

  if((ret = werner5_getval()) < 0){
    printf("Failed");
    return -1;
  }

  //initialized as 42 (arbitrary number)

  printf("werner5_getval() returned %d\n", ret);


  if((ret = werner5_putval(96)) < 0){
    printf("Failed\n");
    return -1;
  }

  //should return 0

  printf("werner5_putval() returned %d\n", ret);

  if((ret = werner5_getval()) < 0){
    printf("Failed");
    return -1;
  }

  //should return 96 now that we've placed a different number there

  printf("werner5_getval() returned %d\n", ret);

  return 0;
}
