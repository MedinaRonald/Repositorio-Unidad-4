#include <iostream>
#include <limits>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Spanish");
	
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << " tamaño de int : " << sizeof(int) << endl;
	cout << " imin = " <<imin << endl;
	cout << " imax = " <<imax << "\n";
	
	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << " tamaño de float : " << sizeof(float) << endl;
	cout << " fmin = " <<fmin << endl;
	cout << " fmax = " <<fmax << "\n";
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " tamaño de char : " << sizeof(char) << endl;
	cout << " cmin = " <<cmin << endl;
	cout << " cmax = " <<cmax << "\n";
	
	long lmin = numeric_limits<long>::min();
	long lmax = numeric_limits<long>::max();
	
	cout << " tamaño de Long : " << sizeof(long) << endl;
	cout << " lmin = " <<lmin << endl;
	cout << " lmax = " <<lmax << "\n";
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << " tamaño de double : " << sizeof(double) << endl;
	cout << " dmin = " <<dmin << endl;
	cout << " dmax = " <<dmax << "\n";
	
	short smin = numeric_limits<short>::min();
	short smax = numeric_limits<short>::max();
	
	cout << " tamaño de short : " << sizeof(short) << endl;
	cout << " smin = " <<smin << endl;
	cout << " smax = " <<smax << "\n";
	
	long double ldmin = numeric_limits<long double>::min();
	long double ldmax = numeric_limits<long double>::max();
	
	cout << " tamaño de long double : " << sizeof(long double) << endl;
	cout << " ldmin = " <<ldmin << endl;
	cout << " ldmax = " <<ldmax << "\n";
	
	return 0;
}
