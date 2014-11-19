﻿/******
*ohjelman nimi: harjoitus 19
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava: Näppäimistä toimii
nopeusanturina ja näyttä mittarin näyttänä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle. Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava:
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila) nopeus = 0 km/h
Anna nopeus: 10 => 2 km/h
Anna nopeus: 20 => 6 km/h
Anna nopeus: 30 => 12 km/h
Anna nopeus: 40 => 20 km/h
Anna nopeus: 50 => 30 km/h
Anna nopeus: 50 => 38 km/h
Anna nopeus: 50 => 44 km/h
Anna nopeus: 50 => 48 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: -5 => loppu

Toteuta kayttaen taulukkoa.

*versio 1.0
*pvm: 19.11.2014
*/
#include <iostream>;
using namespace std;
int main()
{
	int i = 0;
	const int MAX=6;
	double nopeus[MAX]={0, 0, 0, 0, 0};
	double knopeus =((nopeus[0]+nopeus[1]+nopeus[2]+nopeus[3]+nopeus[4])/5);
	while(i>=0){
		for (i=0; i < 5; i++)
		{
			cout << "Anna nopeus";
			cin >> nopeus[i];
			if (nopeus[i] < 0)
			{
				i = -1;
				break;
			}
			cout << "Nopeus " << nopeus[i] << " km/h => " << ((nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4]) / 5) <<endl;
		}
		

	}

}

