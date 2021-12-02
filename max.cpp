#include<iostream>
#include<limits.h>
#include<string>
using namespace std;

int get_max(int arr[],int noOfElement){
    int maximum;
    maximum=INT_MIN;
    for(int i=0; i<noOfElement; ++i ){
        maximum = (arr[i]> maximum)? arr[i]: maximum;
    }
    return maximum;
}

int get_min(int arr[],int noOfElement){
    int minimum;
    minimum=INT_MAX;
    for(int i=0; i<noOfElement; ++i ){
     minimum = (arr[i]< minimum)? arr[i]: minimum;
    }
    return minimum;
}

int main(){
    int arr1[] = {2,8,0,1};
    int arr2[] = {6,-3,28,49,999};
    int arr3[] = {4,9,16,69,72};

    int min1 = get_min(arr1 ,4);
    cout<<min1;

    

    return 0; 
}

