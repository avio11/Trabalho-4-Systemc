#include "systemc.h"

SC_MODULE(multiplicador){
	sc_fifo_in<int> elemento_matriz, entrada;
	sc_fifo_out<int> saida;
	sc_in<int> elemento_vetor;

	void mult();

	SC_CTOR(multiplicador){
		SC_THREAD(mult);

	}
};
