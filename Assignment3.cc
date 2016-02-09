#include <iostream> 
#include <string> 
using namespace std; 

int main()
{
	string a;
	cout << "Enter your name: ";
	cin >> a;
	
	cout << "Hello, " << a << "!" << endl;
	
	
	int b;
	cout << "Pick a number between 0 and 500!" << endl;
	cin >> b;
	
	double c;
	cout << "Now pick a decimal between -1000.00 and 1000.00" << endl;
	cin >> c;
	
	double result1;
	result1 = b + c;
	
	cout << "We can add an int to a double variable" <<endl;
	cout << b << " + " << c << " = " << result1 <<endl;
	
	
}
