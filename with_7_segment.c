#include<reg51.h>
void delay(int time)
{
  int i,j;
	for(i=0;i<time;i++)
	for(j=0;j<800;j++);
}
void main()
{
	int p,q;
	int num[]={0x90,0x80,0xF8,0x82,0x92,0x99,0xB0,0xA4,0xF9,0xC0};
	P2=0x00;
	P0=0x00;
  while(1)
	{
	  P1=0x04;
		for(p=0;p<=5;p++)
	  {
		  P0=num[p];
			for(q=0;q<=9;q++)
			{
			  P2=num[q];
				delay(100);
			}
		}
		P1=0x02;
		for(p=0;p<=2;p++)
	  {
		  P0=num[p];
			for(q=0;q<=9;q++)
			{
			  P2=num[q];
				delay(100);
			}
		}
		P1=0x01;
		for(p=0;p<=5;p++)
	  {
		  P0=num[p];
			for(q=0;q<=9;q++)
			{
			  P2=num[q];
				delay(100);
			}
		}
	}
}