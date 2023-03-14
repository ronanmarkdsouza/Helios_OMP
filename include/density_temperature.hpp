#ifndef DENSITY_TEMPERATURE_HPP
#define DENSITY_TEMPERATURE_HPP
#include <math.h>
#define a -0.0065
#define g -9.81
#define c 1.23

struct type_density_temperature{
	float density;
	float temperature;
}density_temperature_ret;

type_density_temperature density_temperature(float alt, float temp_out);
#endif
