int Ventilador = 0;
int Boton = 4;
int Buzzer = 3;
int EstadoBoton;

void setup()
{
  pinMode(Ventilador, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Boton, INPUT_PULLUP);
}

void loop()
{
  EstadoBoton = digitalRead(Boton);
  if (EstadoBoton == LOW)
  {
    delay(200);
    for (int i=0; i <=3; i++)
    {
      digitalWrite(Buzzer, HIGH);
      delay(200);
      digitalWrite(Buzzer, LOW);
      delay(200);
    } 
    digitalWrite(Ventilador, HIGH);
    for (int i=0; i <=255; i++)
    {
      analogWrite(Ventilador, i);
      delay(25);
    }
    delay(10000);
    analogWrite(Ventilador, LOW);    
  }
}
