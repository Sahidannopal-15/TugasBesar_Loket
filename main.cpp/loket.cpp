#include "loket.h"
#include <iostream>

void createLoket(ListLoket &L){
    L.first = nullptr;
}

void cretaleListPenumpang(ListPenumpang &L){
    L.first = nullptr;
    L.last = nullptr;
}

void createListRelasi(ListRelasi &L){
    L.first = nullptr;
}

void insertFirstLoket(ListLoket &L, adrLoket p){
   if(L.first == nullptr){
    L.first = p;
   }else{
    p->next = L.first;
    L.first = p;
   }
}

void insertLastLoket(ListLoket &L, adrLoket p){
    adrLoket q;
    if(L.first == nullptr){
        L.first = p;
    }else{
       q = L.first;
    while (q&&q->next){
        q= q->next;
    }
    p->next = nullptr;
    q->next = p;
    }
}
