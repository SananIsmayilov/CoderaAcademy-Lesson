#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib> //random ededler ucun 
using namespace std;
int main(){
	/*
	1olculu ve 2 olculu massivler her biri evvelceden olcusu gosterilecek tiplerdir.
	Amma bezi data tipler vardir ki , bunlar evvelceden olcu gosterilmekle deyil ,  elementi sona elave etmekle calisir.
	Bu tiplerden biride c++ dilinde istifade olunan vectorlardir.Vectorlarda elementler sona eleve edilmekle calisir.
	Vectorlar massiv novleri kimi indeksli calisir ve nomreleme 0dan baslayir.
	
	--- vector yaradilmasi ----
	#include<vector> - lazim olan kitabxana
	
	vector<data_type> vector_name; -- data_type - vector daxilindeki elementlerin tipleridir.
	 Vectora element elave etmek ucun 2 yol vardir : 
	 1) push_back()
	 
	 2)vector<data_type> vector_name = {elements}; elements - vergulle ayrilan elementler toplusudur.
	
	--- vector uzerinde emeller --- 
	
	1) sona element elave etmek
	vector_name.push_back(element); element yazilan hissede vectorun daxilindeki data tipine uygun elementler elave edilir.
	
	2) son elementi silmek
	vector_name.pop_back();
	
	3)gosterilen indekse element elave etmek
	vector_name.insert(indeks,element); indeks - elave edilecek indeksi gosterir ve element elave edilerse diger elementler saga surusur , element indekse elave edilen element
	
	4)butun elementleri silmek
	vector_name.clear(); vectorun daxilindeki butun elementleri silir
	
	5)indeksdeki elementi silme
	vector_name.erase(indeks); 
	
	*/
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	// vectorun indekse uygun elementini cixisa verme
	cout<<v.at(2)<<endl;
	
	//vectorun bos olub olmamasini yoxlama
	if(v.empty()){
		cout<<"Vector is empty";
	}else{
		cout<<"Vector is not empty";
	}
	cout<<"\n";
	
	// vectorun olcusunu alma
	int size = v.size();
	cout<<"Size : "<<size<<endl;
	
	// butun elementleri cixisa verme
	for(int i=0;i<size;i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	// vectorun son elementi silme
	cout<<"Silinmezden evvel : \n";
		for(int i=0;i<size;i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	v.pop_back();
	
	cout<<"Silinenden sonra : \n";
		for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	// ilk elementi cixisa verme
	cout<<"First element : "<<v.front()<<endl;
	
	// son elementi cixisa verme
	cout<<"End element : "<<v.back()<<endl;
	
	// vectorlarda siralama alqoritmi
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	
	//numune
	//vectora n eded 0 -99 arasi random eded eleave edib ededi ortasini tapin
	vector<double> mv;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int rnd = rand() %100; // 0 - 99 arasi random eded
		mv.push_back(rnd);
	}
	
	double cem = 0;
	cout<<"mv vector elements : \n";
	for(int i =0;i<n;i++){
		cout<<mv.at(i)<<" ";
		cem += mv.at(i);
	}
	
	cout<<endl<<(double)cem/mv.size();
	
	mv.clear();
	
	
	
	
		
	
}
