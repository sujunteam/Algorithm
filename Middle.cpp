#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t, temp, b, n, count = 0, front = 0, rear = 0;
char f;
char z;
int a[101];
char c[100000000];

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
    while (aa != 2) {
        if (z == 'Y') {
            for (int i = 0; i < t - 1; i++)
            {
                int k = i;
                for (int j = i + 1; j < t; j++)
                {
                    if (a[j] < a[k])
                    {
                        k = j;
                    }
                }
                temp = a[i];
                a[i] = a[k];
                a[k] = temp;
            }
                aa == 2;
        }
        else {
            aa == 1;
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d ", a[i]);
    }
    Sleep(2000);
    printf("현재 재고를 확인하시겠습니까?\n");
    Sleep(2000);
    printf("확인하고 싶으면 Y, 싫으면 N을 입력해 주십시오\n");
    scanf("%c", &f);
    if (f == 'Y') {
        system("cls");
    }
    else {
        printf("그럼 뭐할건데?");
    }
}
