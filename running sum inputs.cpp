// Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of zero.

#include <iostream>
using namespace std;

int main(){
while (inputnum != 0){
    cout << "Please enter a number." << endl;
    int inputnum;
    cin >> inputnum;
    int sum = sum + inputnum;
    cout << sum << endl;
}
return 0;
}
