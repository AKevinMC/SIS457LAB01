#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Spanish");
	cout<< "Biografia" << endl;
	cout << "Nacido el 22 de agosto del a�o 1997,\n estudi� en la primaria Eduardo Avaroa, secuandaria en el colegio Roberto Alvarado, entr� en la carrera de Ing. Electromecanica" << endl;

	system("pause");
	return 0;
}
