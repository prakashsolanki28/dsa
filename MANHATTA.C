#include<stdio.h>
#         include<conio.h>
#include<math.h>
void main()
{
   int x1,x2,y1,y2;
   clrscr();
   printf("Enter the values of x1 & y1:\n");
   scanf("%d%d",&x1,&y1);
   printf("Enter the values of x2 & y2:\n");
   scanf("%d%d",&x2,&y2);
   printf("Manhattan distance:%d",(abs(x2-x1)+abs(y2-y1)));
   getch();
}
