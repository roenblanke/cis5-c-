//r0d0gg
//3 - 9 - 2019
//cis5 c++ prgrmng

#include <iostream>

using namespace std;

int main()
{
	double radius, pi, diameter, circumf, area;

	pi = 3.14;

	cout << "What is the radius of your circle?" << "\n";
	cin >> radius;

	diameter = 2 * radius;
	circumf = 2 * pi * radius;
	area = 2 * pi * radius * radius;

	cout << "Here are the measurements of your circle!" << "\n";
	cout << "Circumference . . . " << circumf << "\n";
	cout << "Diameter . . . " << diameter << "\n";
	cout << "Area . . . " << area << "\n";
	cout << "See you in hell!";
	system("PAUSE");
	return 0;


}//close main method