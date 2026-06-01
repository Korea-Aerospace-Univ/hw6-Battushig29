#include <stdio.h>

int main() {
    int N;                      // 배열의 크기 입력
    scanf("%d", &N);

    int a[20], b[20];           // 두 개의 배열 선언

    // 첫 번째 배열 입력
    for (int *p = a; p < a + N; p++) {
        scanf("%d", p);         // 포인터를 사용하여 값 입력
    }

    // 두 번째 배열 입력
    for (int *p = b; p < b + N; p++) {
        scanf("%d", p);         // 포인터를 사용하여 값 입력
    }

    // 첫 번째 배열은 앞에서부터,
    // 두 번째 배열은 뒤에서부터 탐색
    for (int *p = a, *q = b + N - 1; p < a + N; p++, q--) {
        printf(" %d", *p + *q); // 두 원소를 더하여 출력
    }

    return 0;                   // 프로그램 종료
}
