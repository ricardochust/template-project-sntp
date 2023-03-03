/*
 * rtc_example.hpp
 *
 * Created on: 14 Feb. 2023
 * 		Author: Ricardo
 */

#pragma once
#include "main.h"
#include "lwip.h"
#include "ST-LIB.hpp"

int rtc_example(void){
	STLIB::start(Nucleo,"192.168.1.4","255.255.0.0","192.168.1.1");
	uint32_t a = HAL_RCC_GetSysClockFreq();
	printf("%lu",a);

	DatagramSocket dsocket("192.168.1.4",10,"192.168.1.3",10);
	double vspace[1];
	PacketValue<uint16_t> dpacketvalue(vspace,4);
	uint16_t values[4] = {2,4,8,16};
	dpacketvalue.load(values);
	Packet<uint16_t> dpacket(dpacketvalue);
	dsocket.send(dpacket);

	SNTP::sntp_update(192,168,1,3);

	printf("\n\n\n\n\n\n\n\n\n\n");
	while(1){
		STLIB::update();
		Time::rtc_data now = Time::get_RTC_data();
		printf("%u:%u:%u::%u  %u-%u-%u \n",now.hour,now.minute,now.second,now.counter,now.day,now.month,now.year);
		//HAL_Delay(1000);
	}
}
