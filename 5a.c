#include<reg51.h>
void delay(int time)
{
	int i,j;
  for(i=0;i<time;i++)
	for(j=0;j<50;j++);
}
void main()
{
  while(1)
	{
	  P1=0x00;
		while(P1!=0xFF)
		{
		  P1++;
			delay(10);
		}
		P1=0xFF;
		while(P1!=0x00)
		{
		  P1--;
			delay(10);
		}
	}
}