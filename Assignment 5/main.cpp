#include <iostream>
#include <string>
using namespace std;

void mainMenu();

int main()
{

	mainMenu();

	return 0;
}

void mainMenu()
{
	cout << endl << "\tCMPR131 Chapter 5: Vector and List Container by Joe B. (9/27/23)\n";
	cout << "\t" << string(97, char(205)) << endl;
	cout << "\t\t1> Vector container\n";
	cout << "\t\t2> List container\n";
	cout << "\t\t3> Application using Vector and/or List container\n";
	cout << "\t" << string(97, char(196)) << endl;
	cout << "\t\t0> Exit\n";
	cout << "\t" << string(97, char(205)) << endl;
}