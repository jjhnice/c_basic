#include  <stdio.h>
/**
 *  Break & Continue 문
 *    - 반복문에서 주로 사용
 *  
 *    - break: 즉시 반복문을 빠져나가라
 *             → 이후로 반복문 실행 x
 * 
 *    - continue: 즉시 다음 반복문으로 넘어가라
 *                 → 이후로 반복문 실행 o
*/
int main(void)  {
    for(int i=1; i<=10; i++) {
        if(i % 2 ==0)  {
            continue;
        }
        if(i == 7) {
            break;
        }
        printf("%d\n", i);
    }    //  i가 짝수일때 if 문 충족해서 내려갔는데 continue를 만나서 다음 반복으로 넘어가게된다.
}