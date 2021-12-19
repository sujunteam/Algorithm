#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t, temp, b, n, count = 0, front = 0, rear = 0;
char z;
char p;
int day;
int a[] = {};
char c[1000000];
int* queue;


void enQueue(int data) {

    if ((rear + 1) % (n+1) == front) {
        return;
    }

    rear = (rear + 1) % (n + 1);
    queue[rear % (n+1)] = data;

}

int deQueue() {
    int data;

    if (front == rear) {
        return 0;
    }

    data = queue[(front + 1) % (n+1)];
    front = (front + 1) % (n+1);
}

void printQueue() {
    int idx=0;
    idx = (front + 1) % (n+1);

    do{
        if (front == rear) {
            printf("��ǰ�� �����ϴ�.\n");
            break;
        }
        else if (idx > rear)
            break;
        printf("%d ", queue[idx++ % (n + 1)]);
    } while (1);

}


int main() {
	int data; 
	queue = (int*)malloc(sizeof(int) * (t + 1));
    printf("����� ������ �˹ٻ��Դϴ�\n");
    
    printf("���� ��ǰ�� ������� �Է����ּ���\n");
    
    scanf("%d", &t);
    
    printf("���� �ִ� ����� ��������� �Է����ּ��� ex) 211021\n");
    for (int i = 0; i < t; i++) {
        scanf("%d",& a[i]);
    }
    int aa = 1;
    printf("������ѿ� ���� ���� �����ϰڽ��ϱ�? �ϰ� ������ Y, ������ N\n");
    scanf(" %c", &z);
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
                aa = 2;
        }
        else {
            aa = 1;
        }
    }
    int ab = 1;
    printf("������ѿ� ���� ������ �Ϸ�Ǿ����ϴ�. Ȯ���Ͻðڽ��ϱ�? �ϰ�����ø� Y, �����ø� N�� �Է����ּ���\n");
    scanf(" %c", &p);
    system("cls");
    while(ab != 2){
    if(z == 'Y'){
    	printf("������ ������ѿ� ���� ������ �Ϸ�� ����Դϴ�.\n");
    	printf("====================================\n");
    for (int i = 0; i < t; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
    printf("====================================\n");
	ab = 2;
	}
	else {
	ab = 1;
	}}
	
    printf("���� ���ĵ� ��ǰ���� ������ѿ� ���� �������� �ؾ��մϴ�. ���� ��¥�� �Է����ּ���.\n");
    scanf("%d", &day);
    for(int i = 0; i < t; i++){
            enQueue(a[i]);	
        }
	while (1) {
        int menu;
        printf("1. ������� ���� ��ǰ ����, 2. ������ ��ǰ�� ������� ���, 3. ����\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            deQueue();
            break;
        case 2:
            printQueue();
            break;
        case 3:
            exit(1);
            break;
        }
    }
}

