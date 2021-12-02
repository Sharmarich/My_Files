#include <iostream>
#include <limits.h>
#include <string>

using namespace std;

  

int main(){
    string time[] = {"10:00","11:00","12:00","13:00","14:00"};
    float speedA[] = {30.3, 28.6, 35.6, 30.5, 25.3};
    float speedR[] = {28.9, 25.3, 38.8, 33.4, 22.4};
    

    for(int i=0; i<=5; ++i){

        if((speedA[i]< speedR[i]) && (speedA[++i]>speedR[++i])){
            
            cout<<"A and R intersect each other at "<<time[i]<<" and "<<time[i++];

            }
    }
    return 0;
}


	/*
	find which points are crossing
	for, if else, &&,||, functions
	
	string time[] = {"10:00","11:00","12:00","13:00","14:00","15:00","16:00"};
	float anubhavSpeed[] = {15.2,30.3,35.6,40.2,28.5,23.7,21.5};
	float roshanSpeed[] = {14.2,29.5,35.5,41.2,28.8,25.0,20.5};

	for (int i=0; i<7; ++i) {
		if((anubhavSpeed[i]< roshanSpeed[i]) && (anubhavSpeed[i]>roshanSpeed[i])){

		}
	}


	return 0;
}/