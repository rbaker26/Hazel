namespace Hazel {

	__declspec(dllimport) void Print();

}

#include <iostream>

int main()
{
	Hazel::Print();



	std::cin.get();
	return 0;
}