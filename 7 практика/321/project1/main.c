#include <8052.H>
#include <htc.h>
 
int flag;

void imp(unsigned int cnt)
{

 do{ 
 if (cnt != 0){cnt--; P10 = 0;}
 else {P10 = 1;}

 }while(TF2 == 0);
 TF2 = 0; 
}

void main()
{
 flag = 1;
 P1 = 0xFE; 
 RCAP2H = 0x0C; 
 RCAP2L = 0xB0; 
 T2CON &= 0xFC;
 ET2 = 1; 
 EA = 1; 
 T2CON |= 0x4; 
while(1)
{
 if(P36 == 1){ flag = 1;}
 if(P37 == 1){ flag = 0;}
 if (flag == 1){ imp(1500);}
 else imp(1300);

}
}
