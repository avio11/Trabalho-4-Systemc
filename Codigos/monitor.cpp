#include "monitor.h"
#include "iostream"
using namespace std;

int posicao0 = 1;

void monitor::aciona_monitor(){
	while (true){
		
		cout << "V[" << posicao0 << "]" << " = " << resultado.read() << endl;
		posicao0++;

	}		
}
