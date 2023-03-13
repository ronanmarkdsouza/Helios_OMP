#ifndef UTILS_HPP
#define UTILS_HPP
#include <iostream>
using namespace std;

struct rocket_params{
	float yaw;
	float pitch;
	float wind_n;
	float wind_e;
	float turb_int;
	float rail_len;
	bool air_brake;
	float desired_apogee;
	float parachute_dia;
	float r_parachute_dia;
	float r_height;
	float rocket_mass;
	float rocket_cg;
	float rocket_ami;
	float rocket_tmi;
	float rocket_dia;
	float rocket_rad;
	float rocket_len;
	float fin_root_chord;
	float fin_tip_chord;
	float fin_height;
	float fin_sweep_len;
	float fin_dist_nosetip;
	float motor_len;
	float motor_odia;
	float motor_wetmass;
	float motor_drymass;
	float noz_mass;
	float noz_len;
	float delay_tracker;
	float delay;
	float time_step;
	string prop_data_path;
	string aero_data_path;
	string output_name;
};
#endif
