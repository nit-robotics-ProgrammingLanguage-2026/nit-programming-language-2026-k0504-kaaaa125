#include <stdio.h>

int main(void)
{
    int number;

    scanf("%d", &number);

    // 0以上10未満、または12以上15未満ならOK
    // それ以外の場合はNGとする
    if ((number >= 0 && number < 10) ||
        (number >= 12 && number < 15)) {
        printf("OK");
    } else {
        printf("NG");
    }

    return 0;
}