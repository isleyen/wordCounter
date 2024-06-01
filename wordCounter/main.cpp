#include <iostream>
#include <string>
using namespace std;

int kelimeSay(const string& metin) {
	int sayac = 0;
	bool kelime = false;

	for (char c : metin) {
		if (isalpha(c)) {
			kelime = true;
		}
		else if (isspace(c) && kelime) {
			sayac++;
			kelime = false;
		}
	}
	if (kelime) {        
		sayac++;
	}
	return sayac;
}

int main() {
	string metin;

	cout << "Lutfen bir metin giriniz: ";
	getline(cin, metin); 
	cout << "Metindeki kelime sayisi: " << kelimeSay(metin) << endl;

	return 0;
}