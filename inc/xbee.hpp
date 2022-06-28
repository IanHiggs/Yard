
#pragma once

#include <iostream>

class xbee_lib{
public:
	bool init_node(std::string xbee_address);
	bool tx_packet(std::string packet_data);
	bool tx_command(std::string packet_command);
	std::string rx_packet(std::string packet);

	
private:



};