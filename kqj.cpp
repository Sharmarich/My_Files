/*
cin>>n;
sum of 1 to n numbers print
*/


#include<iostream>
using namespace std;

int main(){
    double choice, INITIAL_BALANCE, amt, currentBal;
    INITIAL_BALANCE=10000.0;
    cout<<"Welcome\n";
    cout<<"initial bank balance ="<< INITIAL_BALANCE<<"\n";
    cout<<"What do you want to do?\n";
    cout<<"1. Deposit\n";
    cout<<"2. Withdraw\n";
    cout<<"3. Show My Balace\n";
    cout<<"4. Exit\n";
    cout<<"Select ur choice\n";
    cin>>choice;

    currentBal = INITIAL_BALANCE;

    while (choice != 4) {
        if (choice >= 5 && choice <= 0) {
            cout<<"Invalid"<<endl;
        }

        else if (choice == 1) {
            cout<<"Enter amount to deposit: ";
            cin>>amt;
            currentBal += amt;
        }

        else if (choice == 2) {
            cout<<"Enter amount to withdraw: ";
            cin>>amt;
            if (amt <= currentBal) {
                currentBal -= amt;
            }
            else {
                cout<<"Not have enough funds to withdraw"<<endl;
            }
        }

        else if (choice == 3) {
            cout<<"Your balance: "<<currentBal<<endl;
        }
        cout<<"What do you want to do?\n";
        cout<<"1. Deposit\n";
        cout<<"2. Withdraw\n";
        cout<<"3. Show My Balace\n";
        cout<<"4. Exit\n";
        cout<<"Select ur choice\n";
        cin>>choice;

        
    }

    cout<<"Bye";
    

    return 0;
}
/*
    if(n==1){
        cout<<"Enter Amount= ";
        cin>>amt;
        currentBal= initialBal + amt;
        cout<<"Your current balance is:"<<currentBal;
    }
    
    else if(n==2){
        cout<<"Enter Amount= ";
        cin>>amt;
        currentBal= initialBal - amt;
        cout<<"Your current balance is:"<<currentBal; 

    }
    
    if(n==3){
        cout<<"Your accounnt balance is:"<<currentBal; 

    }
   
    if(n==4)
    {
        cout<<"Have a Nice Day!";
        
    }
    if(n>4){
        cout<<"Invalid Input";
    }
    return 0;
}
*/