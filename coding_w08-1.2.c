#include <stdio.h>

int main() {
    int i;

    for (i = 2; i <= 10; i += 2) {  // แสดงเลขคู่จาก for loop
        printf("%d ", i);
    }

    printf("\nEnd of loop\n");
    return 0;
}