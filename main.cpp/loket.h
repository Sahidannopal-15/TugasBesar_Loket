#ifndef LOKET_H_INCLUDED
#define LOKET_H_INCLUDED

//adt loket
struct loket{
    int idLoket;
    int harga;
    int jumlahPenumpang;
};

typedef elmLoket *adrLoket;

struct elmLoket{
    adrLoket next;
};

//adt penumpang
struct penumpang{
    int idPenumpang;
    int banyakTiket;
};

typedef struct elmPenumpang *adrPenumpang;

struct elmPenumpang{
    adrPenumpang next;
    adrPenumpang prev;
};

//adt relasi
typedef struct elmRelasi *adrRelasi;

struct elmRelasi{
    adrLoket nextLooket;
    adrPenumpang nextPenumpang;
    adrRelasi next;
};

void createLoket(listLoket &L);
void cretaleListPenumpang(listPenumpang &L);
void createListRelasi(listRelasi &L)


#endif // LOKET_H_INCLUDED
