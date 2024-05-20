#ifndef IBU_H
#define IBU_H
#include <vector>

using namespace std;

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pnama) : nama(pnama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}

	~ibu() {
		cout << "ibu \"" << nama << "\" tidak ada\n";
	}
	void Tambahanak(anak*);
	void cetakanak();
};



void ibu::cetakanak() {
	cout << "daftar anak dari ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}

	cout << endl;
}

void ibu::Tambahanak(anak* panak) {
	daftar_anak.push_back(panak);
}

#endif // !IBU_H

