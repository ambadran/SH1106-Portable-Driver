#include "project-defs.h"

void main(void) {

  // INITs
	INIT_EXTENDED_SFR();
  EA = 1; // enable interrupts
  serialConsoleInitialise(
      CONSOLE_UART, 
      CONSOLE_SPEED, 
      CONSOLE_PIN_CONFIG
      );

  // Main Routine
  while (1) {

    

  }

}
