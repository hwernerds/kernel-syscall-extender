/*library source for new system calls*/

#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <sys/types.h>

extern int errno;

#define __NR_werner5_putval		450
#define __NR_werner5_getval		451

int werner5_putval(int val){
  return syscall(__NR_werner5_putval, val);
}

int werner5_getval(){
  return syscall(__NR_werner5_getval);
}
