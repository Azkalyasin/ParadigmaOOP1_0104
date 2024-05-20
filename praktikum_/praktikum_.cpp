
#include <iostream>
#include <string>
using namespace std;


class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;
public:
    mahasiswa(int pid, string pnama, float pnilai) : id(pid), nama(pnama) {

    }

    mahasiswa() {
        cout << "ID = " << id << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
