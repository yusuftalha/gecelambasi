const int kled=3;
const int gled=5;
const int bled=6;
int data;
int saniye;
int dakika;
int saat;
void setup() {
  // put your setup code here, to run once:
pinMode(kled, OUTPUT);
pinMode(gled, OUTPUT);
pinMode(bled, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
analogWrite(kled,255);
analogWrite(gled,255);
analogWrite(bled,255);
digitalWrite(13, LOW);
}
void sure(){
  if(saniye>=60){
  saniye=0;
  dakika++;
}
if (dakika>=60){
  dakika=0;
  saat++;
}
  }

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()) {
  data=Serial.read();
  delay(100);

if (data==104){
  saniye=0;
  dakika=0;
  saat=0;
while(dakika<=30){
analogWrite(kled,0);
analogWrite(gled,0);
analogWrite(bled,0);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,23);
analogWrite(gled,255);
analogWrite(bled,190);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,97);
analogWrite(gled,224);
analogWrite(bled,226);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,195);
analogWrite(gled,73);
analogWrite(bled,63);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,90);
analogWrite(gled,207);
analogWrite(bled,23);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,0);
analogWrite(gled,41);
analogWrite(bled,211);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,0);
analogWrite(gled,255);
analogWrite(bled,255);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
analogWrite(kled,0);
analogWrite(gled,176);
analogWrite(bled,232);
delay(1000);
  if (data==107){
    break;
  }
saniye++;
sure();
}
analogWrite(kled, 255);
analogWrite(gled, 255);
analogWrite(bled, 255);  
}else if (data==99){
  analogWrite(kled, 23);
  analogWrite(gled, 255);
  analogWrite(bled, 190);
}else if (data==97){
analogWrite(kled, 97);
  analogWrite(gled, 224);
  analogWrite(bled, 226);
}else if (data==98){
  analogWrite(kled, 195);
  analogWrite(gled, 73);
  analogWrite(bled, 63);
}else if (data==100){
  analogWrite(kled, 90);
  analogWrite(gled, 207);
  analogWrite(bled, 23);
} else if (data==101){
  analogWrite(kled, 0);
  analogWrite(gled, 41);
  analogWrite(bled, 211);
}else if (data==102){
  analogWrite(kled, 0);
  analogWrite(gled, 255);
  analogWrite(bled, 255);
}else if (data==103){
  analogWrite(kled, 0);
  analogWrite(gled, 176);
  analogWrite(bled, 232);
}else if (data==107){
  while(data==107){
analogWrite(kled, 255);
  analogWrite(gled,255);
  analogWrite(bled, 255);
  break;
  
  }
}
data=0;
}
//Serial.println(data);
}
