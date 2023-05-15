// mbrstatic_198.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printA11();

	static void setNIM(int pNim) { nim = pNim; }
	static int getNim() {
		return nim;
	}

	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;

}

void mahasiswa::printA11() {
	cout << "ID =" << id << endl;
	cout << "nama =" << nama << endl;



} 

int main() {
	mahasiswa mhs1("sri dadi");
	mahasiswa mhs2("budi jatmiko");
	mahasiswa::setNIM(9);
	mahasiswa mhs3("andi janu");
	mahasiswa mhs4("joko wahono");

	mhs1.printA11();
	mhs2.printA11();
	mhs3.printA11();
	mhs4.printA11();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;
}
	

		
