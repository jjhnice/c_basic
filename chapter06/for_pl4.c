#include  <stdio.h>

// i=1 �� j= *
// i=2 �� j= **
// i=3 �� j= ***
// i=4 �� j= ****
// i=5 �� j= *****
int main(void)  {
    // 1. 5�� �ݺ�
    for(int i=1; i<=5; i++)  {
        // 2. ���� ������ �ݺ�
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
}