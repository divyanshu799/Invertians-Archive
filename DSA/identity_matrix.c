#include<stdio.h>
int main ()
{
	int r,c,i,j;
	printf("Enter number of rows and columns : ");
	scanf ("%d %d",&r,&c);
	printf ("Enter your array : ");
	int a[r][c];
	int z=0;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if(i==j)
			{
				if(a[i][j]==1)
				z++;
			}
			
		}
	}
	if(z==r)
	printf ("Identity Matrix");
	else
	printf ("Not identity matrix");
	return 0;
}
