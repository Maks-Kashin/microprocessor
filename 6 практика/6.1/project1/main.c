#include <8051.h>

void pp(unsigned char a){
ACC=a; //zanosim tekusii simvol v akkymylator

SCON = 0xCC; //rejim raboti porta 3
TMOD = 0x20; //2 rejim taimera
TH1 = 0xFF;
TL1= 0xFF;
TR1 = 0x1;
SBUF = a;
while(!TI); //ozidaem okonzania peredachi
TI=0; // sbrasivaem flag okonzania peredazi

}
void main()
{
unsigned int i=0,j=0;
unsigned char st1 [8]={'H','E','C','T','E','P','O','B',};
unsigned char st2 [7]={'M','u','x','a','u','J','7'};
unsigned char st3 [14]={'H','u','K','O','J','7','A','E','B','u',' ','\'','-','|' };

unsigned char st4 [7]={'6','y','T','O','P','u','H' };
unsigned char st5 [5]={'D','E','H','u','C'};
unsigned char st6 [16]={'B','J','7','A','D','u','M','u','P','o','B','u',' ','\'','-','|'};

PCON = 0x80;

for(i=0;i<8;i++){
pp(st1[i]);
};
pp(2);
for(i=0;i<7;i++){
pp(st2[i]);
};
pp(2);
for(i=0;i<14;i++){
pp(st3[i]);
};
pp(10);/////

for(i=0;i<7;i++){
pp(st4[i]);
};
pp(2);
for(i=0;i<5;i++){
pp(st5[i]);
};
pp(2);
for(i=0;i<16;i++){
pp(st6[i]);
};
pp(10);/////

while(1){};
}