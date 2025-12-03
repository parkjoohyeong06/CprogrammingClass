#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char *str;

    printf("문자 개수 입력: ");
    scanf("%d", &n);

    // 개행문자 소비
    getchar();

    // calloc으로 n개의 문자 + '\0' 공간 확보
    str = (char *)calloc(n + 1, sizeof(char));
    if (str == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("%d개의 문자 입력: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%c", &str[i]);
    }

    printf("입력한 문자열: %s\n", str);

    free(str);
    return 0;
}
