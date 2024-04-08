#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int x,y,xor,bits;
   clrscr();
   printf("Enter the values of x:\n");
   scanf("%d",&x);
   printf("Enter the values of y:\n");
   scanf("%d",&y);
   xor=x^y;
   bits=0;
   while(xor>0)
   {
	bits=bits+xor & 1;
	xor>>=1;
   }
   printf("Hamming distance:%d",bits);
   getch();
}
