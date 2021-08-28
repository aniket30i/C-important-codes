#include<stdio.h>

void main()
{
	int i,j,n,v;
	
	printf("Enter how many lines : \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			v=0;
			else
			v=1;
			printf("%d",v);
		}
		printf("\n");
	}
}
