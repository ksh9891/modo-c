#include <_stdio.h>

int main() {
    int a;
    a = 10;
    printf("a 의 값은 : %d \n", a);

    a = 10000000000000;
    // 이상한 값 출력
    printf("a 의 값은 : %d \n", a);

    // 1이 나오기를 기대하지만 다른값이 나온다.
    printf("%f \n", 1);

    // 1이 출력된다.
    printf("%f \n", 1.0);
    return 0;
}
