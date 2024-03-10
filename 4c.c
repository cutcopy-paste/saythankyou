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
		delay(20);
		P1=0xFF;
		delay(20);
	}
}