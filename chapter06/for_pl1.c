#include  <stdio.h>

// 1~10�� ���� ���� ���
int main(void) {
    int sum = 0;  // ���� ����

    // �ۼ��غ�����. (for�� Ȱ��)
    for(int i = 1; i < 11; i++)   {
        sum = sum + i;
    }
    printf("���� ����: %d\n", sum);
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