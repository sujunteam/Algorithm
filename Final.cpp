#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int t, temp, b, n, count = 0, front = 0, rear = 0;
char z;
char p;
int day;
int a[] = {};
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
            printf("물품이 없습니다.\n");
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
    printf("당신은 편의점 알바생입니다\n");
    
    printf("현재 상품의 재고개수를 입력해주세요\n");
    
    scanf("%d", &t);
    
    printf("현재 있는 재고의 유통기한을 입력해주세요 ex) 211021\n");
    for (int i = 0; i < t; i++) {
        scanf("%d",& a[i]);
    }
    int aa = 1;
    printf("유통기한에 따라 정렬 시작하겠습니까? 하고 싶으면 Y, 싫으면 N\n");
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
    printf("유통기한에 따라 정렬이 완료되었습니다. 확인하시겠습니까? 하고싶으시면 Y, 싫으시면 N을 입력해주세요\n");
    scanf(" %c", &p);
    system("cls");
    while(ab != 2){
    if(z == 'Y'){
    	printf("다음은 유통기한에 따라 정렬이 완료된 결과입니다.\n");
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
	
    printf("이제 정렬된 상품들을 유통기한에 따라 재고관리를 해야합니다. 현재 날짜를 입력해주세요.\n");
    scanf("%d", &day);
    for(int i = 0; i < t; i++){
            enQueue(a[i]);	
        }
	while (1) {
        int menu;
        printf("1. 유통기한 지난 물품 삭제, 2. 정리된 물품들 유통기한 출력, 3. 종료\n");
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

