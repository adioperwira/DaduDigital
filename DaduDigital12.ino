#include "LedControl.h"

LedControl lc=LedControl(12,11,10,1);           // Deklarasi pin 12,11,10 dan 1 sebagai pin Dot Matrix 8 X 8 MAX7219
int sensorGetar = 9;                            // Deklarasi pin 9 sebagai pin sensor getar SW-420

unsigned long delaytime=500;

/*
  byte duabelas[8]={B01100010,B10010010,B10010010,B10010010,B01001100,B00000010,B11111110,B01000010};       // Array untuk print dadu dari 7 sampai 12
  byte sebelas[8]={B0000000,B00000010,B11111110,B01000010,B00000000,B00000010,B11111110,B01000010};         // Silahkan Uncomment jika akan mengaktifkan
  byte sepuluh[8]={B01111100,B10100010,B10010010,B10001010,B01111100,B00000010,B11111110,B01000010};        // mode 2 dadu ( kocokan dari 1 hingga 12 )
  byte sembilan[8]={B11011011,B11011011,B00000000,B11011011,B11011011,B00000000,B11011011,B11011011};
  byte delapan[8]={B11011011,B11011011,B00000000,B11011000,B11011000,B00000000,B11011011,B11011011};
  byte tujuh[8]={B11011000,B11011000,B00000000,B11011011,B11011011,B00000000,B11011000,B11011000};
*/

  byte enam[8]={B00000000,B11011011,B11011011,B00000000,B00000000,B11011011,B11011011,B00000000};           // Array untuk print dadu dari 1 sampai 6
  byte lima[8]={B00000000,B01100110,B01100110,B00011000,B00011000,B01100110,B01100110,B00000000};
  byte empat[8]={B00000000,B01100110,B01100110,B00000000,B00000000,B01100110,B01100110,B00000000};
  byte tiga[8]={B11000000,B11000000,B00000000,B00011000,B00011000,B00000000,B00000011,B00000011};
  byte dua[8]={B00000000,B00000000,B00000000,B01100110,B01100110,B00000000,B00000000,B00000000};
  byte satu[8]={B00000000,B00000000,B00000000,B00011000,B00011000,B00000000,B00000000,B00000000};

void setup() {

  pinMode(sensorGetar,INPUT);
  lc.shutdown(0,false);
  lc.setIntensity(0,5);
  lc.clearDisplay(0);
}

