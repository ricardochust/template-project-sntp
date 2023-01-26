
DMA_HandleTypeDef hdma_adc1;
DMA_HandleTypeDef hdma_adc2;
DMA_HandleTypeDef hdma_adc3;
ADC_HandleTypeDef hadc1;
ADC_HandleTypeDef hadc2;
ADC_HandleTypeDef hadc3;
LPTIM_HandleTypeDef hlptim1;
LPTIM_HandleTypeDef hlptim2;
LPTIM_HandleTypeDef hlptim3;
TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;
TIM_HandleTypeDef htim5;
TIM_HandleTypeDef htim6;
TIM_HandleTypeDef htim8;
TIM_HandleTypeDef htim12;
TIM_HandleTypeDef htim16;
TIM_HandleTypeDef htim17;
TIM_HandleTypeDef htim15;
TIM_HandleTypeDef htim23;
TIM_HandleTypeDef htim24;
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart2;
UART_HandleTypeDef huart3;
SPI_HandleTypeDef hspi3;



Pin PE2(PORT_E, PIN_2);
Pin PE3(PORT_E, PIN_3);
Pin PE4(PORT_E, PIN_4, AF4);
Pin PE5(PORT_E, PIN_5, AF4);
Pin PE6(PORT_E, PIN_6, AF4);
Pin PC13(PORT_C, PIN_13);
Pin PF0(PORT_F, PIN_0, AF13);
Pin PF1(PORT_F, PIN_1, AF13);
Pin PF2(PORT_F, PIN_2, AF13);
Pin PF3(PORT_F, PIN_3, AF13);
Pin PF4(PORT_F, PIN_4);
Pin PF5(PORT_F, PIN_5);
Pin PF6(PORT_F, PIN_6);
Pin PF7(PORT_F, PIN_7);
Pin PF8(PORT_F, PIN_8);
Pin PF9(PORT_F, PIN_9);
Pin PF10(PORT_F, PIN_10);
Pin PC0(PORT_C, PIN_0);
Pin PC1(PORT_C, PIN_1, AF11);
Pin PA0(PORT_A, PIN_0);
Pin PA1(PORT_A, PIN_1);
Pin PA2(PORT_A, PIN_2, AF11);
Pin PA3(PORT_A, PIN_3);
Pin PA4(PORT_A, PIN_4);
Pin PA5(PORT_A, PIN_5);
Pin PA6(PORT_A, PIN_6);
Pin PA7(PORT_A, PIN_7);
Pin PC4(PORT_C, PIN_4, AF11);
Pin PC5(PORT_C, PIN_5, AF11);
Pin PB0(PORT_B, PIN_0);
Pin PB1(PORT_B, PIN_1);
Pin PB2(PORT_B, PIN_2);
Pin PF11(PORT_F, PIN_11);
Pin PF12(PORT_F, PIN_12);
Pin PF13(PORT_F, PIN_13);
Pin PF14(PORT_F, PIN_14);
Pin PF15(PORT_F, PIN_15);
Pin PG0(PORT_G, PIN_0);
Pin PG1(PORT_G, PIN_1);
Pin PE7(PORT_E, PIN_7);
Pin PE8(PORT_E, PIN_8, AF1);
Pin PE9(PORT_E, PIN_9, AF1);
Pin PE10(PORT_E, PIN_10, AF1);
Pin PE11(PORT_E, PIN_11, AF1);
Pin PE12(PORT_E, PIN_12, AF1);
Pin PE13(PORT_E, PIN_13, AF1);
Pin PE14(PORT_E, PIN_14, AF1);
Pin PE15(PORT_E, PIN_15);
Pin PB10(PORT_B, PIN_10);
Pin PB11(PORT_B, PIN_11);
Pin PB12(PORT_B, PIN_12);
Pin PB13(PORT_B, PIN_13, AF11);
Pin PB14(PORT_B, PIN_14, AF2);
Pin PB15(PORT_B, PIN_15, AF2);
Pin PD8(PORT_D, PIN_8);
Pin PD9(PORT_D, PIN_9);
Pin PD10(PORT_D, PIN_10);
Pin PD11(PORT_D, PIN_11);
Pin PD12(PORT_D, PIN_12, AF2);
Pin PD13(PORT_D, PIN_13, AF2);
Pin PD14(PORT_D, PIN_14, AF2);
Pin PD15(PORT_D, PIN_15, AF2);
Pin PG2(PORT_G, PIN_2);
Pin PG3(PORT_G, PIN_3);
Pin PG4(PORT_G, PIN_4);
Pin PG5(PORT_G, PIN_5);
Pin PG6(PORT_G, PIN_6);
Pin PG7(PORT_G, PIN_7);
Pin PG8(PORT_G, PIN_8);
Pin PC6(PORT_C, PIN_6, AF3);
Pin PC7(PORT_C, PIN_7, AF3);
Pin PC8(PORT_C, PIN_8, AF2);
Pin PC9(PORT_C, PIN_9, AF2);
Pin PA8(PORT_A, PIN_8);
Pin PA9(PORT_A, PIN_9, AF7);
Pin PA10(PORT_A, PIN_10, AF7);
Pin PA11(PORT_A, PIN_11, AF9);
Pin PA12(PORT_A, PIN_12, AF9);
Pin PC10(PORT_C, PIN_10);
Pin PC11(PORT_C, PIN_11);
Pin PC12(PORT_C, PIN_12);
Pin PD0(PORT_D, PIN_0);
Pin PD1(PORT_D, PIN_1);
Pin PD2(PORT_D, PIN_2);
Pin PD3(PORT_D, PIN_3);
Pin PD4(PORT_D, PIN_4);
Pin PD5(PORT_D, PIN_5, AF7);
Pin PD6(PORT_D, PIN_6, AF7);
Pin PD7(PORT_D, PIN_7);
Pin PG9(PORT_G, PIN_9, AF2);
Pin PG10(PORT_G, PIN_10, AF2);
Pin PG11(PORT_G, PIN_11, AF11);
Pin PG12(PORT_G, PIN_12);
Pin PG13(PORT_G, PIN_13, AF11);
Pin PG14(PORT_G, PIN_14);
Pin PG15(PORT_G, PIN_15);
Pin PB5(PORT_B, PIN_5, AF2);
Pin PB6(PORT_B, PIN_6, AF1);
Pin PB7(PORT_B, PIN_7, AF1);
Pin PB8(PORT_B, PIN_8, AF1);
Pin PB9(PORT_B, PIN_9, AF1);
Pin PE0(PORT_E, PIN_0);
Pin PE1(PORT_E, PIN_1);
Pin PB4(PORT_B, PIN_4, AF1);
Pin PC14(PORT_C, PIN_14);
Pin PC15(PORT_C, PIN_15);
Pin PC2(PORT_C, PIN_2);
Pin PC3(PORT_C, PIN_3);
Pin PH0(PORT_H, PIN_0);
Pin PH1(PORT_H, PIN_1);



