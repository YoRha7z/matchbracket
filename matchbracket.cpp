/*����㷨�жϱ��ʽ�е�Բ�����Ƿ���Գ��֡�*/
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
	printf("ʹ��Ӣ���ַ�\n");
	printf("��#��β\n");
	int a= matchbracket(); 
	if(a==1)
		printf("����ƥ��");
	if(a==0) 
		printf("���Ų�ƥ��");
		
} 
