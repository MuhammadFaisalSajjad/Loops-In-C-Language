#include<stdio.h>
void main()
{
	int rows,colums,i;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(colums=1;colums<=rows*2-1;colums++)
		{
			if(i+colums==6 || colums-i==4 || i==rows)
			{
				printf("*");
			}
			if(!(i+colums==6 || colums-i==4 || i==rows))
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