/************************************************
 *              Communication-SPI
 ***********************************************/
#ifdef HAL_SPI_MODULE_ENABLED

SPI::Instance SPI::instance3 = { .SCK = &PC10, .MOSI = &PC12, .MISO = &PC11, .SS = &PD0,
                                 .hspi = &hspi3, .instance = SPI3,
								 .baud_rate_prescaler = SPI_BAUDRATEPRESCALER_256,
                               };

SPI::Peripheral SPI::spi3 = SPI::Peripheral::peripheral3;

unordered_map<SPI::Peripheral, SPI::Instance*> SPI::available_spi = {
	{SPI::spi3, &SPI::instance3}
};
#endif
/************************************************
 *              Communication-UART
 ***********************************************/
#ifdef HAL_UART_MODULE_ENABLED

UART::Instance UART::instance1 = { .TX = PA9, .RX = PA10, .huart = &huart1,
								   .instance = USART1, .baud_rate = 115200, .word_length = UART_WORDLENGTH_8B,
                               };


UART::Instance UART::instance2 = { .TX = PD5, .RX = PD6, .huart = &huart2,
								   .instance = USART2, .baud_rate = 115200, .word_length = UART_WORDLENGTH_8B,
                               };

UART::Instance UART::instance3 = { .TX = PD8, .RX = PD9, .huart = &huart3,
								   .instance = USART3, .baud_rate = 115200, .word_length = UART_WORDLENGTH_8B,
                               };


