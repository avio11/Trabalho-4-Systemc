#include "multiplicador.h"

void multiplicador::mult(){
	while (true){

        saida.write(entrada.read() + (elemento_vetor.read() * elemento_matriz.read()));

    }
}
