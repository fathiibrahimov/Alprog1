import java.util.*;

/*
 Assalamualaikum Warahmatullahi Wabarakatuh
 Tolong copasnya yang bener ya mamang
 kalau ada error waktu run di ignore aja dulu
 harusnya masih bisa jalan kodingannya
 Tapi kalau errornya ada tulisan array out of bounds
 saya lambaikan tangan ke kamera
 karena saya tidak mengalami hal tersebut selama run kodingan saya
 Wassalamualaikum Warahmatullahi Wabarakatuh
*/

public class Krip {
    public static void main (String args[]){
        char[] data={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
            'o','p','q','r','s','t','u','v','w','x','y','z'};
        int check = 0;
        int check2;
        int longkap=0;
        int circle;
        
        //meminta masukan user
        Scanner input = new Scanner (System.in);
        String masukan;
        System.out.print("Masukkan : ");
        masukan=input.nextLine();
        System.out.print("Berapa longkapnya :");
        longkap=input.nextInt();
        
        //membuat supaya arraynya circular
        circle=26-longkap;
        
        //mengubah string ke array dan membuat array untuk menampung enkrip dekrip
        char[]arr = masukan.toCharArray();
        char[]arr2 = new char[arr.length];
        char[]arr3 = new char[arr.length];
                
        //enkripsi data
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<data.length;j++){
                if(arr[i]==data[j]){
                    check=j;
                    if(j>=circle){
                        check=j-26;
                    }
                }
            }
            //memasukkan enkripsi data ke arr2
            check2=check+longkap;
            arr2[i]=data[check2];
        }
        
        //dekripsi data
        for(int k=0;k<arr2.length;k++){
            for(int l=0;l<data.length;l++){
                if(arr2[k]==data[l]){
                    check=l;
                    if(l>=circle){
                        check=l-26;
                    }
                }
            }
            //memasukkan dekripsi data ke arr3
            check2=check-longkap;
            arr3[k]=data[check2];
        }
        
        //menampilkan hasil enkrip dan dekrip
        System.out.print("Enkrip :");
        for(int m=0;m<arr2.length;m++){
            System.out.print(arr2[m]);
        }
        
        System.out.println("");
        
        System.out.print("Dekrip :");
        for(int n=0;n<arr3.length;n++){
            System.out.print(arr3[n]);
        }
    }
}