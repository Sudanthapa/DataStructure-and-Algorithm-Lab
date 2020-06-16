#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3],i,j;

	printf("\n Enter value for matrix A:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nEnter value for matrix B:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nThe Sum of A and B are:\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
	getch();
}
