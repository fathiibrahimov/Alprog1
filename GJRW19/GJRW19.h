#include <stdio.h>
#include <string.h>


int arrUnder[50];//membuat array untuk menampung indeks posisi tiap _
int arrBahaya[50];//membuat array untuk menampung nilai ascii
char arrEnkrip[50][50];//membuat array untuk menampung array yang sudah dienkripsi
char arrAwal[50][50];//membuat array untuk menampung array awal yang belum diubah
char arrB[50][50];//membuat array untuk menampung game yang berbahaya
char arrA[50][50];//membuat array untuk menampung game yang aman
int a;//untuk mengetahui apakah array aman ada isinya
int b;//untuk mengetahui apakah array bahaya ada isinya

void cek(int n, char arrInput[][50]);//mengecek _
void tukar(int n, char arrInput[][50]);//menukar isi array yang genap dan ada _ nya
void enkrip(int n, char arrInput[][50], char database[], char databaseA[], char vokal1[], char konsonan1[], char konsonanA[], char konsonanB[], char konsonanA2[]);//dienkrip sesuai ketentuan
void cetak(int n);//prosedur untuk mencetak sesuai output
void bahaya(int n);//memasukkan yang ganjil ke array bahaya dan yang genap ke array aman
void aman(int n);//cek apakah ascii nya ganjil atau genap