#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Penerbit {
private:
    string namaPenerbit;

public:
    Penerbit(string nama) : namaPenerbit(nama) {}

    string getNamaPenerbit() {
        return namaPenerbit;
    }
};

class Pengarang {
private:
    string namaPengarang;
    vector<Penerbit*> penerbitDinaungi;
    vector<string> karya;

public:
    Pengarang(string nama) : namaPengarang(nama) {}

    string getNamaPengarang() {
        return namaPengarang;
    }

    void tambahkanPenerbit(Penerbit* penerbit) {
        penerbitDinaungi.push_back(penerbit);
    }

    void tambahkanBuku(string judulBuku) {
        karya.push_back(judulBuku);
    }

    void tampilkanPenerbitDinaungi() {
        cout << "Daftar pengarang pada penerbit \"" << penerbitDinaungi[0]->getNamaPenerbit() << "\":" << endl;
        for (Penerbit* penerbit : penerbitDinaungi) {
            cout << penerbit->getNamaPenerbit() << endl;
        }
        cout << endl;
    }

    void tampilkanPenerbitDiikuti() {
        cout << "Daftar penerbit yang diikuti \"" << namaPengarang << "\":" << endl;
        for (Penerbit* penerbit : penerbitDinaungi) {
            cout << penerbit->getNamaPenerbit() << endl;
        }
        cout << endl;
    }

    void tampilkanKarya() {
        cout << "Daftar buku yang dikarang \"" << namaPengarang << "\":" << endl;
        for (string judulBuku : karya) {
            cout << judulBuku << endl;
        }
        cout << endl;
    }
};

int main() {
    // Membuat objek Penerbit
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    // Membuat objek Pengarang
    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Giga");
    Pengarang pengarang4("Asroni");

    // Menambahkan pengarang ke penerbit
    pengarang1.tambahkanPenerbit(&penerbit1);
    pengarang2.tambahkanPenerbit(&penerbit1);
    pengarang3.tambahkanPenerbit(&penerbit1);
    pengarang4.tambahkanPenerbit(&penerbit2);
    pengarang3.tambahkanPenerbit(&penerbit2);

    // Menambahkan buku yang dikarang oleh pengarang
    pengarang1.tambahkanBuku("Fisika");
    pengarang1.tambahkanBuku("Algoritma");
    pengarang2.tambahkanBuku("Basisdata");
    pengarang4.tambahkanBuku("Dasar Pemrograman");
    pengarang3.tambahkanBuku("Matematika");
    pengarang3.tambahkanBuku("Multimedia 1");

