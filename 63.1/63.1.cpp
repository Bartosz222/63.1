#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{	
	ifstream wejscie;
	ofstream wyjscie;
	string ciag,s1,s2;
	wejscie.open("ciagi.txt");
	wyjscie.open("wynik.txt");
	if (wejscie.good() && wyjscie.good()) {
		while (!wejscie.eof()) {
			wejscie >> ciag;
			for (int i = 0; i < ciag.length() /2; i++)s1 += ciag[i];
			for (int i = ciag.length() / 2; i < ciag.length();i++ )s2 += ciag[i];
			if (s1 == s2) wyjscie << ciag <<endl;
			s1 = "";
			s2 = "";
		}
	}
	else {
		cout << "Blad" << endl;
		exit(0);
	}
	wejscie.close();
	wyjscie.close();
	return 0;
}
