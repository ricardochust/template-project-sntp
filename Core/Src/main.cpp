#include "main.h"
#include "lwip.h"

#include "ST-LIB.hpp"
#include "Runes/Runes.hpp"
#include "Examples/examples_includes.hpp"

extern struct netif gnetif;

int main(void)
{
	printf("prueba");
	uint8_t id = PWMservice::inscribe(PB4).value();
	uint8_t id2 = PWMservice::inscribe_dual(PB8, PB6).value();
	uint8_t id3 = PWMservice::inscribe_dual(PE11, PE10).value();
	uint8_t id4 = PWMservice::inscribe_dual(PB9, PB7).value();

	uint8_t ic = InputCapture::inscribe(PF0).value();

	STLIB::start(Nucleo, "192.168.1.4", "255.255.0.0", "192.168.1.1", UART::uart2);

	printf("prueba");

	PWMservice::turn_on(id);
	PWMservice::set_duty_cycle(id, 30);
	PWMservice::turn_on(id2);
	PWMservice::set_duty_cycle(id2, 30);
	PWMservice::turn_on(id3);
	PWMservice::set_duty_cycle(id3, 30);
	PWMservice::turn_on(id4);
	PWMservice::set_duty_cycle(id4, 30);

	uint32_t freq = 0;
	uint8_t duty = 0;
	InputCapture::turn_on(ic);

	uint8_t duty_cycle = 0;
	printf("prueba");
	while(1) {
		HAL_Delay(50);
		PWMservice::set_duty_cycle(id3, duty_cycle++);
		if (duty_cycle >= 100) duty_cycle = 0;

		freq = InputCapture::read_frequency(ic).value();
		duty = InputCapture::read_duty_cycle(ic).value();

		printf("Freq = %lu; Duty = %u | \r", freq, duty);

		ErrorHandlerModel::ErrorHandlerUpdate();
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
