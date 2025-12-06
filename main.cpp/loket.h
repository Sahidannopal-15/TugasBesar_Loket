#ifndef LOKET_H_INCLUDED
#define LOKET_H_INCLUDED
typedef int infotypeLoket;
typedef int infotypePenumpang;

//adt loket
struct loket{
    int idLoket;
    int harga;
    int jumlahPenumpang;
};

struct penumpang{
    int idPenumpang;
    int banyakTiket;
};

typedef struct elmLoket *adrLoket;
typedef struct elmPenumpang *adrPenumpang;
typedef struct elmRelasi *adrRelasi;

struct elmLoket{
    Loket info;
    adrLoket next;
};

struct elmPenumpang{
    Penumpang info;
    adrPenumpang next;
    adrPenumpang prev;
};

struct elmRelasi{
    adrLoket nextLoket;
    adrPenumpang nextPenumpang;
    adrRelasi next;
};

struct ListLoket{
    adrLoket first;
};

struct ListPenumpang{
    adrPenumpang first;
    adrPenumpang last;
};

struct ListRelasi{
    adrRelasi first;
};

void createLoket(listLoket &L);
void cretaleListPenumpang(listPenumpang &L);
void createListRelasi(listRelasi &L);
void insertFirstLoket(ListLoket &L);
void insertLastLoket(ListLoket &L);
void insertFirstPenumpang(ListPenumpang &L);
void insertLastPenumpang(ListPenumpang &L);
void insertFirstRelasi(ListRelasi &L);
void insertLastRelasi(ListRelasi &L);
void delFirstLoket(ListLoket &L, adrLoket &p);
void delLastLoket(ListLoket &L, adrLoket &p);
void delAfterLoket(ListLoket &L, adrLoket &p, prec);
void delFirstPenumpang(ListPenumpang &L, adrPenumpang &p);
void delLastPenumpang(ListPenumpang &L, adrPenumpang &p);
void delAfterPenumpang(ListPenumpang &L, adrPenumpang &p, prec);
address findLoket(ListLoket L, infotypeLoket);
address findPenumpang(ListPenumpang L, infotypePenumpang);
void printInfoLoket(List L);
void printInfoPenumpang(ListPenumpang L);



#endif // LOKET_H_INCLUDED
