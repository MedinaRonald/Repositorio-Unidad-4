#include <iostream>

using namespace std;
template <class T>
bool ansisuported (T x) {return true; }

int main () {
	
	if (ansisuported(0)) cout << "ANSI OK";
	
	return 0;
	
	
}
