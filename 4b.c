#include<reg51.h>
void delay(int time)
{
  int i,j;
	for(i=0;i<time;i++)
	{
	  for(j=0;j<1000;j++)
		{
		}
	}
}
void main()
{
  char num[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	int i,j;
	P2=0x00;
	P3=0x00;
	while(1)
	{
	 for(i=0;i<=9;i++)
	 {
	   P2=num[i];
		 for(j=0;j<=9;j++)
		 { P3=num[j];
 		   delay(100);
		 }
	 }
  }
}