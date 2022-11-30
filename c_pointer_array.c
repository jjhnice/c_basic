#include  <stdio.h>

/**
 * 포인터(Pointer)와 배열(Array)                                                시험은 쉽지만 내용이 어려움 !
 *  - 객관식, 주관식, 빈칸 채우기, ox, 서술형(1문제)
*/

int main(void)  {
    int ary[3];  // 배열 선언(3칸) 크기: 12 Byte
    int i;       // 변수           크기: 4 Byte

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3번째 배열 요소 입력: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++)  {
        printf("%d\n", *(ary+i));
    }
}