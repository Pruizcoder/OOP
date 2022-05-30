#ifndef PAZIENTE_H
#include <iostream>
using namespace std;
struct date
{
	int giorno;
	int mese;
	int anno;
};
class paziente
{private: 
	string nome;
	string cognome;
	date data_nascita;
	string cf;
public:
	string get_nome();
	string get_cognome();
	date get_nascita();
	string get_cf();
};

get_nome()
{

}

#endif //PAZIENTE_H 
