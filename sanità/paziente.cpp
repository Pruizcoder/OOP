#include "veicolo.h"
#include <iostream>
using namespace std;
string paziente::get_nome()
{
	return nome;
}
string paziente::get_cognome()
{
	return cognome;
}
date paziente::get_nascita()
{
	return data_nascita;
}
string paziente::get_cf()
{
	return cf;
}