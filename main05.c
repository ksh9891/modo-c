#include <stdio.h>

int main() {
    int a;
    a = 2;

    printf("%p \n", &a);

    int* p;
    int a2;

    p = &a2;

    printf("포인터 p 에 들어 있는 값 : %p \n", p);
    printf("int 변수 a2  저장된 주소 : %p \n", &a2);

    int* p2;
    int a3;

    p2 = &a3;
    a3 = 2;

    printf("a3 의 값 : %d \n", a3);
    printf("*p2 의 값 : %d \n", *p2);

    return 0;
}