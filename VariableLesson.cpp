#include<iostream>
using namespace std;

int main(){
	// ----  Deyisen yaratma yollari ----- 
	int a;
	int b,c,d;
	double f;
	bool bl;
	
	// ------ Deyisene deyer verme ----
	
	int a = 3;
	
	int k;
	k=5;
	
	bool b= true;
	
	bool d;
	d= true;
	
	// ------ Giris , Cixis operatorlari
	int n;
	cin>>n; // giris operatorudur , istifadeciden deyer almaq ucun istifade olunur
	double k;
	cin>>k;
	
	// cixis operatoru
	cout<<"Hello world"; // Metn tipli deyerler dirnaq isaresi daxilinde yazilmalidir
	cout<<d; // Dirnaqsiz yazilan her bir ifade deyisen kimi goturulur
	cout<<3+5; // riyazi hesablamalar bu sekilde yazila biler veya
	int f = 3+5;
	cout<<f; // yeni deyisen yaradib hesablama apara bilerik
	
	// ------ Operatorlar 
	
	int k = 3;
	
	k++; // 1 vahid artirmaq ucun istifade olunur
	k--; // 1 vahid azaltmaq ucun istifade olunur
	k = k+2;//  2 vahid artirmaq ucun istifade olunur 
	k = k-3;//  3 vahid azaltmaq ucun istifade olunur 
	k/2,k*2 // bolme , vurma 
	k%3; // % - mod (k ededinin 3e bolunmesinden alinan qaliq)
	
	k>=3; // boyukdur beraberdir
	k<=3; // kicikdir beraberdir
	
	k!= 3 // ferqlidir (beraberliyin eksi)
	
	// ----- Qeyd -----
	k==3; //beraberliyin yoxlanmasi
	k = 3; //menimsetme(k-ya qiymet verme)	
	
	
	
}
