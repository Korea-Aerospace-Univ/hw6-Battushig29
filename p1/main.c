#include <stdio.h>

int main() {
    char arr[10];   // 10개의 문자를 저장할 배열

    // 포인터를 사용하여 문자 10개 입력
    for (char *p = arr; p < arr + 10; p++) {
        scanf(" %c", p);
    }

    char maxChar;   // 가장 많이 나온 문자를 저장
    int maxCount = 0;   // 최대 빈도수를 저장

    // 배열의 각 문자를 기준으로 빈도수 계산
    for (char *p = arr; p < arr + 10; p++) {
        int count = 0;  // 현재 문자의 빈도수

        // 현재 문자가 배열에 몇 번 나타나는지 확인
        for (char *q = arr; q < arr + 10; q++) {
            if (*p == *q) {   // 두 문자가 같으면
                count++;      // 빈도수 증가
            }
        }

        // 현재 빈도수가 최대 빈도수보다 크면 갱신
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

    // 가장 많이 나온 문자와 빈도수 출력
    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
