#include<linux/linkage.h>
asmlinkage long sys_add2(int i, int j) {
    return i+j;
}

