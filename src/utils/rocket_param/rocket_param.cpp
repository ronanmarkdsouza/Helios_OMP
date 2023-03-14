#include "rocket_param.hpp"

rocket_params::rocket_params(){
	yaw = 0;
	pitch = 0;
    wind_n = 2;
	wind_e = 2;
	turb_int = 5;
	rail_len = 5.18;
	air_brake= false;
	desired_apogee = 3048;
	parachute_dia = 3;
	r_parachute_dia = 0.8;
	r_height = 460;
	rocket_mass = 22.174;
	rocket_cg = 1.92;
	rocket_ami = 0.09;
	rocket_tmi = 17.77;
	rocket_dia = 0.15;
	rocket_rad = 0.075;
	rocket_len = 3.03;
	fin_root_chord = 0.3;
	fin_tip_chord = 0.2;
	fin_height = 0.145;
	fin_sweep_len = 0.179;
	fin_dist_nosetip = 2.6;
	motor_len = 0.702;
	motor_odia = 0.098;
	motor_wetmass = 8.108;
	motor_drymass = 3.656;
	noz_mass = 0.1891;
	noz_len = 0.057;
	delay_tracker = 0;
	delay = 1;
	time_step = 0.001;
	prop_data_path = "./prop_data.xlsx";
	aero_data_path = "./aero_data.xlsx";
	output_name = "helios_output.pdf";
}