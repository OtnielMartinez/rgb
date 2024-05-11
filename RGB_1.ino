//RGB 1
//Codigo Creado por AlgoBack YouTube Channel

int pinR = 11;
int pinG = 10;
int pinB = 9;

void setup() {
pinMode(pinR, OUTPUT);
pinMode(pinG, OUTPUT);
pinMode(pinB, OUTPUT);
Serial.begin(9600);
}

void loop() {

 int i =(rand() % 255 - 1)+1;
 int j =(rand() % 255 - 1)+1;
 int k =(rand() % 255 - 1)+1;
 
      color(i,j,k);
      delay(500);    
      Serial.println(String(i)+ "  "+String(j)+ "  " +String(k));



}

void color(int R, int G, int B)
{

 R = 255 - R;
 G = 255 - G;
 B = 255 - B;

  analogWrite(pinR, R);
  analogWrite(pinG, G);
  analogWrite(pinB, B);
  
}
