#include <iostream>
#include <locale.h>
using namespace std;
string b = "si";
int main() {
	setlocale(LC_CTYPE, "Spanish");
	do {
		cout << "\nBiografia de Kevin Medrano\n\n";
		cout << "Naci� el 22 de agosto del a�o 1997 en Sucre, \nfamilia: Mam�, sus abuelos y hermana\n" <<
			"Estudi� en la primaria Eduardo Avaroa, \nsecuandaria en el colegio Roberto Alvarado\n" <<
			"En la actualidad estudia en la univeridad USFX \nen la carrera de Ing de Sistemas\n" << endl;

		cout << "QUIERE VOLVER A VER LA BIOGRAF�A?    ";
		cin >> b;

	} while (b == "si");

	return 0;
}