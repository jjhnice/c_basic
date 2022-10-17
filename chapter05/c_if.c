#include  <stdio.h>

/**
 *  if문(제어문) 기본 문법
 * 
 *  if(조건)  {                                     > 얘는 1번
 *     실행문
 * }  else if(조건)  {                              > 얘는 여러번    
 *     실행문
 * }  else {                                        > 얘도 1번
 *     실행문
 * }
*/
int main(void) {
    int a = 20;
    int b = 0;

    if(a > 30) {
            printf("a가 30보다 커요!");
    }
}
