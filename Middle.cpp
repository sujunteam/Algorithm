#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t, temp, b, n, count = 0, front = 0, rear = 0;
char f;
char z;
int a[101];
char c[100000000];

int main() {
    printf("����� ������ �˹ٻ��Դϴ�\n");
    Sleep(2000);
    printf("���� ��ǰ�� ������� �Է����ּ���\n");
    scanf("%d", &t);
    Sleep(3000);
    printf("���� �ִ� ����� ��������� �Է����ּ��� ex) 211021\n");
    for (int i = 0; i < t; i++) {
        scanf("%d", a[i]);
    }
    int aa = 1;
    printf("������ѿ� ���� ���� �����ϰڽ��ϱ�? �ϰ� ������ Y, ������ N");
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
    printf("���� ��� Ȯ���Ͻðڽ��ϱ�?\n");
    Sleep(2000);
    printf("Ȯ���ϰ� ������ Y, ������ N�� �Է��� �ֽʽÿ�\n");
    scanf("%c", &f);
    if (f == 'Y') {
        system("cls");
    }
    else {
        printf("�׷� ���Ұǵ�?");
    }
}
