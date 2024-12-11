#include <stdio.h>

int main() {
    for (int i = 1 , j = 1 , k = 1 ; k <= 81 ; k++) {
        printf("%d * %d = %d\t", i , j , i * j);
        j++;
        if (j > 9) {
            j = 1;
            i++;
            printf("\n");
        }
    }
    return 0;
}
