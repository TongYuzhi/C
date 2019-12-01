#include <stdio.h>

int main() {
	int a,b,c,d;
	
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a < b && b < c && c < d) {
		printf("Fish Rising\n");
	}
	else if(a > b && b > c && c > d) {
		printf("Fish Diving\n");
	}
	else if(a == b && b == c && c == d) {
		printf("Fish At Constant Depth\n");
	}
	else {
		printf("No Fish\n");	
	}

	return 0;
}
//int depth[4];
	//int index;
	//int judge;

	/*
	for(index = 0; index < 4; index++) {
		scanf("%d",depth[index]);
	}

	if((depth[0] < depth[1]) && (depth[1] < depth[2]) && (depth[2] < depth[3])) {
		printf("Fish Rising");
	}
	if((depth[0] > depth[1]) && (depth[1] > depth[2]) && (depth[2] > depth[3])) {
		printf("Fish Diving");
	}
	if((depth[0] == depth[1]) && (depth[1] == depth[2]) && (depth[2] == depth[3])) {
		printf("Fish At Constant Depth");
	}
	else {
		printf("No Fish");
	}
	*/
	
	/*
	for(index = 0; index < 4; index++) {
		judge = depth[index] - depth[index + 1];
		judge += judge;
	}
	if(judge >= 4) {
		printf("Fish Rising");
	}
	if(judge <= -4) {
		printf("Fish Diving");
	}
	if(judge == 0) {
		printf("Fish At Constant Depth");
	}
	if(judge < 4 && judge > -4 && judge != 0) {
		printf("No Fish");
	}
	*/



