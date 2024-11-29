#include <stdio.h>

int main(void)
{
    printf("Hello World!!\n");
    int num;
    printf("ENTER : ");
    scanf_s("%d", num);

    int result = 0;
    for (int i = 0; i < num; i++) {
        result += i;
    }

    printf("result : %d", result);
}
