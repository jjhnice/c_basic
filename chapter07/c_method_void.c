#include  <stdio.h>


void print_line(void);

int main()  {
    print_line();
    printf("학번     이름    전공    학점\n");
    print_line();
}

void print_line(void)  {
    for(int i=0; i<5; i++)  {
        printf("-");
    }
    printf("\n");
}