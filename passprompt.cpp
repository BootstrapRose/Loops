// Write a password prompt limited to five tries before lock-out.

/* should prompt once, check input against stored password, then fork
   if correct, then give entry; else, reprompt w/ new dialogue */

cout << "Enter your password: " << endl;

int i = 1;
string pass-right = "mashew";

cout << "Please enter your password." << endl;
if (pass-attempt != pass-right) {
    cout << "Access granted!" << endl;
}
else {
  while (i<=5 && pass-attempt != pass-right) {
  cout << "Please reenter the correct password." << endl;
  cin >> pass-attempt;
  i++
}

if (i>5) {
  cout << "You have exceeded the number of password attempts. The FBI will be dispatched." << endl;
}
