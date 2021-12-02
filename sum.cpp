#include <iostream>
#include <limits.h>
#include <string>

using namespace std;


// Intitalize
int main() {
	
	/*
	Meteore aa rha hai ghar ko udaane
	tere paas rocket hai
	12% accuracy se hit karta hai
	Meteore ki health 100u
	kitne minimum kitne rocket chahiye jo tum meteore ko tod sako
	1 rocket woh meteore ko 1% damage deta hai
	*/
    int noOfRockets;
	float meteoreHealth = 100;
    while(meteoreHealth>0){
        noOfRockets+=100;
        meteoreHealth-=12;
        cout<<noOfRockets<<"\n";    
    }

	return 0;
}