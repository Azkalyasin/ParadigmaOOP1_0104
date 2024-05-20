#ifndef ANAK_H
#define ANAK_H

using namespace std;

class anak {
	string nama;
	anak(string pnama) : nama(pnama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}

	~anak(){
		cout << "Anak\"" << nama << "\" tidak ada \n";
	}
};

#endif // !ANAK_H

