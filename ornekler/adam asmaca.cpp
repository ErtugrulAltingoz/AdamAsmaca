

#include <iostream>
#include<string>
using namespace std;
string oyuncu1, oyuncu2, kelime, gizlikelime;
int yanlis = 0;
char tahmin;
int main()
{
	cout << "ADAM ASMACA OYUNUNA HOS GELDINIZ" << endl;
	cout << "1. oyuncu ismi: " << endl;
	cin >> oyuncu1;
	cout << "2.oyuncu ismi:" << endl;
	cin >> oyuncu2;
	cout << oyuncu1 << " lutfen  " << oyuncu2 << " nin tahmin edebilmesi icin bir kelime gir:" << endl;
	cin >> kelime;
	while (gizlikelime.size() != kelime.size()) {
		gizlikelime.push_back('?');
		
	}
		for (int i = 0; i < 20; i++) {
			cout << endl;
		}
		cout << "RAKIP OYUNCUNUN KELIMEYI GORMEMESI ICIN 30 SATIR ALTA INILDI." << endl;
		do {
			cout << "BULUNAN HARFLER:" << endl;
			cout << gizlikelime;

			cout << "TAHMIN ET:" << endl;
			
			cin >> tahmin;
			int x = kelime.length();
			for (int i = 0; i < x; i++) {
				if (tahmin == kelime[i]) {
					gizlikelime[i] = tahmin;
					yanlis--;


				}

			}yanlis++;
			if (gizlikelime == kelime) {
				cout << "TEBRIKLER KAZANDINIZ:" << endl;
				break;
			}
			if (yanlis == 1) {
				cout << "I" << endl;
				cout << endl;

			}
			else if (yanlis == 2) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 3) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 3) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 4) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 5) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 6) {
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 7) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;



			}
			else if (yanlis == 8) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I   |" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 9) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I  -|" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 10) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I  -|-" << endl;
				cout << "I" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 11) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I  -|-" << endl;
				cout << "I /" << endl;
				cout << "I" << endl;
				cout << endl;
			}
			else if (yanlis == 12) {
				cout << "I===" << endl;
				cout << "I  O" << endl;
				cout << "I  -|-" << endl;
				cout << "I /" << endl;
				cout << "I / /" << endl;
				cout << endl;

			}
		} while (yanlis < 12);

	}

