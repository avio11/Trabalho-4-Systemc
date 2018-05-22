#include "systemc.h"

SC_MODULE(monitor){
	sc_fifo_in<int> resultado;

	void aciona_monitor();

	SC_CTOR(monitor){
		//SC_METHOD(aciona_monitor);
		//sensitive << resultado;
		SC_THREAD(aciona_monitor);
		
	}

};
