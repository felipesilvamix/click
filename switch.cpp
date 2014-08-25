//trabalhando com switch 
#include <iostream>

using namespace std;

main ()
{
	int x;
	cout << "Entre com o numero:";
	cin >> x;
	
	switch (x) {
		case 1: 
		case 2:
		case 3:
			cout << "x e, 1, 2 ou 3?";
			break;	
	default:
			cout << "\nX nao e 1, 2 nem 3";
	return 0;	
		
	}
}
