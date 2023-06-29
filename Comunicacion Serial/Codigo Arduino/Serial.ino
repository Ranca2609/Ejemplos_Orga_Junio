const int led = 13;
int valor_dato = 0;

void setup()
{
  pinMode(led, OUTPUT);
  digitalWrite (led, LOW);
  Serial.begin(9600);
  Serial.println("Conexión Establecida");
}

void loop(){
  
  while(Serial.available())
  {
    valor_dato = Serial.parseInt();
  }
  
  if (valor_dato > 620)
  {
    digitalWrite (led, HIGH);
    Serial.println("Se enciende el led");
  }
  else 
  {
    digitalWrite (led, LOW);
    Serial.println("Se apaga el led");
  }
}
