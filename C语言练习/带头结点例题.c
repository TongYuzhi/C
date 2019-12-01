#include <stdio.h>
#include <malloc.h>

#define TRUE     1
#define FALSE    0

typedef unsigned char boolean;

typedef struct POINT {
	int row;
	int cow;
	struct POINT *next;
}POINT;

void inputPoints(POINT *head);
void showOnePoint(POINT point);
void showPoints(POINT head);
POINT *searchPoint(POINT head,POINT point);
void insertPoint(POINT *head);
boolean removePoint(POINT *head);
void sortPointsByRow(POINT point);
void destoryPoints(POINT *head);

void inputPoints(POINT *head) {
	int row;
	int cow;
	POINT *p = NULL;
	POINT *tail;

	printf("请输入点的坐标(x,y),有任一元素为零时，输入结束：\n");
	scanf("%d%d",&row,&cow);

	while(row && cow) {
		p = (POINT *) malloc(sizeof(POINT));
		p -> row = row;
		p -> cow = cow;
		p -> next = NULL;

		if(NULL == head->next) {
			head->next = p;
		}
		else {
			tail->next = p;
		}
		tail = p;

		printf("请输入点的坐标(x,y),有任一元素为零时，输入结束：\n");
		scanf("%d%d",&row,&cow);
	}
}

void showOnePoint(POINT point) {
	printf("(%d,%d)\n",point.row,point.cow);
}

void showPoints(POINT head) {
	POINT *p;
	printf("当前点坐标如下：\n");
	for(p = head.next; p; p = p->next) {
		showOnePoint(*p);
	}
}

POINT *searchPoint(POINT head,POINT point) {
	POINT *pre;
	POINT *p;

	for(p = head.next; p && !(p->row == point.row && p->cow == point.cow); p = p->next) {
		pre = p;
	}
	
	return pre;
} 

void insertPoint(POINT *head) {
	int newRow;
	int newCow;
	int targetRow;
	int targetCow;
	POINT *newPoint;
	POINT targetPoint = {0};
	POINT *prePoint;

	printf("请输入要插入的点的坐标:\n");
	scanf("%d%d",&newRow,&newCow);

	newPoint = (POINT *)malloc(sizeof(POINT));
	newPoint->row = newRow;
	newPoint->cow = newCow;
	newPoint->next = NULL;

	printf("请输入想要插入的位置（在哪个点之前？）:\n");
	scanf("%d%d",&targetRow,&targetCow);
	targetPoint.row = targetRow;
	targetPoint.cow = targetCow;
	prePoint = searchPoint(*head,targetPoint);

	if(NULL == prePoint) {
		prePoint = head;
	}
	newPoint->next = prePoint->next;
	prePoint->next = newPoint;
}

boolean removePoint(POINT *head) {
	int row;
	int cow;
	POINT removePoint = {0};
	POINT *pre;
	POINT *p;

	printf("请输入要删除的点的坐标:\n");
	scanf("%d%d",&row,&cow);

	removePoint.row = row;
	removePoint.cow = cow;

	pre = searchPoint(*head,removePoint);

	if(pre == NULL) {
		pre = head;
	} else if (pre->next == NULL) {
		return FALSE;
	}
	p = pre->next;
	pre->next = p->next;

	free(p);

	return TRUE;
}

void sortPointsByRow(POINT point) {
	POINT *p;
	POINT *q;
	POINT tmp;
	POINT *r;

	for(p = point.next; p; p = p->next) {
		for(q = p->next; q; q = q->next) {
			if(p->row > q->row) {
				tmp = *p;
				*p = *q;
				*q = tmp;            //交换两个实例的值，值域和链域一同交换；

				r = p->next;
				p->next = q->next;
				q->next = r;         //将链域交换回来，相当于只交换了值域，完成排序；
			}
		}
	}
}

void destoryPoints(POINT *head) {
	POINT *p;
	
	for(p = head->next; p; p = head->next) {
		free(p);
	}
}

int main() {
	POINT pointlist1 = {0};
	POINT pointlist2 = {0};

	inputPoints(&pointlist2);
	showPoints(pointlist2);
	
	insertPoint(&pointlist2);
	printf("以下为插入后的点的坐标\n");
	showOnePoint(pointlist2);
	
	removePoint(&pointlist2);
	printf("以下为删除后的点的坐标\n");
	showPoints(pointlist2);
	
	sortPointsByRow(pointlist2);
	printf("以下为按横坐标从小到大排序后的点的坐标\n");
	showPoints(pointlist2);
	
	destoryPoints(&pointlist2);

	return 0;
}