/*
	Title	:	Board Game
	Author 	:	Richa Sharma
	Purpose	:	Circular Board Game
*/

//  spelling mistakes
//  a, n, x, num - ese naam nahi rakhne. meaningful names. naming convenstions
//  using variables without declaring

#include <iostream>
#include <limits.h>
#include <string>

using namespace std;

int new_position(int position,int diceValue, int direction){
    // [...,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,...]
    // 1st + 2nd > 10
    // 8 + d > 10 => sum - 10
    //
    // 1st - 2nd < 1
    // 5 + (-d) < 1 => 10 - sum
    if(direction == 1){
        if(position + diceValue<=10){
            return position + diceValue;
        }
        else{
            return position + diceValue -10;
        }
    }

    else if(direction == -1){
        if(position - diceValue<1){
            return 10 + position - diceValue;
        }
        else{
            return position - diceValue;
        }
    }
}

// [1,1,1]
// [*2,1,1] :: 1up
// [2,*3,1] :: 2up
// [2,3,*3] :: 2up => [2,0,3]
// [*7,0,3] :: 5down
// [7,0,*7] :: 4up => [0,0,7]

int check_elimination(int positions[], int currentPlayerIndex, int noOfPlayers) {
    /*
    currentPlayer will be an index
    if currentPlayerIndex = 0 uska matlab woh dusre number ka player hai
    [4,5,3,1]
    positions[currentPlayerIndex] == positions[0] :: x == 4 => for skip if currentPlayerIndex == for loop index (i)
    positions[currentPlayerIndex] == positions[1] :: x == 5
    positions[currentPlayerIndex] == positions[2] :: x == 3
    positions[currentPlayerIndex] == positions[3] :: x == 1

    bug : khud ko eliminate nahi karna hai
    iteration = one by one sab ki values ko dekhna/print karana

    Elimination logic
    one by one check karenge
    kis se check karenge ? 

    iss func ka return type int hai
    to yeh jo bhi player eliminate hua hai uska index return karega
    aur agar koi eliminate nahi hua hai to noOfPlayers

    player indices range = 0 to noOfPlayers-1
    programming wala int => -inf to inf
    [4,5,3,1]
    */
    int size = sizeof(positions)/sizeof(positions[0]);
    for(int i=0; i<size;++i) {
        if (positions[currentPlayerIndex] == positions[i]){
            if(i== currentPlayerIndex){
                continue;
            }
            else{
                return i;
            }
        }
    }

    return noOfPlayers;
}

// Intitalize
int main() {
    int noOfPlayers = 3;
    int position[] = {1, 1, 1}; //size = 3
    int diceValue, upOrDown;
    int size = sizeof(position)/sizeof(position[0]);
    
    while(noOfPlayers>1){
        for(int i=0; i<size; ++i){
            if (position[i] != 0) {
                cout<<"Enter your number for player "<<i+1<<" : ";
                cin>>diceValue;
                cout<<"up or down for player "<<i+1<<" : ";
                cout<<"\nup = 1\ndown = -1\n";
                cin>>upOrDown;
                
                // update the position of player
                position[i] = new_position(position[i], diceValue, upOrDown);

                // check if player has eliminated someone
                // solve the logical error
                // x which is better as industrial level? skip or check?
                // [4,*5,0,5]
                // we will make a    function
                int eliminationIndex = check_elimination(position,i,noOfPlayers);

                // eliminate karenge
                // agar eliminationIndex sahi hai to position ko 0 kar denge
                // eliminationIndex = jo player eliminate hua hai uski index
                // position[eliminationIndex] = 0
                // what do we gonna do if eliminationIndex = 4
                if(eliminationIndex != noOfPlayers){
                    position[eliminationIndex] = 0;
                    noOfPlayers -= 1; // noOfPlayers = noOfPlayers - 1; --noOfPlayers;
                }

                for (int i=0; i<size; ++i){
                    cout<<position[i]<<",";
                }
                cout<<endl;
            }
        }
        

    }
	
/*
	1 se 10 tak ek circular board hai
	n players
	1 pe khade ho sab log start pe
	dice => (1 to 6)
	90 pe ho to 90+x bhi kar sakte ho, 90-x
	same position out ho jaye ga
	*/

  

	return 0;
}