// Write a password prompt limited to five tries before lock-out.

/* should prompt once, check input against stored password, then fork
   if correct, then give entry; else, reprompt w/ new dialogue */

#include <iostream>
using namespace std;

int main() {

int i = 1;
string passRight = "mashew";
string passAttempt;

cout << "Please enter your password: " << endl;
cin >> passAttempt;
if (passAttempt == passRight) {
    cout << "Access granted!" << endl;
}
else {
  while (i<=5 && passAttempt != passRight) {
  cout << "Please reenter the correct password." << endl;
  cin >> passAttempt;
  i++;
}

if (i>5) {
  cout << "You have exceeded the number of password attempts. The FBI will be dispatched." << endl;
}
	return 0;
}
}
