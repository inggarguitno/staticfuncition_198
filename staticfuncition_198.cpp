// staticfuncition_198.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printA11();
	mahasiswa(string pnama) :nama(pnama) { setID(); }

};
int mahasiswa::nim = 0;
void mahasiswa::setID() {
	id = ++nim;

}
void mahasiswa::printA11() {
	cout << "ID "  << id << endl;
	cout << "Nama = " << nama << endl;
}

int main() {
	mahasiswa mhs1("lia kurnia");
	mahasiswa mhs2("asroni");
	mahasiswa mhs3("andi kurniwan");
	mahasiswa mhs4("joko purbo");

	mhs1.printA11();
	mhs2.printA11();
	mhs3.printA11();
	mhs4.printA11();
	return 0;
}