#include  <stdio.h>

int main(void)  {
    int n = recursion(16);
    printf("%d", n);
}

int recursion(int n)  {
    // if�� {���๮} �� ������ ���ΰ�� ����
    // ���๮�� 1���� {}�� ����
    /**
     *  if(n<5)  {
     * return1;
     * }
     *  if(n<5)
     *     return1;
     *  if(n<5) return 1;  �� ���� ��� ���� ����
    */
    if(n<5) return 1;
    else if(n%5 == 1) return n+recursion(n-1);
    else recursion(n-1);
}

/** 
 * (16)
 *  �� 
 * n =16, 16 + (15) # 16+18 =34
 *  �� 
 * n= 15, (14) # 18
 *  �� 
    n= 14, (13) # 18
    �� 
    n= 13, (12) # 18
    �� 
    n= 12, (11) # 18
    �� 
    n= 11, 11+(10) # 11+7 =18
    �� 
    n= 10, (9) # 7
    �� 
    n= 9, (8) # 7
    �� 
    n= 8, (7) # 7
    �� 
    n= 7, (6) # 7
    �� 
    n= 6, 6 + (5) # 6 + 1 = 7
    �� 
    n= 5, (4) # 1
    �� 
    n= 4, 1
*/
