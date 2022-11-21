#include  <stdio.h>
int main(void)  {
    int score[5]; // index: 0~4
    int total = 0;
    double avg;

    for(int i=0; i<5; i++)  {
        printf("%d: ", i+1);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<5; i++)  {
        total += score[i];
    }
    avg = total / 5.0;
    printf("Æò±Õ Á¡¼ö: %.1lf", avg);
}