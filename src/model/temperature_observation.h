#ifndef TEMPERATURE_OBSERVATION_H
#define TEMPERATURE_OBSERVATION_H

class TEMPERATUREOBSERVATION
{

public:
	TemperatureObservation(int t, long long s) : temperature(t), seconds(s) {}


private:
	int temperature;
	long long seconds;
};

#endif // TEMPERATURE_OBSERVATION_H