/*
 * cli_app.h
 *
 *  Created on: Dec 24, 2024
 *      Author: H294286
 */

#ifndef INC_CLI_APP_H_
#define INC_CLI_APP_H_

#include "stdint.h"

void processRxedChar(uint8_t rxChar);
void handleNewline(const char *const pcInputString, char *cOutputBuffer, uint8_t *cInputIndex);
void handleCharacterInput(uint8_t *cInputIndex, char *pcInputString);
void vRegisterCLICommands(void);
void vCommandConsoleTask(void *pvParameters);


#endif /* INC_CLI_APP_H_ */
