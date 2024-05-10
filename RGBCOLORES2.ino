int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void loop() {
  setColor(1,0,0);// rojo brillo mínimo
  delay(1000);
  setColor(255,0,0);// rojo
  delay(1000);
  setColor(255,20,0);// naranja
  delay(1000);
  setColor(255,40,0);// naranja
  delay(1000);
  setColor(255,120,0);// naranja
  delay(1000);
  setColor(255,180,0);// naranja 2
  delay(1000);  
  setColor(255,255,0);// amarillo
  delay(1000);
  setColor(180,255,0);// amarillo-verde lima
  delay(1000);
  setColor(80,255,0);// verde 2
  delay(1000);
  setColor(0,255,0);// verde 
  delay(1000);
  setColor(0,255,120);// verde oscuro
  delay(1000);
  setColor(0,255,255);// cian
  delay(1000);
  setColor(0,0,255);// azul
  delay(1000);
  setColor(120,0,255);// violeta
  delay(1000);
  setColor(190,0,255);// violeta 2
  delay(1000);
  setColor(255,0,255);// magenta
  delay(1000);
  setColor(255,0,120);// fúcsia
  delay(1000);
}
