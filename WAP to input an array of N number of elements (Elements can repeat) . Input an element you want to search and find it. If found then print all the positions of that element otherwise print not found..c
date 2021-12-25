#include<stdio.h>
int main()
{

	int i,a,n;


	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter the number which you want to search and find position=  ");
	scanf("%d",&a);
	int found=0;
	for(i=0;i<n;i++)
	{

	  if(arr[i]==a)
	  {
	  printf("Element found and the position of the element is= %d\n",i+1);

	  found++;}
}
if(found==0)
printf("element not found");

	return 0;
}
