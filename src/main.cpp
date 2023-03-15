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
		cout<<"Continue with deafult values? [y/n]";
		char inp;
		cin>>inp;
		switch(inp){
			case 'y':
				break;
			case 'Y':
				break;
			default:
				exit(0);
		}
	}
	#pragma omp parallel for
	for(int i=1; i<argc; ++i){
		int tid = omp_get_thread_num();
		if(strcmp(argv[i],"--help")==0){
			cout<<"Usage:\n\t./build/main --[options] [values]\n\tExample: ./build/main --input input.txt --output output.pdf"<<endl;
			exit(0);
		}
		if(strcmp(argv[i],"--input")==0)
			cout<<"The input file has been set to "<<argv[i+1]<<" "<<tid<<endl;
		if(strcmp(argv[i], "--output")==0)
			rocket.output_name = string(argv[i+1]);
	}
	cout<<rocket.output_name<<endl;
	return 0;
}
