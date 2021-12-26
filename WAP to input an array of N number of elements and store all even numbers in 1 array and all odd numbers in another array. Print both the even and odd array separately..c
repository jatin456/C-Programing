#include<stdio.h>
int main()
{
	int i,n,count1=0,count2=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements In array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Elements of Array:\n\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
}
printf("\n");
printf("The even array is\n\n");
int x[count1],y[count2];
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	count1++;
}
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	count2++;
}

for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{x[i]=a[i];
		printf("%d\t",x[i]);
	}
}
printf("\n");
printf("The odd array is\n");
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	{y[i]=a[i];
		printf("%d\t",y[i]);
	}
}
return 0;
}
