#include  <stdio.h>

// 1~10의 값을 총합 계산
int main(void) {
    int sum = 0;  // 총합 누적

    // 작성해보세요. (for문 활용)
    for(int i = 1; i < 11; i++)   {
        sum = sum + i;
    }
    printf("누적 총합: %d\n", sum);
}
//     sum     i
//      0      i
//      1      2 
//      3      3
//      .      .
//      .      .
//      .      .
//      45     10
//      55     11 
//      x 