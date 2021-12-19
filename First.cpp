#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t;
char z;
int a[101];

int main() {
    printf("당신은 편의점 알바생입니다\n");
    Sleep(2000);
    printf("현재 상품의 재고개수를 입력해주세요\n");
    scanf("%d", &t);
    Sleep(3000);
    printf("현재 있는 재고의 유통기한을 입력해주세요 ex) 211021\n");
    for (int i = 0; i < t; i++) {
        scanf("%d", a[i]);
    }
    int aa = 1;
    printf("유통기한에 따라 정렬 시작하겠습니까? 하고 싶으면 Y, 싫으면 N");
    scanf("%c", &z);
}
