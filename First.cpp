#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t;
char z;
int a[101];

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
}
