#include<reg51.h>
void timer.ISR(void interrupt 1)
{
  int i;
  i++;
  if(i==10)
  {
    i=0;
	P1++;
  }
}
void main()
{
  TMOD=0x08;
  ETO=1;
  TRO=1;
  EA=1;
  while(1);
}