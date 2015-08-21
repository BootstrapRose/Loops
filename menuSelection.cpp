/* Write a program that lets the user select from a list of options, and if the input is not one of the options, reprint the list */

#include <iostream>
using namespace std;

//function prototypes;
void menuOptions();
int optionSelected(int userChoice);

int main(){

menuOptions();
int userChoice;
cin >> userChoice;
optionSelected(userChoice);

return 0;
}

void menuOptions() {
cout << "Welcome to the Verizon billing homepage! How may we assist?" << endl;
cout << "1. Make a payment." << endl;
cout << "2. Check my balance." << endl;
cout << "3. Contact a representative." << endl;
cout << "4. Find more information." << endl;
}

int optionSelected(int userChoice) {
switch (userChoice) {
  case 1:
    cout << "Payment made." << endl;
    break;
  case 2:
    cout << "Balance retrieved." << endl;
    break;
  case 3:
    cout << "Representative connecting." << endl;
    break;
  case 4:
    cout << "More info here!" << endl;
    break;
  default:
  optionSelected();
  break;
  }
}
