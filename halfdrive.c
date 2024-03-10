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
	   P2=0x08;  //a
		 delay(99);
		 P2=0x0C;  //a-b
		 delay(99);
		 P2=0x04;  //b
		 delay(99);
		 P2=0x06;  //b-c
		 delay(99);
		 P2=0x02;  //c
		 delay(99);
		 P2=0x03;  //c-d
		 delay(99);
		 P2=0x01;  //d
		 delay(99);
		 P2=0x09;  //d-a
	 }
 }