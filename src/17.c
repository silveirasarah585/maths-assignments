#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive numbers are greater than zero.\n");
    } else if (num == 0) {
        printf("Zero is neither positive nor negative.\n");
    } else {
        printf("Negative numbers are less than or equal to zero.\n");
    }
    return 0;
}
