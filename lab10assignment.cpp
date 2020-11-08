/*
Minerva Sharma
David Keathly
CSCE 1040.001
Lab 10
*/

#include <iostream>
#include <stdio.h>

using namespace std;

//Function Prototype for Liar-Liar Sequence Function
int LiarLiarFunction(int n);

int main(){
	//gets and stores the value for n
	int n;
	cout << "Enter your value for n (integer value between 1 and 23): ";
	cin >> n;

	//checks that n is between 1 and 23
	while (n < 1 || n > 23){
		cout << "The number you entered is not between 1 and 23" << endl;
		cout << "Enter a new value for n (intger value between 1 and 23): ";
		cin >> n;
	}

	//finds and prints the value of the sequence from n to 1 in a for loop
	cout << "123456789012345678901234567890" << endl;
	for (int i = 1; i < n + 1; i++){
		//calls the LiarLiarFunction
		printf("Liar-Liar(%2d) = %12d\n", i, LiarLiarFunction(i));
	}
	return 0;
}

//Function Definition for Liar-Liar Sequence Function
int LiarLiarFunction(int n){
	//returns -1 if n is 1 or 2
	if (n == 1 || n == 2){
		return -1;
	}
	//if n isn't 1 or 2, this will find the value of the sequence for n
	else {
		//recursively finds the value
		return (2 * (LiarLiarFunction(n - 1) + LiarLiarFunction(n - 2)));
	}
}
