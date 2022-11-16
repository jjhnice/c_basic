#include  <stdio.h>

/**
 *  변수: 하나의 값을 저장하는 메모리 공간
 *  배열: 같은 형태의 많은 데이터를 메모리에 연속적으로 저장하는 방법(여러값 저장)
 *   - 다른 자료형처럼 선언을 통해 공간 확보
 *   - 배열의 갯수와 상관없이 하나의 이름으로 선언
 *   - 동일한 자료형만 넣을 수 있음
 *   - 배열은 한번에 변수를 여러개 선언하는것과 같음
 *   - 배열 안의 아이템들은 0번부터 인덱스번호를 가짐 
*/

int main(void)  {
   // int ary; 변수선언
   // double ary2[5];
   // char ary3[2];
    int ary[5];  

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    printf("입력: ");
    scanf("%d", &ary[3]);
    printf("%d\n", ary[0]);
    printf("%d\n", ary[1]);
    printf("%d\n", ary[2]);
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]);
}
/**
 *  int num = 4; , 정수형 4byte 사용
 *  int ary[2] = {5,10}; , 배열 선언과 동시에 초기화
 *  컴퓨터 메모리
 *  100번지
 *  101번지
 *  102번지
 *  103번지
 *  104번지
 *  105번지
 *  106번지
 *  107번지
 *  108번지
 *  109번지
*/