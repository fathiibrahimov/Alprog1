#include <stdio.h>
int main(){
	int hasilnama=0;
	int hasilkode=0;
	
	int n;
	scanf("%d", &n);
	
	char nama[n];
	
	int a;
	for(a=0;a<n;a++){
		scanf(" %c", &nama[a]);
	}
	
	int m;
	scanf("%d", &m);
	
	char kode [m];
	
	int b;
	for(b=0;b<m;b++){
		scanf(" %c", &kode[b]);
	}
	
	char database1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
	'o','p','q','r','s','t','u','v','w','x','y','z'};
	char database2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
	'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char database3[10]={'0','1','2','3','4','5','6','7','8','9'};
	char vokal[5]={'a','i','u','e','o'};
	char konsonan[42]={'b','c','d','f','g','h','j','k','l','m','n'
	,'p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N',
	'P','Q','R','S','T','V','W','X','Y','Z'};
	
	int c;
	int d;
	
	for(c=0;c<n;c++){
		for(d=0;d<26;d++){
			if(nama[c]==database1[d]){
				hasilnama=hasilnama+(d+97);
			}
		}
	}
	
	int e;
	int f;
	for(e=0;e<n;e++){
		for(f=0;f<26;f++){
			if(nama[e]==database2[f]){
				hasilnama=hasilnama+(f+65);
			}
		}
	}
	
	int g;
	int h;
	for(g=0;g<n;g++){
		for(h=0;h<5;h++){
			if(nama[g]==vokal[h]){
				hasilnama=hasilnama+4;
			}
		}
	}
	
	int i;
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<42;j++){
			if(nama[i]==konsonan[j]){
				hasilnama=hasilnama+5;
			}
		}
	}
	
	int k;
	int l;
	for(k=0;k<m;k++){
		for(l=0;l<26;l++){
			if(kode[k]==database1[l]){
				hasilkode=hasilkode+(l+97);
			}	
		}
	}
	
	int o;
	int p;
	for(o=0;o<m;o++){
		for(p=0;p<26;p++){
			if(kode[o]==database2[p]){
				hasilkode=hasilkode+(p+65);
			}	
		}
	}
	
	int q;
	int r;
	for(q=0;q<m;q++){
		for(r=0;r<10;r++){
			if(kode[q]==database3[r]){
				hasilkode=hasilkode+r;
			}	
		}
	}
	
	int s;
	int check=0;
	for(s=0;s<m;s++){
		if((kode[s] >= 'a' && kode[s] <= 'z') || (kode[s] >= 'A' && kode[s] <= 'Z') || (kode[s] >= '0' && kode[s] <= '9')){
			check=check+1;
		}
	}
	if(check==m){
		printf("%d", hasilnama);
		printf("-");
		printf("%d ", hasilkode);
		int aa;
		for(aa=0;aa<n;aa++){
			printf("%c", nama[aa]);
		}
	
		if(hasilnama%2==0&&hasilkode%2==0){
			printf(" merupakan pelakunya.\n");
		}else if(hasilnama%2!=0&&hasilkode%2!=0){
			printf(" merupakan pelakunya.\n");
		}else{
			printf(" bukan pelakunya.\n");
		}
	}else{
		printf("Kode tidak valid.\n");
	}
	
	
	return 0;
}
/*Saya Ahmad Fathi Ibrahimov mengerjakan evaluasi Tugas 5
dalam mata kuliah Algoritma dan Pemrograman untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/