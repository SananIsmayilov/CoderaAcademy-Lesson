#include<iostream>
using namespace std;
int main(){
	/* Sert bloklari - if else if else operatorlari
	if() - eger
	else if , else - eks halda
	 ---- kodda if blokunun sayi qeder netice qaytarilir :  meselen , main metodu daxilinde 1 eded if bloku ve istenilen sayada else if bloku varsa 
	 sert odenen  halda maksimum 1 netice dogru ola biler yeni ya if veya else if blokunun 1i daxilindeki kidlar calisacaq
	---- kodda if blokunun sayi cox olarsa ve eger butun if bloklari dogru olarsa  if bloklarinin sayi qeder netice dogru olacaq
	----Netice : n sayda if bloku olarsa maksimum say n qeder if serti veya else if bloku daxilindeki kod calisacaq
	***Qeyd : Ic - ice if blokuna aid deyil

    
    
    // Sert bloklari umumi sintaksis
	if(sert1) {//mutleq 1ci if bloku olmalidir , daha sonra istenilen sayda else if en sonda ise else bloku
	// if daxilindeki sert dogru olduqda calisacaq blok	
	} 
	else if(sert2){
		// if dogru olmadigi halda calisacaq hisse
	}
	else {
		// yuxaridaki sert bloklari dogru olmadigi ve qalan her hansi 1 sert odendiyi halda calisacaq blok
	} */
	
	//Numune 
	// ededin musbet halinda neticeye >0 kicik halinda <0 eks halda =0 veren proqram
	int n;
	n = -3;
	if(n>0){ // musbet olan hal
		cout<<">0";
	}else if(n<0){ // menfi olan hal
		cout<<"<0";
	}else {// qalan butun hallar (0 -a beraber olan hal)
		cout<<"=0";
	}
	cout<<endl;
	
	
	// Ic ice if()
	// Daxil edilen eded musbet ve cut olarsa neticeye 1 , tek ve menfi olarsa neticeye 0 cap eden program
	int m;
	m= 45;
	if(m>0){
		if(m%2==0){
			cout<<1;
		}
		else {
		cout<<"Sert odenmir";
	}
	}else if(m<0){
		if(m%2!=0){
			cout<<0;
		}
		else {
		cout<<"Sert odenmir";
	}
	}
	cout<<endl;
	
	
	/* ----- Switch - case 
	If operatoruna  nezeren daha mehdud serhedli sertleri switch - case ile yazmaq mumkundur
	Ilk once yoxlanilacaq deyisen daha sonra ise mumkun hallar yazilir
	
	----Umumi sintaksis
	switch(yoxlanilacaq_ deyisen){
	case hal_1 : {
	// 1ci hal dogru oldugu alda calisacaq hisse
	break;
    }
    	case hal_2 : {
	// 2ci hal dogru oldugu alda calisacaq hisse
	break;
    }	case hal_3 : {
	// 3ci hal dogru oldugu alda calisacaq hisse
	break;
    }
    
default : {
// yuxaridakilarin dogru olmadigi halda calisacaq kod
}*/

//Numune 
// daxil edilen a ededinin b ededine tam bolunmesini yoxlayan proqram  , bolunerse 1 eks halda 0 

int a = 25,b=5;
int c = a%b;
switch(c){
	case 0 : {
		cout<<1;
		break;
	} 
	default :{
		cout<<0;
	}
}


	
	
}