UART::Peripheral UART::uart1 = UART::Peripheral::peripheral1;
UART::Peripheral UART::uart2 = UART::Peripheral::peripheral2;
UART::Peripheral UART::uart3 = UART::Peripheral::peripheral3;


unordered_map<UART::Peripheral, UART::Instance*> UART::available_uarts = {
	{UART::uart1, &UART::instance1},
	{UART::uart2, &UART::instance2},
	{UART::uart3, &UART::instance3}
};

uint8_t UART::printf_uart = 0;
bool UART::printf_ready = false;

#endif
/************************************************
 *              Communication-I2C
 ***********************************************/

/************************************************
 *                 	  Encoder
 ***********************************************/
#ifdef HAL_TIM_MODULE_ENABLED

TimerPeripheral encoder_timer = TimerPeripheral(&htim8, {TIM8, 0, 65535});

map<pair<Pin, Pin>, TimerPeripheral*> Encoder::pin_timer_map = {
		{{PC6, PC7}, &encoder_timer}
};

#endif
/************************************************
 *                     Timer
 ***********************************************/
#ifdef HAL_TIM_MODULE_ENABLED

TimerPeripheral::InitData init_data_timer1(TIM1);
TimerPeripheral::InitData init_data_timer2(TIM2);
TimerPeripheral::InitData init_data_timer3(TIM3);
TimerPeripheral::InitData init_data_timer4(TIM4);
TimerPeripheral::InitData init_data_timer12(TIM12);
TimerPeripheral::InitData init_data_timer16(TIM16);
TimerPeripheral::InitData init_data_timer17(TIM17);
TimerPeripheral::InitData init_data_timer15(TIM15);
TimerPeripheral::InitData init_data_timer23(TIM23);

TimerPeripheral timer1(&htim1, init_data_timer1);
TimerPeripheral timer2(&htim2, init_data_timer2);
TimerPeripheral timer3(&htim3, init_data_timer3);
TimerPeripheral timer4(&htim4, init_data_timer4);
TimerPeripheral timer12(&htim12, init_data_timer12);
TimerPeripheral timer16(&htim16, init_data_timer16);
TimerPeripheral timer17(&htim17, init_data_timer17);
TimerPeripheral timer15(&htim15, init_data_timer15);
TimerPeripheral timer23(&htim23, init_data_timer23);

vector<reference_wrapper<TimerPeripheral>> TimerPeripheral::timers = {
		timer1,
		timer2,
		timer3,
		timer4,
		timer12,
		timer15,
		timer16,
		timer17,
		timer23
};


#endif
/************************************************
 *                     PWMservice
 ***********************************************/
#ifdef HAL_TIM_MODULE_ENABLED

map<Pin, PWMservice::Instance> PWMservice::available_instances = {
	{PB14, PWMservice::Instance(&timer12, TIM_CHANNEL_1, NORMAL)},
	{PB15, PWMservice::Instance(&timer12, TIM_CHANNEL_2, NORMAL)},
	{PB4, PWMservice::Instance(&timer3, TIM_CHANNEL_1, NORMAL)},
	{PB5, PWMservice::Instance(&timer3, TIM_CHANNEL_2, NORMAL)},
	{PC8, PWMservice::Instance(&timer3, TIM_CHANNEL_3, NORMAL)},
	{PD12, PWMservice::Instance(&timer4, TIM_CHANNEL_1, NORMAL)},
	{PD13, PWMservice::Instance(&timer4, TIM_CHANNEL_2, NORMAL)},
	{PD15, PWMservice::Instance(&timer4, TIM_CHANNEL_4, NORMAL)},
	{PE14, PWMservice::Instance(&timer1, TIM_CHANNEL_4, NORMAL)},
	{PE6, PWMservice::Instance(&timer15, TIM_CHANNEL_2, NORMAL)},
	{PF1, PWMservice::Instance(&timer23, TIM_CHANNEL_2, NORMAL)},
	{PF2, PWMservice::Instance(&timer23, TIM_CHANNEL_3, NORMAL)},
	{PF3, PWMservice::Instance(&timer23, TIM_CHANNEL_4, NORMAL)},
};

map<Pin, PWMservice::Instance> PWMservice::available_instances_negated = {};

