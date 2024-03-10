 #include<reg51.h>
 void delay(int time)
 {
   int i,j;
	 for(i=0;i<time;i++)
	 for(j=0;j<100;j++);
 }
 void main()
 {
   while(1)
	 {
	   P2=0x08;
		 delay(99);
		 P2=0x04;
		 delay(99);
		 P2=0x02;
		 delay(99);
		 P2=0x01;
		 delay(99);
	 }
 }