#include <iostream>
using namespace std;

int main()
{
	cout << "Three Boolean values, 'fancy', 'pants', and 'mcgee' are first initialized to true or false.\n";
	cout << "   fancy = true\n   pants = true\n   mcgee = false\n";
	bool fancy=true;                     // Initializing Boolean variable fancy to true
	bool pants=true;                     // Initializing Boolean variable pants to true
	bool mcgee=false;                    // Initializing Boolean variable mcgee to false
	cout << "'fancy' + 'pants' = "  << fancy+pants << "\n";   // Demonstrate numeric properties of Boolean variables with addition
	cout << "'fancy' - 'pants' = "	<< fancy-pants << "\n";   // Demonstrate numeric properties of Boolean variables with subtraction
	cout << "'fancy' + 'pants' * 'mcgee' = " << fancy+pants*mcgee << "\n";  // Demonstrating multiplication as well
	cout << "'mcgee' / 'pants' = "  << mcgee/pants << "\n";   // Also demonstrating division
	cout << "12 % ('fancy' + 'pants') = " << 12%(fancy+pants)<< "\n"; // Demonstrating discrete integer values, bools, and modulo
}


