#include <stdio.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char boolean;

typedef struct POINT {
	int row;
	int column;
	struct POINT *next;
}POINT;

void inputPoints(POINT *head);
void showPoints(POINT head);
void destoryPoints(POINT *head);
POINT *searchPrePoint(POINT head,POINT point);
void insertPoint(POINT *head);
boolean removePoint(POINT *head);
void sortPointsByRow(POINT head);

void sortPointsByRow(POINT head) {
	POINT *p;
	POINT *q;
	POINT temp;
	POINT *address;

	for(p = head.next; p; p = p->next) {
		for(q = p->next; q; q = q->next) {
			if(p->row > q->row) {
				temp = *p;
				*p = *q;
				*q = temp;

				address = p->next;
				p->next = q->next;
				q->next = address;
			}
		}
	}
}

boolean removePoint(POINT *head) {
	int uselessRow;
	int ueselessColumn;
	POINT uselessPoint;
	POINT *prePoint;
	POINT *p;

	printf("请输入要删除的点的坐标\n");
	scanf("%d%d",&uselessRow,&ueselessColumn);

	uselessPoint.row = uselessRow;
	uselessPoint.column = ueselessColumn;
	uselessPoint.next = NULL;

	prePoint = searchPrePoint(*head,uselessPoint);
	
	if(NULL == prePoint) {
		prePoint = head;
	} else if (NULL == prePoint->next) {
		return FALSE;
	}

	p = prePoint->next;
	prePoint->next = p->next;
	free(p);

	return TRUE;
}

void insertPoint(POINT *head) {
	int newRow;
	int newColumn;
	POINT *newPoint;
	int targetRow;
	int targetColumn;
	POINT targetPoint = {0};
	POINT *prePoint;

	printf("请输入要插入的点坐标\n");
	scanf("%d%d",&newRow,&newColumn);

	newPoint = (POINT *)malloc(sizeof(POINT));
	newPoint->row = newRow;
	newPoint->column = newColumn;
	newPoint->next = NULL;

	printf("请输入要插入的点的位置（在哪个点之前？）\n");
	scanf("%d%d",&targetRow,&targetColumn);
	
	targetPoint.row = targetRow;
	targetPoint.column = targetColumn;
	targetPoint.next = NULL;

	prePoint = searchPrePoint(*head,targetPoint);
	
	if(NULL == prePoint) {
		prePoint = head;
	} else {
		newPoint->next = prePoint->next;
		prePoint->next = newPoint;
	}
}

POINT *searchPrePoint(POINT head,POINT point) {
	POINT *pre = NULL;
	POINT *p;

	for(p = head.next; p && !((p->row == point.row) && (p->column == point.column)); p = p->next) {
		pre = p;
	}

	return pre;
}
	//pre有三种情况：
	//1.NULL，表示指定点是第一个有效节点；
	//2.末节点，表示指定点不在链表中(没找到)；
	//3.其他情况。

void destoryPoints(POINT *head) {
	POINT *p;

	for(p = head->next; p; p = p->next) {
		head->next = p->next;
		free(p);
	}
}

void showPoints(POINT head) {
	POINT *p;

	printf("以下为当前点坐标:\n");

	for(p = head.next; p; p = p->next) {
		printf("<%d,%d>\n",p->row,p->column);
	}
}

void inputPoints(POINT *head) {
	int row;
	int column;
	POINT *p;
	POINT *tail;

	printf("请输入点坐标(当横纵任一坐标为0时，结束输入)\n");
	scanf("%d%d",&row,&column);

	while (row && column) {
		tail = (POINT*)malloc(sizeof(POINT));
		tail->row = row;
		tail->column = column;
		tail->next = NULL;

		if(NULL == head->next) {
			head->next = tail;
		} else {
			for(p = head->next; NULL != p->next; p = p->next) {

			}
			tail = p->next;
		}

		printf("请输入点坐标(当横纵任一坐标为0时，结束输入)\n");
		scanf("%d%d",&row,&column);
	}
}

int main() {
	POINT pointListOne = {0};
	POINT pointListTwo = {0};

	inputPoints(&pointListOne);
	printf("以下为输入的点坐标：\n");
	showPoints(pointListOne);

	insertPoint(&pointListOne);
	printf("以下为插入后的点坐标：\n");
	showPoints(pointListOne);

	removePoint(&pointListOne);
	printf("以下为删除后的点坐标：\n");
	showPoints(pointListOne);

	sortPointsByRow(pointListOne);
	printf("以下为排序后的点坐标：\n");
	showPoints(pointListOne);


	destoryPoints(&pointListOne);

	return 0;
}