#include  <stdio.h>

int main(void)  {
    int num1, num2;
    printf("첫 번째 수: ");
    scanf("%d" , &num1);
    printf("두 번째 수: ");
    scanf("%d" , &num2);

    printf("%d, %d", num1, num2);

    // 조건 
    // 1. 수1이 수2보다 큰경우 출력
    // 2. 수1이 수2보다 작은경우 출력
    // 3. 수1이 수2와 같다 출력
    // → 조건문! 만들어 보세요

    if(num1 > num2) {
        printf("\n%d가 %d보다 크다.", num1, num2);
    } else if(num1 < num2)  {
        printf("\n%d가 %d보다 작다.", num1, num2);
    } else  {
        printf("\n%d가 %d와 같다.", num1, num2);
    }
}