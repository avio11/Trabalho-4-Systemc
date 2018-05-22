#include "multiplicador.h"
#include "monitor.h"



int sc_main(int argc, char* argv[]){
	multiplicador mul_0("mul_0");
	multiplicador mul_1("mul_1");
	multiplicador mul_2("mul_2");
	monitor mon("mon");

	sc_fifo<int> fila1(3);   //declaracao das filas a serem utilizadas
	sc_fifo<int> fila2(3);
	sc_fifo<int> fila4(3);
	sc_fifo<int> fila6(3);
	sc_fifo<int> fila3(1);
	sc_fifo<int> fila5(1);
	sc_fifo<int> fila7(1);
	sc_signal<int> V0, V1, V2;

	mul_0.elemento_vetor(V0);
	mul_0.elemento_matriz(fila2);   // conexoes do primeiro modulo multiplicador
	mul_0.entrada(fila1);
	mul_0.saida(fila3);

	mul_1.elemento_vetor(V1);
	mul_1.elemento_matriz(fila4);   // conexoes do segundo modulo multiplicador
	mul_1.entrada(fila3);
	mul_1.saida(fila5);

	mul_2.elemento_vetor(V2);
	mul_2.elemento_matriz(fila6);   // conexoes do terceiro modulo multiplicador
	mul_2.entrada(fila5);
	mul_2.saida(fila7);

	mon.resultado(fila7);			// conexoes do modulo monitor
	
	V0.write(2);		// Valores do vetor a ser multiplicado pela matriz
	V1.write(2);
	V2.write(2);
	
	fila1.write(0);		// Valores da pilha de entrada no primeiro modulo multiplicador
	fila1.write(0);
	fila1.write(0);
		
	fila2.write(2);		// Valores da primeira coluna da matriz de multiplicacao
	fila2.write(3);
	fila2.write(4);
	
	fila4.write(2);		// Valores da segunda coluna da matriz de multiplicacao
	fila4.write(3);
	fila4.write(4);
	
	fila6.write(2);		// valores da terceira coluna da matriz de multiplicacao
	fila6.write(3);
	fila6.write(4);

	sc_start(); 

	return 0;

}