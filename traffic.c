#include <reg51.h>
#include "timer.h"

sbit RED    = P1^0;
sbit GREEN  = P1^1;
sbit YELLOW = P1^2;
sbit PED = P3^2;

void all_off()
{
    RED=0; 
	  GREEN=0;
	  YELLOW=0;
}
 void main()
 {
	 while (1)
	 {
		 if(PED==0)
		 {
			 all_off();
			 RED = 1;
			 delay(2000);
		 }
		 else
		 {
			 RED=1;
			 GREEN =0;
			 YELLOW=0;
			 delay(5000);
			 RED=0;
			 GREEN =1;
			 YELLOW=0;
			 delay(3000);
			 RED=0;
			 GREEN =0;
			 YELLOW=1;
			 delay(2000);
		 }
	 }
 }
			 