#include <stdio.h>
#include <conio.h>
#define max 3
void main()
{
	int a[max][max],b[max][max],c[max][max],i,j,k;
	
	printf("\nENTER VALUES FOR MATRIX-A\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nENTER VALUES FOR MATRIX-B\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			c[i][j]=0;
			for(k=0;k<max;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nVALUES OF MATRIX-A\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nVALUES OF MATRIX-B\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nVALUES OF MATRIX-C\n");
	for(i=0;i<max;i++)
	{
		for(j=0;j<max;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}