#include<reg51.h>
void delay(int time)
{
  int i,j;
  for(i=0;i<time;i++)
  for(j=0;j<1000;j++);
}
void main()
{
	P2=0x00;
  while(1)
  {
    P2=P1;
	delay(100);
  }
}