#include<stdio.h>
#include<conio.h>
void main()
{
     int a;
     clrscr();
     printf("enter the value of a :");
     scanf("%d",&a);
     if(a==0)
     {
	printf("this number is neutral.");
     }
     else if(a<0)
     {
	printf("this number is nagetive.");
     }
     else if(a>0)
     {
	printf("this number is positive.");
     }
     getch();

}




