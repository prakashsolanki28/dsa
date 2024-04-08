#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int x1,x2,y1,y2,p;
   double dis;
   clrscr();
   printf("Enter the values of x1 & y1:\n");
   scanf("%d%d",&x1,&y1);
   printf("Enter the values of x2 & y2:\n");
   scanf("%d%d",&x2,&y2);
   printf("Enter the values of p:\n");
   scanf("%d",&p);
   dis=pow(pow(abs(x2-x1),p)+pow(abs(y2-y1),p),1.0/p);
   printf("Minkowski distance:%.2f",dis);
   getch();
}
