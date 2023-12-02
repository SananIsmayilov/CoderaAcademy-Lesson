#include<iostream>
using namespace std;
/* Funksiyalar
Funksiyalar esas funksiyadan kenarda yaradilan mueyyen alqoritmi veya tapsirigi yerine yetirmek ucun istifade olunan hisselerdir.Funksiyalar sayesinde kod daxilinde cox sayda tekrarlanan
 emeliyyati 1 defe funksiya seklinde yaradib sonra istenilen defe hemen funksiyani cagiraraq bu emeliyyati etmek mumkundur.

-- Funksiyalarin novleri : 
- Void - geri deyer qaytarmayan funksiyadir. Mueyyen emeliyyatlari yerine yetirir lakin funksiya cagirildiqda hec bir deyeri olmur.Sadece daxiline yazilmis kodlari yerine yetirir.
 - Umumi sintaksisi
 void funksiya_adi() {
 calisacaq kodlar.
}


-- Return - geri deyer qaytaran , deyisenler kimi deyeri olan funksiyalardir.
Bu tip funksiyalar esas metod daxilinde cagirildiqda mueyyen bir deyere malik olur ve bu deyer uzerinde emeliyyatlar aparmaq mumkun olur.
 - Umumi sintaksisi
 geri qaytarilacaq tip funksiya_adi() {
 calisacaq kodlar.
 return deyer; -- bu funksiyanin aldigi yekun deyer
}

Funksiya novunden asili olmayaraq , eger funksiyanin calismasi ucun hansisa deyerler lazim olarsa bu deyerler kenardan gonderile biler , bu zaman hemen deyerler tipi gosterilmekle funksiyanin adindan sonra olan 
() - daxilinde gonderilir ve funksiya daxilinde istifade olunur. Bu deyerler funksiyanun parametrleri adlanir.
Numune -

void fun1(int n , string s){
for(int i =1;i<=n;i++){
cout<<s<<endl;
}}

 * yuxaridaki funksiya esas metod(main) daxilinde cagirilarsa parametr olaraq gonderilen n ededi qeder , parametr olaraq gonderilen s metnini cap edecekdir.

-- Rekursiya 
Funksiya daxilinde eyni adli funksiyani cagirmaq mumkundur.
Rekursiv funksiyalardada funksiya daxilinde mueyyen sertlerden asili olaraq eyni adli funksiyani cagirmaq mumkundur.

-- Numune 
n faktoriali hesablayan rekursiv funksiya 
artiq yekunda n faktroial geri qaytarilmalidir deye return tipinden istifade olunur.

int faktorial(int n){
if(n == 1){
return 1; // 1 faktorial 1e beraberdir deye geri 1 qaytarir.
}else {
 return n* faktorial(n-1);
}
}

-- Izahi 
faktorial funksiyasini cagirib parametrini ise 4 gonderdiyimizi zenn edek

ilk once funksiya dxilinde if bloku yoxlanacaq ve n == 1 serti odenmediyi ucun else bloku calisacaq ve bu defede n * faktorial(n-1) calisacaq eynile bu zamanda eyni emeliyyatlar faktorial(n-1) ucun calisacaq.
Ve asagidaki qiymetler alinacaq  :
n= 4 hali ucun  : 

faktorial(4) = 4 * faktorial(3); (n * faktorial(n-1)) // artiq faktoial(3) hesablanacaq
faktorial(3) = 3*faktorial(2); // eynile bu defe faktorial funksiyasinin 2 ucun olan hali hesablanir
faktorial(2) = 2*faktorial(1) 
faktorial(1) = 1; // cunki funksiya daxilinde if blokunda her defe n yoxlanir eger n== 1 olarsa geri deyer 1 qaytarilir.

daha sonra funksiya geri dogru calisir : 
artiq faktorial(1) = 1 oldugu ucun ,
faktorial(2) = 2*1; // =2
faktorial(3) = 3 * 2; // =6
faktorial(4) = 4 * 6; // = 24
olacaqdir . Ve ilk basdan n =4 oldugu ucun yekunda 24 hali geri qaytarilacaqdir.


*/

double cem (double a,double b){
	return a+b;
}

void capet(int n){
	for(int i = n;i>=1;i--){
		cout<<i<<" ";
	}
}


int fibonacci(int n){
	// her hansi bir heddi bilmek ucun ondan evvelki 2 heddi bilmek lazimdir deye ilk 2 heddin qiymetini if bloklari ile geri qaytarilmalidir.
	if(n == 1){
		return 1;
	}else if(n == 2){
		return 1;
	}else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
}



int main(){
	
//Numuneler 
cout<<"---1 -----\n";
//1) 2 double tipli ededin cemini geri qaytaran funksiya  
//  yuxarida eyni adli cem funksiyasi yaradilmisdir.
double result = cem(2.0,3.5);
cout<<result<<endl;

//2) parametr olaraq gonderilen n ededinden 1e qeder olan edeleri cap eden proqram.
// Bu numunede kod daxilinde basqa emeliyyat aparmadigimiz ucun void funksiyasindan istifade etmek mumkundur.

// bu funksiya yuxarida capet adli funksiya kimi yaradilmisdir.

cout<<"---2 -----\n";
int n;
cin>>n;
capet(n);
cout<<endl;

cout<<"---3 -----\n";
// 3) n-ci sirada dayanan Fibaonacci ededi rekursiv funksiya ile
// Fibonacci sirasi : 1 1 2 3 5 8 13 21 -- her bir hedd ozunden evvelki 2 heddin cemine beraberdir.
cin>>n;
int sira = fibonacci(n);
cout<<sira;


	
	
	
}
