#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	printf("RESULT 1:%d\n",a&&b);
	printf("RESULT 2:%d\n",a||b);
    return 0;
}
