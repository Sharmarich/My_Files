#include<iostream>
#include<math.h>

using namespace std;

int add(int num1, int num2){
    return num1  + num2;
};
int sub(int num1, int num2){
    return num1  - num2;
}
int multiply(int num1, int num2){
    return num1  * num2;
}
int divide(int num1, int num2){
    if(num2 ==0){
        cout << "Divisor cannot be zero";
    }
    else {
            return  num1/num2;
        }


int main(){
    do{
        int operation;
        cout<<"Select your operation\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n";

        cin>>operation;
        cout

        switch(operation)
        {
            case 1:
            add();
           

            case 2:
            sub();
           

            case 3:
            multiply();
           

            case 4:
            divide();
        }
         while(operation >= 5 && operation <= 0) {
            cout<<"Invalid"<<endl;
         }
    }
    return 0;
}