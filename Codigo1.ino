//METODO QUE CONFIGURA EL ARDUINO ANTES DE INIICIAR EL CICLO LOOP
void setup() {
  //EL METODO PINMODE LE DICE AL ARDUINO QUE PREPARE UN PUERTO COMO ENTRADA O SALIDA
  pinMode(11, OUTPUT);//VERDE
  pinMode(12, OUTPUT);//AMARILLO/NARANJA
  pinMode(13, OUTPUT);//ROJO
}
//METODO QUE SE REPITE INDEFINIDAMENTE HASTA QUE EL DISPOSITIVO SE APAGUE
void loop() {
	//LUZ ROJA ENCENDIDA
  digitalWrite(13,HIGH);
	//ESPERA DE 3 SEGUNDOS
  delay(3000);
	//LUZ ROJA APAGADA
  digitalWrite(13,LOW);
  //////////////////////////CAMBIO DE LUZ///////////////////////
	//LUZ AMARILLA/NARANJA ENCENDIDA
  digitalWrite(12,HIGH);
	//ESPERA DE 3 SEGUNDOS
  delay(3000);
	//LUZ AMARILLA/NARANJA APAGADA
  digitalWrite(12,LOW);
  //////////////////////////CAMBIO DE LUZ///////////////////////
	//LUZ VERDE ENCENDIDA
  digitalWrite(11,HIGH);
	//ESPERA DE 3 SEGUNDOS
  delay(3000);
	//LUZ VERDE APAGADA
  digitalWrite(11,LOW);
  //////////////////////////CAMBIO DE LUZ///////////////////////
}