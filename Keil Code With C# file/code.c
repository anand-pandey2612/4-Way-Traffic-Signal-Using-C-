#include<reg51.h>
void delay(unsigned int );
sbit red0=P1^0;
sbit yellow0=P1^1;
sbit green0=P1^2;
//2nd light
sbit red1=P1^3;
sbit yellow1=P1^4;
sbit green1=P1^5;
//3rd light
sbit red2=P2^3;
sbit yellow2=P2^4;
sbit green2=P2^5;
//4th light
sbit red3=P2^0;
sbit yellow3=P2^1;
sbit green3=P2^2;

void main(){
	
red0=yellow0=green0=0;
red1=yellow1=green1=0;
red2=yellow2=green2=0;
red3=yellow3=green3=0;
	
while(1)
{
//first Round
	red0=1,yellow0=0,green0=0, 
	red1=1,yellow1=0,green1=0,
	red2=0,yellow2=0,green2=1,
	red3=0,yellow3=1,green3=0;
delay(700);
//second round
	red0=1,yellow0=0,green0=0, 
	red1=0,yellow1=1,green1=0,
	red2=1,yellow2=0,green2=0, 
	red3=0,yellow3=0,green3=1;
delay(700);
//third round
 red0=0,yellow0=1,green0=0,
 red1=0,yellow1=0,green1=1,
 red2=1,yellow2=0,green2=0,
 red3=1,yellow3=0,green3=0;		
delay(700);
//fouth round
 red0=0,yellow0=0,green0=1,
 red1=1,yellow1=0,green1=0,
 red2=0,yellow2=1,green2=0,
 red3=1,yellow3=0,green3=0;	
delay(700);		
}
}

void delay(unsigned int v){
int i ,j;
	for(i=0; i<v; i++)
	for(j=0; j<1275; j++);
}