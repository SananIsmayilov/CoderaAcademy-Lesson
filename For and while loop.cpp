#include <iostream>
using namespace std;
int main(){
	 /*
	 For and while
	 Dovru olaraq tekrarlanan ve yaxun sonsuz tekrarlanan kodlar ucun dovr operatorlarindan istifade olunur.
	 Bir nece dovr operatoru vardir : 
	 1 - For
	 2 - While
	 
	  ---- For
	  Komekci deyisen yaradilir dovrun baslama noqtesi bu deyisenin ilkin qiymeti olur , daha sonra gosterilen serte qeder , verilen qiymete uygun dovr davam edir
	  
	  --- Umumi sintaksis
	  for(st1 , st2 , st3){}
	  st1 - ilkin qiymet verilen deyisen , dovr basladiqda yalniz 1 defe baxilir(deyisen ilkin qiymeti 1 defe alir) .
	  st2 - sert hissesi , verilen serte uygun olaraq dovr davam edir 
	  st3 - deyisenin addim - addim qiymetinin deyisdiyi hisse (deyiseni toplayaraq , cixaraq vuraraq , bolerek artira(azalda ) bilersiniz) - dovr davam etdikce her addimda qiymet deyisilir
	  
	  -- numune sintaksis
	  for(int i = 0;i<5;i++){
	  cout<<i<<" ";
	  }  // i ilkin qiymet olaraq 0 qiymetini alir , daha sonra 0<5 (i<5) oldugu ucun dovr davam edir ve i- nin deyeri yeni 0 cap edilir , daha sonra st3 hissesi calisir ver i -nin qiymeti 1 artirilir
	       eyni qayda ile dovr davam edir , yekun qiymet ise 4 olur
	       
	       /// dovr ardicilligi
	      1 - ci addim :  i = 0(ilkin qiymet) , cout<<0  , i++( i = 1 // yeni qiymet)
	      2 - ci addim :   cout<<1 , i++ (i =2)
	      3 - ci addim :   cout<<2 , i++ (i=3)
          4 - ci addim :   cout<<3 , i++ (i=4)
           5 - ci addim :  cout<<3 , i++ ( i =5)
           Dovr 5<5(i<5) serti odenmediyi ucun bitmisdir.
	      
	  
	  -- kenarda deyisen yaratmaq mumkundur
	  for(;;)
	  
	  
	  --- While dovr operatoru 
	  Daxilindeki sert dogru oldugu muddetde davam eden dovr operatorudur.
	  
	  --- Umumi sintaksis
	  while(sert){
	  sertin dogru oldugu muddetde calisacaq blok
         }
         
	  	  
	  */
	  
	  // Numuneler
	  
	  //1-den n-e qeder olan ededlerin cemi : 
	  //while dovru ile
	  int n,i=1,cem=0;
	  cin>>n;
	  while(i<=n){
	  	cem += i;
	  	i++;
	  }
	  cout<<cem<<endl;
	  
	  //for dovru ile
	  
	  int m,cem1=0;
	  cin>>m;
	  for(int i =0;i<=m;i++){
	  	cem1+=i;
	  }
	  cout<<cem1<<endl;
	  
	  
	  // ededin reqemlerini ayirma
	  
	  int ed ;
	  cin>>ed;
	  while(ed>0){
	  	int k = ed%10;
	  	ed = ed/10;
	  	cout<<k<<" ";
	  }
	  cout<<endl;
	  
	  
	   // ededin reqemlerinin cemini  hesablayan proqram
	  
	  int ed1 ,edcem = 0;
	  cin>>ed1;
	  while(ed1>0){
	  	int k = ed1%10;
	  	ed1 = ed1/10;
	  	edcem += k;
	  }
	  cout<<edcem;
	 
	
	
	
	return 0;
}
