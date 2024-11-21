#include <stdio.h>

int main(){
	printf("===========================================\n");
	printf(" SELAMAT DATANG DI LAHAN PARKIR MAS SIGIT! \n");
	printf("===========================================\n");
	printf("                BIAYA PARKIR               \n");
	printf("1. Motor       : Rp. 1.500/jam\n");
	printf("2. Mobil       : Rp. 3.000/jam\n");
	printf("3. Bus         : Rp. 20.000 berlaku flat\n");
	printf("4. Helikopter  : Rp. 2.500.000 berlaku flat\n");
	printf("===========================================\n");
	
	int jenisKendaraan;
	printf(" Masukkan jenis kendaraan anda: ");
	scanf("%d", &jenisKendaraan);
	
	int lamaParkir;
	printf(" Masukkan lama parkir kendaraan (jam): ");
	scanf("%d", &lamaParkir);
	
	char kendaraanKaryawan;
	printf(" Kendaraan karyawan (y/n): ");
	scanf(" %c", &kendaraanKaryawan);
	
	int biayaParkir = 0;
	
	switch (jenisKendaraan) {
		case 1:
			biayaParkir = lamaParkir * 1500;
			break;
		
		case 2:
			biayaParkir = lamaParkir * 3000;
			break;
		
		case 3:
			biayaParkir = 20000;
			break;
		
		case 4:
			biayaParkir = 2500000;
			break;
		
		default:
			printf("===========================================\n");
			printf(" Jenis kendaraan tidak tersedia.\n");
			printf("===========================================\n");
			break;
	}
	
	if(biayaParkir != 0 && jenisKendaraan >= 1 && jenisKendaraan <=4){
		if(kendaraanKaryawan =='y'){
			biayaParkir = biayaParkir / 2;
		}
		
		printf("===========================================\n");
		printf(" BIAYA PARKIR: Rp. %d\n", biayaParkir);
		printf("===========================================\n");
	}
	
	return 0;
}