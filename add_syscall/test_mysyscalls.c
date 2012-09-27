#include <stdio.h>
#include <linux/unistd.h>
#include <sys/syscall.h>

#define sys_add2 350

int main(void) {
    int a,b,c;
    printf("Adding two numbers in the kernel space\n");
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    c = syscall(sys_add2, a, b);
    printf("System call returned %d\n", c);
    return 0;
}

