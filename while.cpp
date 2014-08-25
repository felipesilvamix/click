//trabalhando com while, "contagem regressiva" iniciando de 	"10" até "0". 
#include <iostream>

using namespace std;

int main ()
{
	int n = 10;
	
	while (n>0) {
		cout << n << ", ";
		--n;
	}
	cout << "liftoof!\n";
	return 0;	
		
}
