#include <stdio.h>
//A
//B A
//C B A
//D C B A
//E D C B A

int main() {
    char i, j;

    for (i = 'A'; i <= 'E'; i++) {
        for (j = i; j >= 'A'; j--) {
            printf("%c ", j);
        }
        printf("\n");
    }

}
