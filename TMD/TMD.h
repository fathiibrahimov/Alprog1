#include <stdio.h>
#include <string.h>

//Bismillah, dengan menyebut nama Allah saya mengerjakan tugas ini, semoga filenya tidak corrupt lagi.

int n;//buat tau berapa banyak angka yang mau dimasukin
int tebal;//buat tau ketebalannya berapa
float rerata;//buat nyimpan nilai rata rata
int depan[100];//buat nyimpan pisahan rata rata yang depannya
int idepan;//untuk panjang depan
int tengah;//buat nyimpan pisahan rata rata yang setelah titik
int akhir;//buat nyimpan pisahan rata rata yang terakhir
int gatauapaan;//iseng aja buat nentuin berapa panjang kekanan array
int pusing;//ini yang baru gak tau buat apaan, saya pusing

int polapola[300][300];//buat nampung arrray yang udah jadi

void mola();//prosedur buat pola ke bawah
void moli(int p, int posisi);//prosedur buat pola ke kanan
void carirata(int arrAngka[n]);//prosedur buat cari rata rata
void pisah();//prosedur buat misah rata-rata
void ilangSpasi(int arrAngka[n]);//prosedur buat mencetak sekaligus hilangkan spasi ataupun langsung enter aja


/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/