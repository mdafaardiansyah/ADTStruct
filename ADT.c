#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data_penduduk_sidoarjo{
	char nama[40],kecamatan[40],noktp[20],nohp[15];
	
}sda;

int main (){
	int i,j;
	sda daftar[100];
	printf("=== DAFTAR PENDUDUK SIDOARJO ===\n");
	printf("\nMasukkan banyaknya data penduduk : ");
	scanf("%d",&i);
	
	for (j=0;j<i;j++){
		printf("\nPenduduk ke- %d \n",j+1);
		printf("\nMasukkan Nama Lengkap anda\t: ");
		scanf(" %[^\n]%*c",&daftar[j].nama);
		printf("\nMasukkan Nomor KTP anda\t\t: ");
		scanf(" %[^\n]%*c",&daftar[j].noktp);
		printf("\nMasukkan Nomor HP anda\t\t: ");
		scanf(" %[^\n]%*c",&daftar[j].nohp);
		printf("\nMasukkan Asal Kecamatan\t\t: ");
		scanf(" %[^\n]%*c",&daftar[j].kecamatan);
	}
	system("cls");
	printf("======  Tampilan Data ======");
	
	for (j=0;j<i;j++){
		printf("\n\nPenduduk ke- %d\n",j+1);
		printf("\nNama\t\t : %s",&daftar[j].nama);
		printf("\nNomor KTP\t : %s",&daftar[j].noktp);
		printf("\nNomor HP\t : %s",&daftar[j].nohp);
		printf("\nKecamatan\t : %s\n",&daftar[j].kecamatan);
	}
	
return 0;	
} 

