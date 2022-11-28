#include  <stdio.h>


/**
 * 변수: 값을 저장
 * 포인터(변수): 주소를 저장
 * 변수 앞에 *붙이면 포인터로 인식!
 * 
 * 
 * int num = 4;  # 99번지
 * int *pn = &num;                                                        포인터 변수임 !
 * 
 * num   →  4
 * &num  →  99번지
 * pn    →  99번지
 * *pn   →  4 
 * 
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수 앞에 const를 붙이면?
*/

int main(void)  {
    int a=10, b=20;         //  a는 21번지, b는 22번지에 저장되어있다고 가정 !
    const int *pa = &a;     //  21번지값

    printf("변수 a 값: %d\n", *pa);
    pa = &b;                                                                // 21번지 값은 지워짐 !
    printf("변수 a 값: %d\n", *pa);
    pa = &a;
    a = 20;
    *pa = 50;   // 
    printf("변수 a 값: %d\n", *pa);



}