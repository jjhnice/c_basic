#include  <stdio.h>

/**
 *  ����Լ�(recursive function)                                                   ! �߿��� �����̶� ���迡 �ݵ�� ���� !
 *   - �ڱ��ڽ��� ȣ���ϴ� �Լ�
 *   - return(��ȯ��)  �� �ٽ� �ڱ��ڽ��� ȣ���ϴ� �Լ��� ���
*/

void fruit(void);

int main(void)  {
    fruit();
}
// ���� �ݺ� ȣ���ϴ� ����Լ�
//   - ���� ��� ����!
//   - Fatal Error;
void fruit(void)  {
    printf("apple\n");
    fruit();
}