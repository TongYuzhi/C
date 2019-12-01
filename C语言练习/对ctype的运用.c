#include <stdio.h>
#include <ctype.h>

int main() {
	char testOne;
	char testTwo;
	char testThere;
	//char testFour;
	char testFive;
	char testSix;
	char testSeven;
	char testEight;
	char testNine;
	
	//int isblank(int c);

	//关于int isalnum(int c),判断字符c是不是十进制数字或字母
	printf("请输入第一个字符\n");
	flushall();
	gets(&testOne);
	printf("%d\n",isalnum(testOne));

	//关于int isalpha(int c),判断字符是否为字母
	printf("请输入第二个字符\n");
	flushall();
	gets(&testTwo);
	printf("%d\n",isalpha(testTwo));

	//关于int iscntrl(int c)，判断是否是控制字符
	printf("请输入第三个字符\n");
	flushall();
	gets(&testThere);
	printf("%d\n",iscntrl(testThere));

	//关于int isblank(int c)，判断是否为tab(‘\t’)或space(’ ‘)字符
	/*
	printf("请输入第四个字符\n");
	gets(&testFour);
	printf("%d\n",isblank(testFour));         //此函数只适用于C99标准，不适用于C89
	*/

	//关于int isdigit(int c),检查字符是否为十进制数字
	printf("请输入第五个字符\n");
	flushall();
	gets(&testFive);
	printf("%d\n",isdigit(testFive));

	//关于int islower(int c)，判断字符是否为小写字母
	printf("请输入第六个字符\n");
	flushall();
	gets(&testSix);
	printf("%d\n",islower(testSix));

	//关于int ispunct(int c),判断字符是否为标点符号
	printf("请输入第七个字符\n");
	flushall();
	gets(&testSeven);
	printf("%d\n",ispunct(testSeven));

	//关于int isspace(int c),判断是否为空格，包括空格’ ‘、换页’\f’、换行’\n’、回车’\r’、水平制表’\t’和垂直制表符’\v’
	printf("请输入第八个字符\n");
	flushall();
	gets(&testEight);
	printf("%d\n",isspace(testEight));

	//关于int isxdigit(int c)，判断是否为十六进制
	printf("请输入第九个字符\n");
	flushall();
	gets(&testNine);
	printf("%d\n",isxdigit(testNine));


	return 0;
}
