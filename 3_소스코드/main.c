#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, x, t = 0, h[10];
    srand(time(0));
    a = rand() % 100 + 1;

    while (t < 10) {
        printf("입력: ");
        scanf("%d", &x);
        if (x < 1 || x > 100) { printf("범위 오류!\n"); continue; }

        h[t++] = x;
        if (x == a) { printf("정답!\n"); return 0; }
        printf(x > a ? "큼!\n" : "작음!\n");
    }

    printf("실패! 정답=%d\n", a);
    return 0;
}
