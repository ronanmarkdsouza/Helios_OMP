#include <iostream>
#include <omp.h>
#include "../include/rocket_param.hpp"
#include "../include/density_temperature.hpp"
using namespace std;

int main(){
	rocket_params rocket;
	type_density_temperature test;
	test = density_temperature(100,100);
	cout<<test.density<<" "<<test.temperature<<endl;
	cout<<rocket.aero_data_path<<endl;
	return 0;
}
