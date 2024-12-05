#include <stdio.h>

int main() {
    int i = 12345;
    int thousands = (i / 1000) % 10;
    int ones = i % 10;
    i = i - thousands * 1000 - ones + thousands + ones * 1000;
    printf("調換結果為%d\n" , i);
    return 0;
}