void fungsiSatu() {

  lc.setRow(0,0,satu[0]);         // Fungsi untuk manampilkan mata dadu satu
  lc.setRow(0,1,satu[1]);
  lc.setRow(0,2,satu[2]);
  lc.setRow(0,3,satu[3]);
  lc.setRow(0,4,satu[4]);
  lc.setRow(0,5,satu[5]);
  lc.setRow(0,6,satu[6]);
  lc.setRow(0,7,satu[7]);
  
  delay(delaytime);
}
void fungsiDua() {

  lc.setRow(0,0,dua[0]);          // Fungsi untuk manampilkan mata dadu dua
  lc.setRow(0,1,dua[1]);
  lc.setRow(0,2,dua[2]);
  lc.setRow(0,3,dua[3]);
  lc.setRow(0,4,dua[4]);
  lc.setRow(0,5,dua[5]);
  lc.setRow(0,6,dua[6]);
  lc.setRow(0,7,dua[7]);
  
  delay(delaytime);
}
void fungsiTiga() {

  lc.setRow(0,0,tiga[0]);        // Fungsi untuk manampilkan mata dadu tiga
  lc.setRow(0,1,tiga[1]);
  lc.setRow(0,2,tiga[2]);
  lc.setRow(0,3,tiga[3]);
  lc.setRow(0,4,tiga[4]);
  lc.setRow(0,5,tiga[5]);
  lc.setRow(0,6,tiga[6]);
  lc.setRow(0,7,tiga[7]);
  
  delay(delaytime);
}
void fungsiEmpat() {

  lc.setRow(0,0,empat[0]);        // Fungsi untuk manampilkan mata dadu empat
  lc.setRow(0,1,empat[1]);
  lc.setRow(0,2,empat[2]);
  lc.setRow(0,3,empat[3]);
  lc.setRow(0,4,empat[4]);
  lc.setRow(0,5,empat[5]);
  lc.setRow(0,6,empat[6]);
  lc.setRow(0,7,empat[7]);
 
  delay(delaytime);
}
void fungsiLima() {

  lc.setRow(0,0,lima[0]);         // Fungsi untuk manampilkan mata dadu lima
  lc.setRow(0,1,lima[1]);
  lc.setRow(0,2,lima[2]);
  lc.setRow(0,3,lima[3]);
  lc.setRow(0,4,lima[4]);
  lc.setRow(0,5,lima[5]);
  lc.setRow(0,6,lima[6]);
  lc.setRow(0,7,lima[7]);

  delay(delaytime);
}
void fungsiEnam() {

  lc.setRow(0,0,enam[0]);           // Fungsi untuk manampilkan mata dadu enam
  lc.setRow(0,1,enam[1]);
  lc.setRow(0,2,enam[2]);
  lc.setRow(0,3,enam[3]);
  lc.setRow(0,4,enam[4]);
  lc.setRow(0,5,enam[5]);
  lc.setRow(0,6,enam[6]);
  lc.setRow(0,7,enam[7]);
  
  delay(delaytime);
}
/*
void fungsiTujuh() {

  lc.setRow(0,0,tujuh[0]);          // Fungsi untuk manampilkan mata dadu tujuh
  lc.setRow(0,1,tujuh[1]);
  lc.setRow(0,2,tujuh[2]);
  lc.setRow(0,3,tujuh[3]);
  lc.setRow(0,4,tujuh[4]);
  lc.setRow(0,5,tujuh[5]);
  lc.setRow(0,6,tujuh[6]);
  lc.setRow(0,7,tujuh[7]);
  
  delay(delaytime);
}
void fungsiDelapan() {

  lc.setRow(0,0,delapan[0]);        // Fungsi untuk manampilkan mata dadu delapan
  lc.setRow(0,1,delapan[1]);
  lc.setRow(0,2,delapan[2]);
  lc.setRow(0,3,delapan[3]);
  lc.setRow(0,4,delapan[4]);
  lc.setRow(0,5,delapan[5]);
  lc.setRow(0,6,delapan[6]);
  lc.setRow(0,7,delapan[7]);
  
  delay(delaytime);
}
void fungsiSembilan() {

  lc.setRow(0,0,sembilan[0]);       // Fungsi untuk manampilkan mata dadu sembilan
  lc.setRow(0,1,sembilan[1]);
  lc.setRow(0,2,sembilan[2]);
  lc.setRow(0,3,sembilan[3]);
  lc.setRow(0,4,sembilan[4]);
  lc.setRow(0,5,sembilan[5]);
  lc.setRow(0,6,sembilan[6]);
  lc.setRow(0,7,sembilan[7]);
  
  delay(delaytime);
} 
void fungsiSepuluh() {

  lc.setRow(0,0,sepuluh[0]);        // Fungsi untuk manampilkan mata dadu sepuluh
  lc.setRow(0,1,sepuluh[1]);
  lc.setRow(0,2,sepuluh[2]);
  lc.setRow(0,3,sepuluh[3]);
  lc.setRow(0,4,sepuluh[4]);
  lc.setRow(0,5,sepuluh[5]);
  lc.setRow(0,6,sepuluh[6]);
  lc.setRow(0,7,sepuluh[7]);
  
  delay(delaytime);
} 
void fungsiSebelas() {

  lc.setRow(0,0,sebelas[0]);          // Fungsi untuk manampilkan mata dadu sebelas
  lc.setRow(0,1,sebelas[1]);
  lc.setRow(0,2,sebelas[2]);
  lc.setRow(0,3,sebelas[3]);
  lc.setRow(0,4,sebelas[4]);
  lc.setRow(0,5,sebelas[5]);
  lc.setRow(0,6,sebelas[6]);
  lc.setRow(0,7,sebelas[7]);
  
  delay(delaytime);
}
void fungsiDuabelas() {

  lc.setRow(0,0,duabelas[0]);          // Fungsi untuk manampilkan mata dadu dua belas
  lc.setRow(0,1,duabelas[1]);
  lc.setRow(0,2,duabelas[2]);
  lc.setRow(0,3,duabelas[3]);
  lc.setRow(0,4,duabelas[4]);
  lc.setRow(0,5,duabelas[5]);
  lc.setRow(0,6,duabelas[6]);
  lc.setRow(0,7,duabelas[7]);
  
  delay(delaytime);
}
*/

void animasiRandom() {
  for (int i = 0; i < 8; i++) {       // Fungsi untuk menampilkan animasi random
    int baris = random(0, 8);
    int kolom = random(0, 8);
    lc.setLed(0, baris, kolom, true);
  }
}

void rollAnimasiRandom() {

  const int durasiAnimasi = 3000;                     // total durasi animasi random sebelum menampilkan mata dadu
  const int frames = 50;                              // Jumlah frame dalam range durasi animasi
  const int delayFrame = durasiAnimasi / frames;      

  for (int frame = 0; frame < frames; frame++) {
    animasiRandom();
    delay(delayFrame);
    lc.clearDisplay(0);
  }
}

void loop() {

  int x ;
  if(digitalRead(sensorGetar)== HIGH )
{
 x = random(1,7);                         // Ganti angka 7 menjadi 13 jika ingin mengaktifkan mode dua dadu

rollAnimasiRandom();

switch(x){
case 1 : fungsiSatu();
break;
case 2 : fungsiDua();
break;
case 3 : fungsiTiga();
break;
case 4 : fungsiEmpat();
break;
case 5 : fungsiLima();
break;
case 6 : fungsiEnam();
break;

/*
case 7 : fungsiTujuh();             //Uncomment jika ingin mengaktifkan mode 2 dadu (Kocokan random dari satu hingga 12)
break;
case 8 : fungsiDelapan();
break;
case 9 : fungsiSembilan();
break;
case 10 : fungsiSepuluh();
break;
case 11 : fungsiSebelas();
break;
case 12 : fungsiDuabelas();
break;
*/
    }
  }
}
