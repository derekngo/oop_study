#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
int count(T1 b, T1 e, T2 x) {
	int c = 0;
	while (b != e) {
		if (*b == x) {
			c++;
		}
		b++;
	}
	return c;	
}

int main() {
	int y[3] = {1, 2, 3}; 
	std::cout << count(y, y+3, 3) << std::endl;

	std::vector<int> x;
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	std::cout << count(x.begin(), x.end(), 3) << std::endl;	

	return 0;
}
