#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
bool equals(T1 b, T1 e, T2 b2) {
	while (b != e) {
		if (*b != *b2) {
			return false;
		}
		b++;
		b2++;
	}
	return true;	
}

int main() {
	/*int y[3] = {1, 2, 3}; 
	std::cout << count(y, y+3, 3) << std::endl;
*/
	std::vector<int> x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	
	std::vector<int> y = {1, 2, 3};

	std::cout << boolalpha << std::endl;
	std::cout << equals(x.begin(), x.end(), y.begin()) << std::endl;	

	return 0;
}
