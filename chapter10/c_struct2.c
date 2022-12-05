#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

struct profile {
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void)  {
    struct profile yuni;

    strcpy(yuni.name, "정준혁");
    yuni.age = 20;
    yuni.height = 181;

    yuni.intro = (char*)malloc(80);
    printf("자기소개: ");
    gets(yuni.intro);

    printf("이름: %s\n", yuni.name);
    printf("나이: %d\n", yuni.age);
    printf("키: %1.lf\n", yuni.height);
    printf("자기소개: %s\n", yuni.intro);
    free(yuni.intro);
}