#include <iostream>


template<class T>
T Range(const T& Low, const T& High){	
	return High - Low;
}

int main() {

	std::cout << Range(10, 100) << std::endl;
	std::cout << Range(-10, 100) << std::endl;
	std::cout << Range(-100, -10) << std::endl;
	return 0;

}