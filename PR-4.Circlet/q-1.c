#include <stdio.h>

int main()
{
	int num=41;
	
	for(int i = 1;i <= 5;i++)
	{
		for(int j = num;j < num+i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}