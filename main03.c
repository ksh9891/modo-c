#include <stdio.h>

int main() {
    double celsius; // 섭씨 온도

    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
    printf("섭씨 온도를 입력해주세요 : ");
    scanf("%lf", &celsius); // 섭씨온도를 입력받는다.

    printf("섭씨 %f 도는 화씨로 %f 도 입니다. \n", celsius, 9 * celsius / 5 + 32);

    return 0;
}