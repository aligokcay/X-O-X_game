#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// XOX oyunu 

char matris [3][3] = {'1','2','3','4','5','6','7','8','9'};

void matrisYazdir(){
	int i,j;
	printf("\n");
	for(i=0; i<3; i++){
		printf("\n\t");
		for( j=0; j<3; j++){
			printf("%c\t",matris[i][j]);
		}
		printf("\n\n"); 
		
	}
}

void xGiris(int sayi){
	char *pointer = matris;
	
	if(sayi > 0 && sayi < 10){
		if (*(pointer + sayi -1) == 88 || *(pointer + sayi -1) == 79){
			printf("Lutfen bos olan bir yer seciniz:");
			scanf("%d", &sayi);
			*(pointer + sayi -1) = 'X' ;
		}else{
		*(pointer + sayi -1) = 'X' ;
		}
	}else{
			printf("Lutfen gecerli bir deger seciniz:");
			scanf("%d", &sayi);
			*(pointer + sayi -1) = 'X' ;
	}
}

int sayiUret(int zorlukSeviyesi){
	
	char *pointer = matris;
	
	int sayi;
	
	if(zorlukSeviyesi == 1){
		sayi = 1 + rand() %9;  //Örneðin, rand() iþlemi 0 ile 32767 (genellikle) arasýnda rastgele bir tamsayý üretir. Eðer bu iþlem sonucunu 9'a bölerseniz, kalan deðer 0 ile 8 arasýnda bir deðer olacaktýr.	
		int sonuc = 0;
		
		while( sonuc != 1){
			if( *(pointer + sayi - 1) == 88 || *(pointer + sayi - 1) == 79) {  // 88 = 'X', 79 = 'O'
				sayi++;
				if(sayi==10){
					sayi = 1;
				}
			}else
				sonuc = 1;
		}
	}else{
	if(*(pointer+0) == 88 && *(pointer+1) == 88){
		sayi = 3;
	}else if(*(pointer+0) == 88 && *(pointer+2) == 88){
		sayi = 2;
	}else if(*(pointer+1) == 88 && *(pointer+2) == 88){
		sayi = 1;
	}else if(*(pointer+3) == 88 && *(pointer+4) == 88){
		sayi =6;
	}else if(*(pointer+3) == 88 && *(pointer+5) == 88){
		sayi =5;
	}else if(*(pointer+4) == 88 && *(pointer+5) == 88){
		sayi =4;
	}else if(*(pointer+6) == 88 && *(pointer+7) == 88){
		sayi =9;
	}else if(*(pointer+6) == 88 && *(pointer+8) == 88){
		sayi =8;
	}else if(*(pointer+7) == 88 && *(pointer+8) == 88){
		sayi =7;
	}else if(*(pointer+2) == 88 && *(pointer+4) == 88){
		sayi =7;
	}else if(*(pointer+2) == 88 && *(pointer+6) == 88){
		sayi =5;
	}else if(*(pointer+4) == 88 && *(pointer+6) == 88){
		sayi =3;
	}else if(*(pointer+0) == 88 && *(pointer+4) == 88){
		sayi =9;
	}else if(*(pointer+0) == 88 && *(pointer+8) == 88){
		sayi =5;
	}else if(*(pointer+4) == 88 && *(pointer+8) == 88){
		sayi =1;
	}else if(*(pointer+0) == 88 && *(pointer+3) == 88){
		sayi =7;
	}else if(*(pointer+3) == 88 && *(pointer+6) == 88){
		sayi =1;
	}else if(*(pointer+0) == 88 && *(pointer+6) == 88){
		sayi =4;
	}else if(*(pointer+1) == 88 && *(pointer+4) == 88){
		sayi =8;
	}else if(*(pointer+1) == 88 && *(pointer+7) == 88){
		sayi =5;
	}else if(*(pointer+4) == 88 && *(pointer+7) == 88){
		sayi =2;
	}else if(*(pointer+5) == 88 && *(pointer+8) == 88){
		sayi =3;
	}else if(*(pointer+2) == 88 && *(pointer+8) == 88){
		sayi =6;
	}else if(*(pointer+2) == 88 && *(pointer+5) == 88){
		sayi =9;
	}else{
		sayi = 1 + rand() %9;  //Örneðin, rand() iþlemi 0 ile 32767 (genellikle) arasýnda rastgele bir tamsayý üretir. Eðer bu iþlem sonucunu 9'a bölerseniz, kalan deðer 0 ile 8 arasýnda bir deðer olacaktýr.
	}
		
	int sonuc = 0;
	
	while( sonuc != 1){
		if( *(pointer + sayi - 1) == 88 || *(pointer + sayi - 1) == 79) {  // 88 = 'X', 79 = 'O'
			sayi++;
			if(sayi==10){
				sayi = 1;
			}
		}else
			sonuc = 1;
	}	
	}
	
	return sayi;
}

