#include "main.h"
#include "lwip.h"

#include "ST-LIB.hpp"
#include "Runes/Runes.hpp"
#include "Examples/examples_includes.hpp"

extern struct netif gnetif;

int main(void)
{
	rtc_example();
	while(1) {

	}
}

void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	ErrorHandler("HAL error handler triggered");
  /* User can add his own implementation to report the HAL error return state */
  //__disable_irq();
  //while (1){}
  /* USER CODE END Error_Handler_Debug */
}
