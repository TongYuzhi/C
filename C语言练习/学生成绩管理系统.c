#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

#define TRUE   1
#define FALSE  0

typedef unsigned char boolean;

typedef struct STUDENT_INFORMATION {
	char ID[9];
	char name[20];
	char birthday[12];
	char source[20];
	float scoreMath;
	float scoreEnglish;
	float scoreCS;
	struct STUDENT_INFORMATION *next;
}STUDENT_INFORMATION;

void inputStudentInformation(STUDENT_INFORMATION *head);
void destoryStudentInformation(STUDENT_INFORMATION *head);
void showStudentInformation(STUDENT_INFORMATION *head);
void insertStudentInformation(STUDENT_INFORMATION *head);
STUDENT_INFORMATION *searchByID(STUDENT_INFORMATION head,char studentID[9]);
boolean removeStudentInformation(STUDENT_INFORMATION *head);
void sortStudentInformationByScoreMath(STUDENT_INFORMATION head);

void sortStudentInformationByScoreMath(STUDENT_INFORMATION head) {
	STUDENT_INFORMATION *p;
	STUDENT_INFORMATION *q;
	STUDENT_INFORMATION temp;
	STUDENT_INFORMATION *address;

	for(p = head.next; p; p = p->next) {
		for(q = p->next; q; q = q->next) {
			if(fabs(p->scoreMath - q->scoreMath) > 1e-6) {
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

boolean removeStudentInformation(STUDENT_INFORMATION *head) {
	char targetID[9];
	STUDENT_INFORMATION *pre = NULL;
	STUDENT_INFORMATION *p;

	printf("???Ҫɾ???????Ϣ????ţ?\n");
	scanf("%s",targetID);

	pre = searchByID(*head,targetID);

	if(NULL == pre) {
		pre = head;
	} else if (NULL == pre->next) {
		return FALSE;
	}
	p = pre->next;
	pre->next = p->next;
	free(p);
	
	return TRUE;
}

STUDENT_INFORMATION *searchByID(STUDENT_INFORMATION head,char studentID[9]) {
	STUDENT_INFORMATION *p = NULL;
	STUDENT_INFORMATION *pre;

	for(p = head.next; p && strcmp(p->ID,studentID); p = p->next) {
		pre = p;
	}
	return pre;
}
/*
strcmp?????????????
1. 0?? ???????ȣ?
2. 1?? ǰһ???Ⱥ??????
3. -1??ǰһ???Ⱥ????С??
pre?????????????
1. NULL??Ҫ????ڵ?ǵ?????Ч????
2.ĩ?ڵ㣺�????ڵ�??ڣ?
3.?????
*/

void insertStudentInformation(STUDENT_INFORMATION *head) {
	char newID[9];
	char newName[20];
	char newBirthday[12];
	char newSource[20];
	float newScoreMath;
	float newScoreEnglish;
	float newScoreCS;
	struct STUDENT_INFORMATION *next = NULL;
	STUDENT_INFORMATION *newInformation;
	char targetID[9];
	STUDENT_INFORMATION *pre;


	printf("?¼?Ҫ??ӵ????Ϣ\n");

	printf("???Ҫ??ӵ???????ţ?\n");
	scanf("%s",newID);

	printf("???Ҫ??ӵ?????????\n");
	scanf("%s",newName);

	printf("???Ҫ??ӵ????????????Ϊ2000-12-31??\n");
	scanf("%s",newBirthday);

	printf("???Ҫ??ӵ??????Դ?أ?\n");
	scanf("%s",newSource);

	printf("???Ҫ??ӵ????ĸ???ɼ???\n");
	scanf("%f",&newScoreMath);

	printf("???Ҫ??ӵ????????ɼ???\n");
	scanf("%f",&newScoreEnglish);

	printf("???Ҫ??ӵ????ļ???ɼ?:\n");
	scanf("%f",&newScoreCS);

	newInformation = (STUDENT_INFORMATION *)malloc(sizeof(STUDENT_INFORMATION));
	strcpy(newInformation->ID,newID);
	strcpy(newInformation->name,newName);
	strcpy(newInformation->birthday,newBirthday);
	strcpy(newInformation->source,newSource);
	newInformation->scoreMath = newScoreMath;
	newInformation->scoreEnglish = newScoreEnglish;
	newInformation->scoreCS = newScoreCS;
	newInformation->next = NULL;

	printf("???Ҫ???Ŀ????ţ?????ѧ?֮ǰ?????TA????ţ???\n");
	scanf("%s",targetID);

	pre = searchByID(*head,targetID);

	if(NULL == pre) {
		pre = head;
	} else {
		newInformation->next = pre->next;
		pre->next = newInformation;
	}
}

void showStudentInformation(STUDENT_INFORMATION *head) {
	STUDENT_INFORMATION *p;

	for(p = head->next; p; p = p->next) {
		printf("%s\n",p->ID);
		printf("%s\n",p->name);
		printf("%s\n",p->birthday);
		printf("%s\n",p->source);
		printf("%.2f\n",p->scoreMath);
		printf("%.2f\n",p->scoreEnglish);
		printf("%.2f\n",p->scoreCS);
	}
}

void destoryStudentInformation(STUDENT_INFORMATION *head) {
	STUDENT_INFORMATION *p;

	for(p = head->next; NULL != p->next; p = p->next) {
		head->next = p->next;
		free(p);
	}
}

void inputStudentInformation(STUDENT_INFORMATION *head) {
	char ID[9];
	char name[20];
	char birthday[12];
	char source[20];
	float scoreMath;
	float scoreEnglish;
	float scoreCS;
	int index = 1;
	STUDENT_INFORMATION *tail;
	STUDENT_INFORMATION *p;

	printf("?¼?ѧ??Ϣ??ID???λΪ-ʱ?????¼???\n");

	printf("?????d??ѧ?????ţ?\n",index);
	scanf("%s",ID);

	printf("?????d??ѧ???????\n",index);
	scanf("%s",name);

	printf("?????d??ѧ??????????Ϊ2000-12-31??\n",index);
	scanf("%s",birthday);

	printf("?????d??ѧ????Դ?أ?\n",index);
	scanf("%s",source);

	printf("?????d??ѧ??ĸ???ɼ???\n",index);
	scanf("%f",&scoreMath);

	printf("?????d??ѧ??????ɼ???\n",index);
	scanf("%f",&scoreEnglish);

	printf("?????d??ѧ??ļ???ɼ?:\n",index);
	scanf("%f",&scoreCS);

	while('-' != ID[0]) {
		tail = (STUDENT_INFORMATION *)malloc(sizeof(STUDENT_INFORMATION));
		strcpy(tail->ID,ID);
		strcpy(tail->name,name);
		strcpy(tail->birthday,birthday);
		strcpy(tail->source,source);
		tail->scoreMath = scoreMath;
		tail->scoreEnglish = scoreEnglish;
		tail->scoreCS = scoreCS;
		tail->next = NULL;

		if(NULL == head->next) {
			head->next = tail;
		} else {
			for(p = head->next; NULL != p->next; p = p->next) {

			}
			tail = p->next;
		}

		index++;

		printf("?¼?ѧ??Ϣ??ID???λΪ-ʱ?????¼???\n");

		printf("?????d??ѧ?????ţ?\n",index);
		scanf("%s",ID);

		if('-' != ID[0]) {
	
			printf("?????d??ѧ???????\n",index);
			scanf("%s",name);

			printf("?????d??ѧ??????????Ϊ2000-12-31??\n",index);
			scanf("%s",birthday);

			printf("?????d??ѧ????Դ?أ?\n",index);
			scanf("%s",source);

			printf("?????d??ѧ??ĸ???ɼ???\n",index);
			scanf("%f",&scoreMath);

			printf("?????d??ѧ??????ɼ???\n",index);
			scanf("%f",&scoreEnglish);

			printf("?????d??ѧ??ļ???ɼ?:\n",index);
			scanf("%f",&scoreCS);

		} else {
			printf("?????^-^\n");
		}
	}
}

int main() {
	STUDENT_INFORMATION information = {0};

	inputStudentInformation(&information);
	printf("??Ϊ¼??????Ϣ--------------\n");
	showStudentInformation(&information);

	insertStudentInformation(&information);
	printf("??Ϊ????ѧ??Ϣ--------------\n");
	showStudentInformation(&information);

	sortStudentInformationByScoreMath(information);
	printf("??Ϊ????ѧ??Ϣ--------------\n");
	showStudentInformation(&information);


	destoryStudentInformation(&information);

	return 0;
}
/*
04181049
??ֲ
2000-12-31
???
90
88
97
-1
04181050
??Ժ?
1949-10-10
????????
98
66
77
04181044



*/                      