map<pair<Pin, Pin>, PWMservice::Instance> PWMservice::available_instances_dual = {
	{{PB8,PB6}, PWMservice::Instance(&timer16, TIM_CHANNEL_1, DUAL)},
	{{PB9,PB7}, PWMservice::Instance(&timer17, TIM_CHANNEL_1, DUAL)},
	{{PE11,PE10}, PWMservice::Instance(&timer1, TIM_CHANNEL_2, DUAL)},
	{{PE13,PE12}, PWMservice::Instance(&timer1, TIM_CHANNEL_3, DUAL)},
	{{PE5,PE4}, PWMservice::Instance(&timer15, TIM_CHANNEL_1, DUAL)},
	{{PE9,PE8}, PWMservice::Instance(&timer1, TIM_CHANNEL_1, DUAL)},
};

#endif

/************************************************
 *                 Input Capture
 ***********************************************/
#ifdef HAL_TIM_MODULE_ENABLED


map<Pin, InputCapture::Instance> InputCapture::available_instances = {
		{PA0, InputCapture::Instance(PA0, &timer2, TIM_CHANNEL_1, TIM_CHANNEL_2)}
};

#endif


/************************************************
 *					   ADC
 ***********************************************/
#if defined(HAL_ADC_MODULE_ENABLED) && defined(HAL_LPTIM_MODULE_ENABLED)

uint16_t adc_buf1[ADC_BUF_LEN];
uint16_t adc_buf2[ADC_BUF_LEN];
uint16_t adc_buf3[ADC_BUF_LEN];

LowPowerTimer lptim1 = LowPowerTimer(*LPTIM1, hlptim1, LPTIM1_PERIOD);
LowPowerTimer lptim2 = LowPowerTimer(*LPTIM2, hlptim2, LPTIM2_PERIOD);
LowPowerTimer lptim3 = LowPowerTimer(*LPTIM3, hlptim3, LPTIM3_PERIOD);

vector<uint32_t> channels1 = {};
vector<uint32_t> channels2 = {};
vector<uint32_t> channels3 = {};

ADC::InitData init_data1 = ADC::InitData(ADC1, ADC_RESOLUTION_16B, ADC_EXTERNALTRIG_LPTIM1_OUT, channels1);
ADC::InitData init_data2 = ADC::InitData(ADC2, ADC_RESOLUTION_16B, ADC_EXTERNALTRIG_LPTIM2_OUT, channels2);
ADC::InitData init_data3 = ADC::InitData(ADC3, ADC_RESOLUTION_12B, ADC_EXTERNALTRIG_LPTIM3_OUT, channels3);

ADC::Peripheral ADC::peripherals[3] = {
		ADC::Peripheral(&hadc1, adc_buf1, lptim1, init_data1),
		ADC::Peripheral(&hadc2, adc_buf2, lptim2, init_data2),
		ADC::Peripheral(&hadc3, adc_buf3, lptim3, init_data3)
};

map<Pin, ADC::Instance> ADC::available_instances = {
		{PF11, Instance(&peripherals[0], ADC_CHANNEL_2)},
};

uint32_t ADC::ranks[16] = {
		ADC_REGULAR_RANK_1,
		ADC_REGULAR_RANK_2,
		ADC_REGULAR_RANK_3,
		ADC_REGULAR_RANK_4,
		ADC_REGULAR_RANK_5,
		ADC_REGULAR_RANK_6,
		ADC_REGULAR_RANK_7,
		ADC_REGULAR_RANK_8,
		ADC_REGULAR_RANK_9,
		ADC_REGULAR_RANK_10,
		ADC_REGULAR_RANK_11,
		ADC_REGULAR_RANK_12,
		ADC_REGULAR_RANK_13,
		ADC_REGULAR_RANK_14,
		ADC_REGULAR_RANK_15,
		ADC_REGULAR_RANK_16
};



#endif

/************************************************
 *					   EXTI
 ***********************************************/
#ifdef HAL_EXTI_MODULE_ENABLED

map<uint16_t, ExternalInterrupt::Instance> ExternalInterrupt::instances = {
	{PE0.gpio_pin, Instance(EXTI0_IRQn)},
	{PE1.gpio_pin, Instance(EXTI1_IRQn)}
};

#endif
