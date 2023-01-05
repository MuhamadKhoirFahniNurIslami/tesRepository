#ifndef TPMOD5_H_INCLUDED
#define TPMOD5_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL
struct jadwalPenerbangan{
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan;
    int Kapasitas;
};


typedef jadwalPenerbangan infotype;
typedef struct elemenJadwal *adr_jadwalP;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_1301213107(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301213107(infotype x);
void insertLastJ_1301213107(ListJadwal &L, adr_jadwalP p);
void showJadwal_1301213107(ListJadwal L);
void deleteFirstJ_1301213107(ListJadwal &L, adr_jadwalP p);
bool searchJ_1301213107(ListJadwal L, string dari, string ke, string tanggal);
#endif // TPMOD5_H_INCLUDED
