#include <iostream>
#include <string>


int main()
{
	int i = 42;
	// converts the int i to its character representation
	std::string s = std::to_string(i);  

	double d = stod(s);   // converts the string s to floating-point
	std::cout << "i = " << i << " s = " << s << " d is: " << d << std::endl;

	// convert the first substring in s that starts with a digit,  d = 3.14
	std::string s2 = "pi = 3.14";
	d = std::stod(s2.substr(s2.find_first_of("+-.0123456789")));

	std::cout << "d = " << d << " s = " << s << " s2 is: " << s2 << std::endl;

	return 0;
}
