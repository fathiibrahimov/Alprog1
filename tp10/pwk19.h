#include <stdio.h>
#include <string.h>

int arrBiner[100][100];//untuk menampung array biner
int panjangBiner[100];//untuk menampung panjang biner
int distrik[100];//untuk menampung nilai distrik
char distrikFor[100][100];//untuk menampung warga distrik for
char distrikDo[100][100];//untuk menampung warga distrik doWhile
char distrikDua[100][100];//untuk menampung warga distrik dua duanya
int a;
int b;
int c;

void biner(int kodeWarga[], int n);
void cekDistrik(int n, char arrWarga[][100]);
void cekGanap(int n);
void cetak();
int banding(int palindrom[][100], int p, int n);

/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Evaluasi 10 dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/