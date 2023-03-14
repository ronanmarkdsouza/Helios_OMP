#include <iostream>
#include <omp.h>
#include <string.h>
#include "../include/rocket_param.hpp"
#include "../include/density_temperature.hpp"
using namespace std;

int main(int argc, char* argv[]){
	rocket_params rocket;
	if(argc==1){
		cout<<"Usage:\n\t./build/main --[options] [values]\n\tExample: ./build/main --input input.txt --output output.pdf"<<endl;
		exit(-1);
	}
	for(int i=1; i<argc; ++i){
		if(strcmp(argv[i],"--help")==0)
			cout<<"Usage:\n\t./build/main --[options] [values]\n\tExample: ./build/main --input input.txt --output output.pdf"<<endl;
		if(strcmp(argv[i],"--input")==0)
			cout<<"The input file has been set to "<<argv[i+1]<<endl;
		if(strcmp(argv[i], "--output")==0)
			rocket.output_name = string(argv[i+1]);
	}
	cout<<rocket.output_name<<endl;
	return 0;
}
