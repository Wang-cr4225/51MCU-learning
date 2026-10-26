#include <REGX52.H>
#include <INTRINS.H>
void Delayms(unsigned int xms)
{
	unsigned char i, j;
	while(xms)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	unsigned int xms=80;
	while(1)
	{
		P2=0xFE;
		Delayms(xms);
		P2=0xFD;
		Delayms(xms);
		P2=0xFB;
		Delayms(xms);
		P2=0xF7;
		Delayms(xms);
		P2=0xEF;
		Delayms(xms);
		P2=0xDF;
		Delayms(xms);
		P2=0xBF;
		Delayms(xms);
		P2=0x7F;
		Delayms(xms);
		
		P2=0xFF;
		Delayms(xms);
		P2=0xBF;
		Delayms(xms);
		P2=0xDF;
		Delayms(xms);
		P2=0xEF;
		Delayms(xms);
		P2=0xF7;
		Delayms(xms);
		P2=0xFB;
		Delayms(xms);
		P2=0xFD;
		Delayms(xms);
		P2=0xFE;
		Delayms(xms);
		P2=0xFF;
		Delayms(xms);
	}
}