void oGiris(int sayi){
	char *pointer = matris;
	
	*(pointer + sayi -1) = 'O' ;
	
}

int xKontrol(){
	char *pointer = matris;
	
	if(*(pointer+0) == 88 && *(pointer+1) == 88 && *(pointer+2) == 88){
		return 1;
	}else if(*(pointer+3) == 88 && *(pointer+4) == 88  && *(pointer+5) == 88){
		return 1;
	}else if(*(pointer+6) == 88 && *(pointer+7) == 88  && *(pointer+8) == 88){
		return 1;
	}else if(*(pointer+0) == 88 && *(pointer+4) == 88  && *(pointer+8) == 88){
		return 1;
	}else if(*(pointer+2) == 88 && *(pointer+4) == 88  && *(pointer+6) == 88){
		return 1;
	}else if(*(pointer+0) == 88 && *(pointer+3) == 88  && *(pointer+6) == 88){
		return 1;
	}else if(*(pointer+1) == 88 && *(pointer+4) == 88  && *(pointer+7) == 88){
		return 1;
	}else if(*(pointer+2) == 88 && *(pointer+5) == 88  && *(pointer+8) == 88){
		return 1;
	}else{
		return 0;
	}
}

int oKontrol(){
	char *pointer = matris;
	if(*(pointer+0) == 79 && *(pointer+1) == 79  && *(pointer+2) == 79){
		return 2;
	}else if(*(pointer+3) == 79 && *(pointer+4) == 79  && *(pointer+5) == 79){
		return 2;
	}else if(*(pointer+6) == 79 && *(pointer+7) == 79  && *(pointer+8) == 79){
		return 2;
	}else if(*(pointer+0) == 79 && *(pointer+4) == 79  && *(pointer+8) == 79){
		return 2;
	}else if(*(pointer+2) == 79 && *(pointer+4) == 79  && *(pointer+6) == 79){
		return 2;
	}else if(*(pointer+0) == 79 && *(pointer+3) == 79  && *(pointer+6) == 79){
		return 2;
	}else if(*(pointer+1) == 79 && *(pointer+4) == 79  && *(pointer+7) == 79){
		return 2;
	}else if(*(pointer+2) == 79 && *(pointer+5) == 79  && *(pointer+8) == 79){
		return 2;
	}else{
		return 0;
	}
}


int main(){
	srand(time(0));
	int sayi, sonuc = 0;
	int adet =1;
	
	int zorlukSeviyesi;
    printf("Zorluk Seviyesini Secin (1: Kolay, 2: Zor): ");
    scanf("%d", &zorlukSeviyesi);
	
	matrisYazdir();
	
	while ( adet != 5 ){
		adet++;
		printf("X isaretinin konulacagi kutu : ");
		scanf("%d", &sayi);
		xGiris(sayi);
		matrisYazdir();
		sonuc = xKontrol();
		if(sonuc == 1){
			printf("KAZANDINIZ");
			printf("\nTebrikler...");
			break;
		}
		
		printf("O isaretinin konulacagi kutu : ");
		sayi = sayiUret(zorlukSeviyesi);
		printf("%d", sayi);
		oGiris(sayi);
		matrisYazdir();	
		sonuc = oKontrol();
		if(sonuc == 2){
			printf("BILGISAYAR KAZANDI");
			printf("\nTekrar deneyiniz...");
			break;
		}
		if( adet == 5 ){
			printf("BERABABERE");
			break;
		}
	}
	
	return 0;
}
