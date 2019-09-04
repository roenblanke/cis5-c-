//r0d0gg
//3 - 9 - 2019
//cis5 c++ prgrmng

#include <iostream>

using namespace std;

int main() 
{
	double subTot, taxRate, tax, total, adultPrice, childPrice;
	int numAdults, numChild;

	taxRate = .085;
	childPrice = 10.00;
	adultPrice = 15.00;

	cout << "***** Welcome to the Zoo! *****" << "\n";
	cout << "*****                     *****" << "\n";
	cout << "*****       Tickets       *****" << "\n";
	cout << "***** Adults.......$15.00 *****" << "\n";
	cout << "***** Children.....$10.00 *****" << "\n";
	cout << "***** Veterans.....$00.00 *****" << "\n";
	cout << "***** Seniors......$00.00 *****" << "\n";
	cout << "*******************************" << "\n";


	cout << "How many Adults?";
	cin >> numAdults;
	

	cout << "How many Children?";
	cin >> numChild;
		 

	subTot = numChild * childPrice + numAdults * adultPrice;

	tax = subTot * taxRate;

	total = subTot + tax;

	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << "\n";
	cout << "|~~~~~~~~~~Reciept~~~~~~~~~~~~|" << "\n";
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << "\n";
	cout << "|Children~~~~~~~~~~~~~" << numChild << "x$" << childPrice << "\n";
	cout << "|Adults~~~~~~~~~~~~~~~" << numAdults << "x$" << adultPrice << "\n";
	cout << "|Subtotal~~~~~~~~~~~~~$" << subTot << "\n";
	cout << "|Tax~~~~~~~~~~~~~~~~~~$" << tax << "\n";
	cout << "|Total~~~~~~~~~~~~~~~~$" << total << "\n";
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << "\n";
	cout << "|~~~~Have a beautiful day!~~~~|" << "\n";
	system("PAUSE");
	return 0;

}//close main