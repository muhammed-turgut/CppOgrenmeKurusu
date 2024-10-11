#include <iostream>
using namespace std;

int main() {

	int i;
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 0) {
			cout << "Cift= " << i<<endl;
		}
		else {
			cout << "Tek= " << i<<endl;
		}
	}
}