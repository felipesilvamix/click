//trabalhando com goto em loop exemplo
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int n=10;
mylabel:
	cout << n << ", ";
	n--;
	if (n>0) goto mylabel;
	cout << "lifetoff!\n";

	return 0;	
}
