// cin com strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string mystr;
	cout << "Qual o seu nome? ";
	getline (cin, mystr);
	cout << "Oi " << mystr << ". \n";
	cout << "Qual o seu time favorito? ";
	getline (cin, mystr);
	cout << "Eu Gosto Muito do " << mystr << ", Muito mesmo! \n";
	return 0;
}
