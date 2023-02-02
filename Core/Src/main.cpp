#include "main.h"
#include "lwip.h"

#include "ST-LIB.hpp"
#include "Runes/Runes.hpp"
#include "Examples/examples_includes.hpp"

void Error_Handler(void);

extern struct netif gnetif;

int main(void)
{
	uint8_t id = PWMservice::inscribe(PB4).value();
	uint8_t id2 = PWMservice::inscribe_dual(PB8, PB6).value();
	uint8_t id3 = PWMservice::inscribe_dual(PE11, PE10).value();
	uint8_t id4 = PWMservice::inscribe_dual(PB9, PB7).value();
	STLIB::start(Nucleo, "192.168.1.4", "255.255.0.0", "192.168.1.1", UART::uart2);

	PWMservice::turn_on(id);
	PWMservice::set_duty_cycle(id, 30);
	PWMservice::turn_on(id2);
	PWMservice::set_duty_cycle(id2, 30);
	PWMservice::turn_on(id3);
	PWMservice::set_duty_cycle(id3, 30);
	PWMservice::turn_on(id4);
	PWMservice::set_duty_cycle(id4, 30);
	while(1);
}

void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
