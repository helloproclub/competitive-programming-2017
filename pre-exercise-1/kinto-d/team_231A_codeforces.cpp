#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int petya, vasya, tonya;
    int do_problem = 0;

    for (int i = 0; i<n; i++){
        scanf("%d %d %d", &petya, &vasya, &tonya);
        int count = petya + vasya + tonya;
        if( count > 1) {
            do_problem++;
        }
    }

    printf("%d\n", do_problem);
    return 0;
}