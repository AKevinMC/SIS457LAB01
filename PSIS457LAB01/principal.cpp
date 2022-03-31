#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Spanish");
	cout<< "Biografia" << endl;
	cout << "Nacido el 22 de agosto del año 1997,\n estudió en la primaria Eduardo Avaroa, secuandaria en el colegio Roberto Alvarado, entró en la carrera de Ing. Electromecanica" << endl;

	system("pause");
	return 0;
}
