#include <iostream>
#include <string>

/// <summary>
/// Using statement
/// </summary>
/// 

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Greeting {
	public:
		void sayHello(const string& name) {
			cout << "Hello, " << name << endl;
		}

		void sayBye(const string& name) {
			cout << "Good Bye, " << name << endl;
		}
};

void sayYes(const string& name) {
	cout << "yes, " << name << endl;
}

void countStats(int& x) {
	++x;
}

void callFunction(int& numCalls) {
	//do some stuff

	//count the statts for the number of times this
	//function has been called
	countStats(numCalls);
}

/// <summary>
/// driver
/// </summary>

int main() {
	int x;
	int numCounts = 0;
	//string str = "james";
	//sayYes(str);

	for (int i = 0; i < 20; ++i) {
		callFunction(numCounts);
	}

	Greeting someGreeting;
	someGreeting.sayHello("Josh");
	someGreeting.sayBye("Mark");

	Greeting* greetingPtr = new Greeting();
	greetingPtr->sayHello("Bear");


	delete greetingPtr;

	//cout << "function is called: " << numCounts << " times" << endl;
	//cout << "name after function call: " << str << endl;
	cin >> x;
	return 0;
}