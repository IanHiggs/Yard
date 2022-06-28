
#pragma once


#include <iostream>
#include <string>

class xbee_lib{
public:
	int xbee_init(std::string mac_address);
	int xbee_tx_str(std::string packet);
	int xbee_tx_cmd(std::string cmd);
	std::string xbee_rx(std::string mac_address);


private:



};