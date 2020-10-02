//Swaraj Shinde
//menu driven program in c to demostrate the use of left shift, right shift, and, or, XOR operators.


#include<stdio.h>
#include<conio.h>
void main()
	{
	int opt,a,b;
	clrscr();
 do
 {
	printf("\n1.AMD\n2.OR\n3.ROR\n4.LEFT SHIFT\n5.RIGHT SHIFT\n6.EXIT");
	scanf("%d",&opt);
       if(opt==6)
{
break;
}
switch(opt)
{
case 1:

printf("\nENTER TWO NUMBERS :");
scanf("%d%d",&a,&b);
printf("\nUsing AND we get %d",a&b);
break;

case 2:

printf("\nENTER TWO NUMBERS :");
scanf("%d%d",&a,&b); printf("\nUsing OR we get %d",a|b); break;

case 3:

printf("\nENTER TWO NUMBERS :");
scanf("%d%d",&a,&b);  printf("\nUsing XOR we get %d",a^b); break;

case 4:

printf("\nENTER TWO NUMBERS :");
scanf("%d%d",&a,&b);
printf("\nUsing LEFT SHIFT we get\n a<<1 %d",a<<1);
printf("\nb<<1=%d",b<<1);
break;

case 5:

printf("\nENTER one NUMBEr :");
scanf("%d",&a);
printf("\nUsing RIGHT SHIFT we get\na>>1= %d",a>>1);

break;
default:
printf("invalid");
break;}
}
while(opt!=6);

getch();
	
}









