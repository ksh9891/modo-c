#include <_stdio.h>

int main() {
    int a, b;
    a = 10;
    b = 3;

    printf("a + b 는 %d \n", a + b);
    printf("a - b 는 %d \n", a - b);
    printf("a * b 는 %d \n", a * b);
    printf("a / b 는 %d \n", a / b);
    printf("a %% b 는 %d \n", a % b);

    printf("%d \n", 2147483647 + 1);
    return 0;
}
