#include "density_temperature.hpp"
type_density_temperature density_temperature(float alt, float temp_out){
	type_density_temperature density_temperature_ret;
	density_temperature_ret.temperature = temp_out + (a * alt);
	density_temperature_ret.density = c * (pow((density_temperature_ret.temperature/temp_out),((g/(a*287))-1)));
	return density_temperature_ret;
}