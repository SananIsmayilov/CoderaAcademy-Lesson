#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//---- Riyazi funksiyalar
	// Elave edilmeli olan kitabxana "math.h" 
	
	// sqrt() - daxilinde 1 parametr - kvadrat kok hesablamaq ucundur
	
	// pow (,) - 2 parametr daxil edilir - verilen ededi quvvete yukseltmek ucun istifade olunur
	
	// abs() - 1 parametr daxil edilir - modul funksiyadir
	
	// max(,) 2 parametr daxil edilir - maksimum elementi tapmaq ucun istifade olunur 
	
	// min(,) 2 parametr daxil edilir - minimum elementi tapmaq ucun istifade olunur 
	
    //	---- Numuneler
    
    // sqrt()
    double sq = sqrt(45);
    cout<<sq;
    
    cout<<endl;
    
    // pow()
	int pw = pow(2,5); // 2 ustu 5
	cout<<pw;
	
	cout<<endl;
	
	// abs()
	int ab = abs(-3);
	cout<<ab;
	
	cout<<endl;	
	
	// max() and min()
	int mx = max(3,6);
	cout<<mx;
	
	cout<<endl;
	
	int mn = min(3,6);
	cout<<mn;
	
	cout<<endl;
	
	// 3 ve daha cox ededin maksimum veya minimumunun tapilmasi
	int mx3 = max(2,max(5,14)); // 3 deyisenin maksimumu
	cout<<mx3;
	
	cout<<endl;
	
	int mn4 = min(2,min(54,min(34,20))); // 4 deyisenin minimumu
	cout<<mn4;
	
	
	
	
	return 0;
}
