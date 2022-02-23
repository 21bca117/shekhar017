/* write a program to enter 3/3 matrix and print a sum of */

#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	// logic: input value into 2D array
	for(i=0;i<3;i++)    // row
	    {
	     for(j=0;j<3;j++)   // column
	     {
		 printf("\n Enter value m1[%d][%d]:",i,j);
		 scanf("%d",&m1[i][j]);
	     }
	    }
	 for(i=0;i<3;i++)    // row
	    {
	     for(j=0;j<3;j++)   // column
	     {
		 printf("\n Enter value m2[%d][%d]:",i,j);
		 scanf("%d",&m2[i][j]);
	     }
	    }
	    //logic print 2D array
	 printf("\n1st matrix\n");
	 for(i=0;i<3;i++)    // row
	    {
	     for(j=0;j<3;j++)    // column
		 printf("%d\t",m1[i][j]);
		 printf("\n");
	    }
	 printf("\n2nd matrix\n");
	 for(i=0;i<3;i++)    // row
	    {
	     for(j=0;j<3;j++)    // column
		 printf("%d\t",m2[i][j]);
		 printf("\n");
	    }
	 printf("\nSum of matrix\n");
	 for(i=0;i<3;i++)
	    {
	     for(j=0;j<3;j++)
	       {
		m3[i][j]=m1[i][j]+m2[i][j];
		printf("%d\t",m3[i][j]);
	       }
	 printf("\n");
	    }
	getch();
}
