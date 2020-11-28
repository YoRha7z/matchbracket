/*设计算法判断表达式中的圆括号是否配对出现。*/
#include<stdio.h>
#define m 50
typedef struct
{
	int s[m]; 
	int top;
} sqstack; 

int matchbracket()
{
	char ch;
	sqstack stack;
	stack.top= -1;
	do
	 { 
		ch=getchar();
		if (ch=='(')
			 {
			 	stack.top=stack.top+1; 
				stack.s[stack.top]=ch;
			} 
			else if (ch==')')  
					if (stack.top<0) return(0);
				else  
				stack.top=stack.top-1;
	}while(ch!= '#');
	if (stack.top<0) 
		return(1); 
	else 
		return(0);
}

int  main(void)
{
	printf("使用英文字符\n");
	printf("以#结尾\n");
	int a= matchbracket(); 
	if(a==1)
		printf("括号匹配");
	if(a==0) 
		printf("括号不匹配");
		
} 
