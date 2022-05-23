#include <iostream>
#include "cd.h"
using namespace std;
int main()
{
	cd GianniCeleste;
	GianniCeleste.setPrezzo(15);
	cout << "u cd viene" << GianniCeleste.getPrezzo << "euri";
	return 0;
}
