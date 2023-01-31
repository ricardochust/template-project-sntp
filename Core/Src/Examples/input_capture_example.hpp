/*
 * input_capture_example.hpp
 *
 *  Created on: 31 Jan. 2022
 *      Author: Pablo
 */
#pragma once

#include "ST-LIB.hpp"
#include "DMA/DMA.hpp"
#include "ErrorHandler/ErrorHandler.hpp"
#include "main.h"

static void MX_TIM23_Init(void)
{

  /* USER CODE BEGIN TIM23_Init 0 */

  /* USER CODE END TIM23_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_IC_InitTypeDef sConfigIC = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM23_Init 1 */

  /* USER CODE END TIM23_Init 1 */
  htim23.Instance = TIM23;
  htim23.Init.Prescaler = 0;
  htim23.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim23.Init.Period = 4294967295;
  htim23.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim23.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_IC_Init(&htim23) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim23) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim23, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigIC.ICPolarity = TIM_INPUTCHANNELPOLARITY_RISING;
  sConfigIC.ICSelection = TIM_ICSELECTION_DIRECTTI;
  sConfigIC.ICPrescaler = TIM_ICPSC_DIV1;
  sConfigIC.ICFilter = 0;
  if (HAL_TIM_IC_ConfigChannel(&htim23, &sConfigIC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim23, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim23, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim23, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM23_Init 2 */

  /* USER CODE END TIM23_Init 2 */
  HAL_TIM_MspPostInit(&htim23);

}


void input_capture_example(void){
	UART::set_up_printf(UART::uart2);

	optional<uint8_t> input = InputCapture::inscribe(PF0);


	if (not input.has_value()) {
		ErrorHandler("No se ha podido registrar el input", 0);
	}

	Pin::start();
	DMA::start();
	TimerPeripheral::start();
	//MX_TIM23_Init();
	//Time::start();
	UART::start();

	printf("\n\n\n\n\n\n\n\n\n\n");

	uint32_t freq = 0;
	uint8_t duty = 0;
	InputCapture::turn_on(input.value());


	while (1) {

		freq = InputCapture::read_frequency(input.value()).value();
		duty = InputCapture::read_duty_cycle(input.value()).value();

		printf("Freq = %lu; Duty = %u | \r", freq, duty);
		HAL_Delay(50);

		ErrorHandlerModel::ErrorHandlerUpdate();
	}
}
