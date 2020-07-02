//
// Created by ake on 24/6/20.
//

#include "Juego.h"
#include "conio2.h"

Juego::Juego(){}

void Juego::play() {
	
	
	Tablero T;
	T.setFichaIn(0,0,'X');
	T.setFichaIn(0,1,'0');
	T.setFichaIn(0,2,'X');
	T.setFichaIn(1,0,'0');
	T.setFichaIn(1,1,'X');
	T.setFichaIn(1,2,'0');
	T.setFichaIn(2,0,'X');
	T.setFichaIn(2,1,'0');
	T.setFichaIn(2,2,'X');
	T.mostrar();
	
}

void Juego::imprimirCabecera() {}

void Juego::imprimirGanador(bool turno1) {}

void Juego::imprimirTerminar(bool turno1) {}

void Juego::imprimirOpciones(bool opciones) {}

int Juego::getKey(){}

void Juego::insertKey(int k, char c){}

bool Juego::checkTateti(){}

bool Juego::checkTermino(){}

void Juego::imprimirTablero() {}
