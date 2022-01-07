#include<stdio.h>

	void sum(void)
	{
		int x,y,z;
		printf("\nEnter the values which you want to add:\n");
		scanf("%d %d",&x,&y);
		z=x+y;
		printf("Sum=%d",z);
	}
	int main()
	{
		sum();
		sum();
		
		return 0;
	}
	
	


