#include <8051.h>
void main()
{
unsigned int i;
unsigned char *str="Hello!";

unsigned char *str1="H";
unsigned char *str2="e";
unsigned char *str3="l";
unsigned char *str4="l";
unsigned char *str5="o";
unsigned char *str6="!";

P0 = 0x38;
P2 = 0x1;
P2 = 0x0;
P0 = 0x80;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str1[i];
P2 = 0x3;
P2 = 0x2;
}

P0 = 0xC0;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str2[i];
P2 = 0x3;
P2 = 0x2;
}

P0 = 0x81;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str3[i];
P2 = 0x3;
P2 = 0x2;
}

P0 = 0xC1;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str4[i];
P2 = 0x3;
P2 = 0x2;
}
P0 = 0x82;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str5[i];
P2 = 0x3;
P2 = 0x2;
}
P0 = 0xC2;
P2 = 0x1;
P2 = 0x0;

for(i=0;i<1;i++)
{
P0 = str6[i];
P2 = 0x3;
P2 = 0x2;
}
while(1);
}
