#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int addfunc(int a, int b)
{
	return a+b;
}
int subfunc(int a, int b)
{
	return a-b;
}
int mulfunc(int a, int b)
{
	return a*b;
}
int divfunc(int a, int b)
{
	return a/b;
}

int main(int argc, char *argv[]) {
	
	int i,j;
	char op;
	int (*calcfunc)(int,int);
	
	printf(" input calculation \n");
	scanf("%d %d %c", &i, &j, &op);
	
	switch(op)
		{
			case '+':
				calcfunc = addfunc;
				break;
			case '-':
				calcfunc = subfunc;
				break;
			case '*':
				calcfunc = mulfunc;
				break;
			case '/':
				calcfunc = divfunc;
				break;
		}
		
	printf("result : %i\n", calcfunc);
	
	
	return 0;
}
