/*
 * adc_example.hpp
 *
 *  Created on: 30 Jan. 2022
 *      Author: Alejandro
 */
#pragma once

#include "ST-LIB.hpp"

int pwm_example(void)
{
	vector<uint8_t> pwms;
	for (pair<Pin, PWMservice::Instance> pin_info : PWMservice::available_instances) {
		uint8_t id = PWMservice::inscribe(pin_info.first).value();
		pwms.push_back(id);
	}

	STLIB::start(Nucleo, "192.168.1.4", "255.255.0.0", "192.168.1.1", UART::uart2);

	for (uint8_t id : pwms) {
		PWMservice::turn_on(id);
		PWMservice::set_duty_cycle(id, 50);
	}


	uint8_t duty_cycle = 0;
	while (1) {
//		for (uint8_t id : pwms) {
//			PWMservice::set_duty_cycle(id, duty_cycle++);
//		}
//		if (duty_cycle >= 100) duty_cycle = 0;
//
//		printf("Duty %u",duty_cycle);
//		HAL_Delay(10);
//
//		ErrorHandlerModel::ErrorHandlerUpdate();
	}
}
