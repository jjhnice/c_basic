#include  <stdio.h>

int main(void)  {
    int num1, num2;
    printf("ù ��° ��: ");
    scanf("%d" , &num1);
    printf("�� ��° ��: ");
    scanf("%d" , &num2);

    printf("%d, %d", num1, num2);

    // ���� 
    // 1. ��1�� ��2���� ū��� ���
    // 2. ��1�� ��2���� ������� ���
    // 3. ��1�� ��2�� ���� ���
    // �� ���ǹ�! ����� ������

    if(num1 > num2) {
        printf("\n%d�� %d���� ũ��.", num1, num2);
    } else if(num1 < num2)  {
        printf("\n%d�� %d���� �۴�.", num1, num2);
    } else  {
        printf("\n%d�� %d�� ����.", num1, num2);
    }
}