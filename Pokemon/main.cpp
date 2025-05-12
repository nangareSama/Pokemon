#include <iostream>
using namespace std;



int main() {
   cout << "Please enter the Pokemon you Choose \n there are 3 choices :\n 1.Bulbasaur \n 2.Charmander \n 3.Squirtle \n";
  int playerinput;
   cin >> playerinput;


//    if(playerinput == 1){
//     cout << "You chose Bulbasaur! A wise choice.\n";
//    }else if(playerinput == 2){
//     cout << "You chose Charmander! A fiery choice.\n";
//    }else if(playerinput == 3){
//     cout << "You chose Squirtle! A cool choice.\n";
//    }else {
//     cout << "Pikachu !\n";
//    }

    switch(playerinput){
        case 1 : 
            cout << "You chose Bulbasaur! A wise choice.\n";
        break;

        case 2 : 
            cout << "You chose Charmander! A fiery choice.\n";
        break;

        case 3 : 
            cout << "You chose Squirtle! A cool choice.\n";
        break;

        default : 
        cout << "Invalid choice.\n";
    }

    return 0;
}
