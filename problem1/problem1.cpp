#include <iostream>

int main() {
	int N = 1000;
	int final_sum = 0;
	int i;
	for(i=1;i<N;i++) {
		if(!(i%3) || !(i%5)) final_sum = final_sum + i;
	}
	std::cout << "Final sum is " << final_sum << "\n";
	return 0;
}
