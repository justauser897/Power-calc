#include <iostream>

int main()
{
	int P, V, I;
	std::cout << "Enter voltage and current.";
	std::cin >> V;
	std::cin >> I;
	P=V*I;
	std::cout << "The power equals to " << P;
	
	return 0;
	
}
