// Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of zero.

#include <iostream>
using namespace std;

int inputnum;
int sum = 0;

int main(){
do {
    cout << "Please enter a number." << endl;
    cin >> inputnum;    
    sum = sum + inputnum;
    cout << "Your new sum is " << sum << endl;
} while (inputnum != 0);

if (inputnum == 0){
    cout << "We'll stop adding now. You reached " << sum << endl;
}
return 0;
}
