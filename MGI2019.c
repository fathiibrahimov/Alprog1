#include <stdio.h>
/*saya adhi susetyo mengerjakan evaluasi TP5 dalam mata kuliah alpro 1 untuk keberkahanNya maka 
    saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.*/
int main (){
    //membuat integer 
    int i=0,m,n,hasil1=0,hasil2=0,penanda1=0;
    //meminta user memasukkan panjang char pertama
    scanf ("%d", &n);
    char a[n];
    //meminta masukkan user untuk nama pelaku
    for (i=0;i<n;i++){
        scanf (" %c", &a[i]);
    }
    //mengubah nama pelaku menjadi nilai sesuai tabel ascii
        for (i=0;i<n;i++){
        //kalau huruf vokal
        if ((a[i]=='a')||(a[i]=='i')||(a[i]=='u')||(a[i]=='e')||(a[i]=='o')||(a[i]=='A')||(a[i]=='I')||
        (a[i]=='U')||(a[i]=='E')||(a[i]=='O')){
            hasil1 = hasil1 + a[i] + 4;
        }
        //kalau huruf konsonan
        else {
            hasil1 = hasil1 + a[i] + 5;
        }
    }
    //meminta user memasukkan panjang kode
    scanf ("%d", &m);
    char b[m];
    //meminta user memasukkan kode
    for (i=0;i<m;i++){
    scanf (" %c", &b[i]);
    }
    //mengubah kode pelaku menjadi nilai sesuai tabel ascii
        for (i=0;i<m;i++){
        if ((b[i]>='a'&&b[i]<='z')||(b[i]>='A'&&b[i]<='Z')){
            hasil2 = hasil2 + b[i];
        }
        else if (b[i]>='0'&&b[i]<='9'){
            hasil2 = hasil2 + b[i] - '0';
        }
    }
    //memeriksa apakah kode hanya terdiri dari huruf dan angka
    for (i=0;i<m;i++){
        if ((b[i]>='a'&&b[i]<='z')||(b[i]>='A'&&b[i]<='Z')||(b[i]>='0'&&b[i]<='9')){
            penanda1 = penanda1 + 1;
        }
    }
    //jika kode terdiri hanya dari huruf dan angka
if (penanda1 == m){
    printf ("%d-%d ", hasil1, hasil2);
    for (i=0;i<n;i++){
        printf ("%c", a[i]);
    }
    if (hasil1 % 2 == hasil2 % 2){
        printf (" merupakan pelakunya.\n");
    }
    else {
        printf (" bukan pelakunya.\n");
    }
}
    //jika kode terdiri tidak dari huruf dan angka
    else {
        printf ("kode tidak valid.\n");
    }
return 0;
}