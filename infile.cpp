#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string baris;
	ofstream outfile;
	outfile.open("namafile.txt");
	cout << ">= Menulis file, \'q\' untuk kelur" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);

		if (baris == "q") break;

	}
}