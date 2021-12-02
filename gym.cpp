/*
	Title	:	Gym management
	Author 	:	Karan Parmar
	Purpose	:	Assign diet plan
*/
      
#include <iostream>
#include <limits.h>
#include <string>

using namespace std;

float calculate_bmi(float heightOfMember,float weightOfMember) {
	/*
	This function returns Body mass index of given member
	*/
	float bmi = weightOfMember/(heightOfMember/100 * heightOfMember/100); 
	return bmi;
}

string decide_karo(float bmi) {
	
	if (bmi < 17) {
		return "Underweight";
	}
	else if(bmi>28)	{
		return "Overweight";
	}
	else{
		return "Normal";
	}

}
string assign_diet_plan(string konsaHai) {
	/*
	Returns diet plan according to bmi
	*/
	
	return konsaHai + " " + "Plan";
}
// Intitalize
int main() {

	/*
	Calculate BMI (kg/m^2)
	According to BMI decide whether they are underweight, overweight or normal
	18 < bmi < 28
	Assign diet plan to members according to their bmi

	Adam has BMI {18.x} and he/she is {} so has {Normal diet plan}
	*/
	string gymMembers[] = {"Adam","Bob","Casey","Doug","Emma","Fiona"};
	float height[] = {181.23,160.36,148.22,172.9,168.66,177.58};
	float weight[] = {72.2,75.36,45.5,65.24,51.28,90.5};

	// code here
	int noOfMembers = sizeof(gymMembers)/sizeof(gymMembers[0]);

	for (int i=0; i<noOfMembers; ++i) {
		float bmi = calculate_bmi(height[i],weight[i]);
		string konsaHai = decide_karo(bmi);
		string dietPlan = assign_diet_plan(konsaHai);
		cout<<gymMembers[i]<<" has BMI "<<bmi<<" and has "<<dietPlan<<endl;
	}

	return 0;
}

// dynamic parameters
// find_maximum(arr), find_minimum(arr)
// calc