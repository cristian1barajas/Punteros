#include <Arduino.h>

int variable = 0;   // Una variable simple
int *puntero;        // Declaración de un puntero a un entero

void setup() {
  Serial.begin(115200);  // Inicia la comunicación serial
  Serial.println();

  puntero = &variable; // El puntero apunta a la dirección de memoria de 'variable'
  
  Serial.println(variable);    // Imprime el valor de 'variable'
  Serial.println(*puntero);    // Imprime el valor almacenado en la dirección de memoria
  Serial.println((unsigned long)puntero, HEX);   // Imprime el valor al que apunta 'puntero' (que es 'variable')
}

void loop() {
  // Nada en el loop para este ejemplo
}
