#include "flight.h"

void createListJadwal_1301213107(ListJadwal &L){
    first(L) = nil;
}
adr_jadwalP createElemenJadwal_1301213107(infotype x){
    adr_jadwalP p = new elemenJadwal;
    info(p) = x;
    next(p) = nil;
    return p;
}
void insertLastJ_1301213107(ListJadwal &L, adr_jadwalP p){
    if (first(L) == nil){
        first(L) = p;
    }else{
        adr_jadwalP q;
        q = first(L);
        while (next(q) != nil){
            q = next(q);
        }
        next(q) = p;
    }
}
void showJadwal_1301213107(ListJadwal L){
    if (first(L) == nil){
        cout << "List Kosong" << endl;
    }else {
        adr_jadwalP p = first(L);
        while (next(p) != nil){
            cout <<"Kode penerbangan : "<< info(p).Kode << endl;
            cout <<"Jenis penerbangan : "<< info(p).Jenis << endl;
            cout <<"Tanggal penerbangan : "<< info(p).Tanggal << endl;
            cout <<"Waktu penerbangan : "<< info(p).Waktu << endl;
            cout <<"Asal penerbangan : "<< info(p).Asal << endl;
            cout <<"Tujuan penerbangan : "<< info(p).Tujuan << endl;
            cout <<"Kapasitas penerbangan : "<< info(p).Kapasitas << endl;

            p = next(p);
        }
        cout <<"Kode penerbangan : "<< info(p).Kode << endl;
        cout <<"Jenis penerbangan : "<< info(p).Jenis << endl;
        cout <<"Tanggal penerbangan : "<< info(p).Tanggal << endl;
        cout <<"Waktu penerbangan : "<< info(p).Waktu << endl;
        cout <<"Asal penerbangan : "<< info(p).Asal << endl;
        cout <<"Tujuan penerbangan : "<< info(p).Tujuan << endl;
        cout <<"Kapasitas penerbangan : "<< info(p).Kapasitas << endl;
    }
}
void deleteFirstJ_1301213107(ListJadwal &L, adr_jadwalP p){
    if (first(L) == nil){
        cout << "List Kosong" << endl;
    }else if (next(first(L)) == nil){
        p = first(L);
        first(L) = nil;
    }else{
        p = first(L);
        first(L) = next(first(L));
        next(p) = nil;
    }
}
bool searchJ_1301213107(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP cari = first(L);
    while (cari != nil){
        if (info(cari).Asal == dari && info(cari).Tujuan == ke && info(cari).Tanggal == tanggal){
            return true;
        }else{
            cari = next(cari);
        }
    }
    return false;
}
