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

  delay1ms(1000);

  // LCD INIT
  // ------------------------------------------------------------------------------------- 
  SSD1306_Init();                                    // 0x3C

  // DRAWING
  // -------------------------------------------------------------------------------------
  SSD1306_ClearScreen();
  SSD1306_SetPosition(1, 0);
  SSD1306_DrawString("SSD1306 OLED DRIVE 1");
  SSD1306_SetPosition(1, 1);
  SSD1306_DrawString("SSD1306 OLED DRIVE 2");
  SSD1306_SetPosition(1, 2);
  SSD1306_DrawString("SSD1306 OLED DRIVE 3");
  SSD1306_SetPosition(1, 3);
  SSD1306_DrawString("SSD1306 OLED DRIVE 4");

  SSD1306_UpdateScreen();

  // Main Routine
  uint8_t num = 0;
  while (1) {
    printf("num: %d\n", num);
    num++;
    /* SSD1306_UpdateScreen (SSD1306_ADDR); */                         
    delay1ms(1000);
  }

}
