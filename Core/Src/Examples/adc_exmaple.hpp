#include "ST-LIB.hpp"
#include "DMA/DMA.hpp"

int adc_example(void)
{
	UART::set_up_printf(UART::uart2);

	optional<uint8_t> adc = ADC::inscribe(PF11);

	if (not adc.has_value()) {
		ErrorHandler("No se ha podido registrar el adc", 0);
	}

	DMA::inscribe_stream(DMA::Stream::DMA1Stream0);

	Pin::start();
	DMA::start();
	Time::start();
	ADC::start();
	UART::start();

	printf("\n\n\n\n\n\n\n\n\n\n");

	ADC::turn_on(adc.value());

	while (1) {
		float value = ADC::get_value(adc.value()).value();
		printf("Value %f | \r", value);
		HAL_Delay(50);

		ErrorHandlerModel::ErrorHandlerUpdate();
	}
}
