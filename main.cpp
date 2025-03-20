/*! 
 *  \brief     Activa una alarma cuando se detecta gas
 *  \details   El gas se detecta a partir del pin D2 y se activa la alarma con LED1. Se manda un mensaje de inicio por el puerto serie
 *  \authors   Sebastian Andrada, Sergio Aguirre
 *  \date      19/03/2025
 */

#include "arm_book_lib.h"
#include "mbed.h"


/*!
    \param none
*/
int main() {
  DigitalIn gasDetector(D2);

  DigitalOut alarmLed(LED1);
/*!
    \note { Se pone el pin D2 como PullDown}

*/
  gasDetector.mode(PullDown);

  alarmLed = OFF;

/*!
    \note { Se manda el siguiente mensaje para saber que se inicializo el programa }
*/

  printf("%s\n", "Hello World");



  while (true) {
    if (gasDetector == ON) {
      alarmLed = ON;
    }

    if (gasDetector == OFF) {
      alarmLed = OFF;
    }

  }
}