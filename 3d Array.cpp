#include<iostream>
using namespace std;

int main(){

/* Ic-ice for 
setir sutun tipli kodlar ucun istifade olunur ilk once yazilan for setri daha sonraki ise sutun elementlerini bildirir.

Numune : 

for(int i =0;i<3;i++){
 // i -nin her bir qiymetinde daxildeki for (j) sona qeder davam edir
for(int j=0;j<3;j++){
cout<<"#";
}
cout<<endl;//her bir setr uzre emeliyyatlar bitdikden sonra novbeti setre kecmek ucun istifade olunur
}

--- Netice ---
###
###
###


--- Matris --- 
Setir ve sutunlardan ibaret indekslenmis eyni tipli melumatlar toplusudur.
Unvan gosterilerken ilk once setirin daha sonra ise sutunun nomresi gosterilir ve indekslenme 0-dan baslayir.

Matrislerin teyini : 

 1) Proqram daxilinde matrisin elementlerinin yazilmasi : 
 int a[][] = {{1,2,3},{2,2,3},{2,5,3}};
 // yuxaridaki kodlarda tam tipli a matrisi verilmisdir. bu matris daxilinde verilen {1,2,3} - 1ci setrin elementlerini , {2,2,3} - uygun olaraq 2ci setrin 0 1 2 ci indeksdeki sutun elementlerini , 
 {2,5,3} - ise 3cu setrin sutunlarini bildirir.
 
 2) Klaviaturadan daxil etme : 
 int n; // kvadrat matris ucun setir ve sutunlarin olcusu
 cin>>n;
 
 int a[n][n];//klaviaturadan element daxil edilerse , ilk once matrisi RAMda yaratmaliyiq , ve olcusu yazilmalidir.
 
 for(int i=0;i<n;i++){
 
 for(int j =0;j<n;j++){
 cin>>a[i][j];
}
 
}

Matrisin elementlerinin cixisa verilmesi : 
1) her hansi bir indeksde dayanan elementi cixisa vermek isteyirikse  :
meselen a matrisi ucun a[0][3] - u cixisa vermek :
cout<<a[0][3];

2) butun elementleri cixisa vermek : 
n*n olculu a matrisi ucun : 
for(int i =0;i<n;i++){
for(int j=0;j<n;j++){
cout<<a[i][j]<<" ";
}
cout<<endl;
}

*Qeyd - matrisin ilk yerde dayanan elementi a[0][0] en son yerde dayanan elementi ise a[n-1][n-1] - dir.


--- Matris uzerinde emeller
1) Bas dioqanalin tapilmasi : 

bas dioqanal elementleri setir ve sutunlarin bir-birine beraber olan indeksleridir.
tam  tipli n olculu kvadrat matris ucun : 
int n;
cin>>n;
int a[n][n];

 for(int i=0;i<n;i++){
 for(int j =0;j<n;j++){
 cin>>a[i][j];
}
}

for(int i=0;i<n;i++){
cout<<a[i][i]<<" "; // bas dioqanal elementlerinin capa verilmesi
}
 *Qeyd : Bas ve komekci dioqanal elementi anlayisi yalniz kvadrat matris ucun dogrudur.



2) Komekci dioqonalin tapilmasi : 
 Komekci dioqonal ucun asagidaki hal dogrudur : 
 j==n-i-1; -- bu hal dogru oldugda komekci dioqonal alinir. //j - sutun , i -setir , n ise olcunu bildirir.
 
 tam  tipli n olculu kvadrat matris ucun : 
int n;
cin>>n;
int a[n][n];

 for(int i=0;i<n;i++){
 for(int j =0;j<n;j++){
 cin>>a[i][j];
}
}

 for(int i=0;i<n;i++){
 for(int j =0;j<n;j++){
 if(j == n-i-1){
 cout<<a[i][j]<<" ";}
}
}
 

 */	
	
// Numune 
// Vurma cedvelini cap eden proqram :

 for(int i=1;i<=9;i++){
 	// i - nin her bir qiymetinde j sona qeder davam edir . Meselen i -nin 1 qiymetinde j 1 -den 10 - qeder davam edir.Daha sonra i-nin qiymeti deyisir . Yeni qiymet 2 olduqda yenide j 1 - den 10-a qeder qiymet alir. 
 for(int j =1;j<=10;j++){
 cout<<i<<" * "<<j<<" = "<<i*j<<endl;
}
cout<<endl;
}	
	
}
