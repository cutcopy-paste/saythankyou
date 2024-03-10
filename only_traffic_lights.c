#include<reg51.h>
void delay(int time)
{
  int i,j;
	for(i=0;i<time;i++)
	for(j=0;j<800;j++);
}
void main()
{
  while(1)
	{
	  P1=0x04;
		delay(100);
		P1=0x02;
		delay(50);
		P1=0x01;
		delay(100);
	}
}