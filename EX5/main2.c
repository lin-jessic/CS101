#include <stdio.h>

int main() {
    double PI = 0.0f;
    int i = 1;
    while ((int)(PI * 1000000) != 3141592) {
        if (i % 2 == 1) {
            PI += 4.0 / (2 * i - 1);
        } else {
            PI -= 4.0 / (2 * i - 1);
        }
        i++;
    }
    printf("最小的x為%d\n", i);
    printf("計算出來的PI為%.5f\n", PI);
    return 0;
}
