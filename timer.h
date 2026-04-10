void delay(int ms)
{
	unsigned int i;
	for(i=0;i<ms;i++)
	{
		TH0=0xFC;
		TL0=0x66;
		TF0=0;
		TR0=1;
	  while(TF0==0);
	}
}