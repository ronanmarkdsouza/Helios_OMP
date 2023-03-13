#include <iostream>
#include <omp.h>
#include "../include/rocket_param.hpp"
using namespace std;

int main(){
	rocket_params rocket = {0,0,0,0,2,5.8,false,3680,12,12,12,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,"prop_data.csv","aero_data.csv","helios_out.pdf"};
	cout<<rocket.desired_apogee<<endl;
	return 0;
}
