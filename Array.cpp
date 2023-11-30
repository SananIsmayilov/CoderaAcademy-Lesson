#include<iostream>
using namespace std;
int main(){
	/*  Massivler (Array) - Evvelceden olcusu gosterilmis , indekse malik olan , ardicil duzulmus , eyni tipli deyerlerin toplusudur.
	---Qeyd :  Massivde nomreleme(indekslenme) 0-dan baslayir.
	
	---Umumi sintaksis
	1) evvelce massiv daxilinde yerlesecek elementlerin tipi gosterilir .
	2) daha sonra massivin adi 
	3) daha sonra ise massivin olcusu gosterilir
	 
	//Numune
	int a[100] ; -- tam tipde 100 elementden ibaret massiv yaradilir
	string s[5] ; -- metn tipde 5 elementden ibaret massiv ucun RAM-da yer yaradilir
	
  --Massivin elementlerinin elave edilmesi :
  1) Proqram daxilinde elave etme 
  int a[3] = {1,2,3};
  
  2)Klaviaturadan daxil etme 
    a) ilk once klaviaturadan massivin olcusu(meselen n) daxil edilmelidir.
    b)daha sonra for dovru n- defe davam etmelidir.Ve dovrun her bir qiymeti(uygun indeksi) ucun klaviaturadan massivin elementi daxil edilmelidir.
    
    
  --Qeyd : n olculu tam tipli elementlerden ibaret a massivine  asagidaki sekilde  element daxil etmek mumkundur: 
         
         a[0] = 3;
         a[1] = 4;
         a[2] = 7;
         a[n-1] = 34; // nomrelenme 0-dan basladigi ucun sonuncu indeks n-1 olacaqdir.
         
  
  
  --Massivin elementlerinin cap edilmesi
   1) her hansi indeksdeki elementi cap etmek ucun 
    cout<<a[2] ;
    
   2)Butun elementleri cap etmek ucun 
   -- n elementden ibaret a massivi ucun : 
   for(int i=0;i<n;i++){
   cout<<a[i]<<" ";}  
   */
   
   
   //Numuneler
   //1) n olculu massiv yaradib klaviaturadan elementleri daxil edin daha sonra ise ardicil sekilde cixisa verin
    cout<<"---- 1 -----\n";
   int n;//massivin olcusu
   cin>>n;
   
   int a[n];//n olculu massiv
   for(int i =0;i<n;i++){
   	cin>>a[i]; // i - ci indeksin klaviaturadan daxil edilmesi
   }
   
  
    for(int i =0;i<n;i++){
   	cout<<i <<" : -ci indeksdeki element : "<<a[i]<<endl; 
   }
   
   cout<<endl;
   
   
   // 2) proqram daxilinde elementleri verilmis  b massivinin musbet ve menfi elementlerinin sayini cixisa verin
   cout<<"---- 2 -----\n";
   int b[5] = {1,2,-4,-3,56};
   
   int musbet_sayi = 0, menfi_sayi = 0;
   
   for(int i=0;i<5;i++){
   	if(b[i]>0){
   		musbet_sayi++;
	   }
	   else if(b[i]<0){
	   	menfi_sayi++;
	   }
   }
   cout<<"b massivindeki musbet ededlerin sayi : "<<musbet_sayi<<endl;
   cout<<"b massivindeki menfi ededlerin sayi : "<<menfi_sayi<<endl;
   
   
   // 3)Massivin maksimum elementini tapan proqram
   
   cout<<"---- 3 -----\n";
   int c[5] = {2,5,2,6,9};
   
   int cmax = a[0]; // Butun elementler yoxlanacaq deye ilk once maksimum elementi alan deyisene baslangic deyer olaraq massivin herhansi bir elementini menimsedirik
   
   for(int i =0;i<5;i++){
   	if(c[i]>cmax){
   		cmax = c[i]; // eger her hansi indeksdeki element cmax elementinden boyuk olarsa , cmax deyiseni hemin elemente beraber olur ve bu ardicciliqla butun elementler yoxlanir
	   }
   }
   cout<<"Verilmis massivdeki maksimum element : "<<cmax;
      
   
   
	 
}
