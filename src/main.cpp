#include "clock.h"
#include<iostream>
#include<thread>
#include "temperature_observation.h"

int main() 
{

	TemperatureObservation observ(90, 15000);


	Clock clock;
	

	int i{ 0 };
	while (i != 100)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		clock.display_time();
		std::cout << std::endl;
		i++;
	}

	
	return 0;
}
