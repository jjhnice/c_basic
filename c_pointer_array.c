#include  <stdio.h>

/**
 * ������(Pointer)�� �迭(Array)                                                ������ ������ ������ ����� !
 *  - ������, �ְ���, ��ĭ ä���, ox, ������(1����)
*/

int main(void)  {
    int ary[3];  // �迭 ����(3ĭ) ũ��: 12 Byte
    int i;       // ����           ũ��: 4 Byte

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    puts("3��° �迭 ��� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++)  {
        printf("%d\n", *(ary+i));
    }
}