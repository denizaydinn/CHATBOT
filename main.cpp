#include <iostream>
#include "class.h"
using namespace std;




class polymorphism {
public:

polymorphism();

};


 polymorphism::polymorphism()
{
    int secim;
    cout << "\n -- Beni degerlendirmek ister misin ? 1) Evet 2) Hayir: " << endl;
    cin>>secim;
    
    if(secim==1){
        int a;
        cout<<"\n -- Sana sagladigim hizmeti 1 - 5 arasinda degerlendirir misin ? :)  : "<<endl;
        cin>>a;
        switch(a)
        {
            case 1:
            cout<<"\n -- Pekala, kendimi gelistirmek icin cok calisacagim . Kendine iyi bak! :) "<<endl; break;
            case 2:
            cout<<"\n -- Degerli gorusun icin tesekkur ederim. Kendine iyi bak !  :) "<<endl; break;
            case 3:
            cout<<"\n -- Yapmak istedigin islemler icin ben her zaman burdayim ! Mutlu gunler diliyorum :)  "<<endl; break;
            case 4: 
            cout<< "\n -- Cok tesekkur ederim ! Musmutlu gunler diliyorum ! :) "<<endl; break;
            case 5:
            cout<<"\n -- Harika ! Degerli gorusun benim icin cok onemli. Musmutlu gunler diliyorum ! :) "<<endl; break;
            default: 
            cout<<"Beni bu kategoride gormedigin icin tesekkur ederim :) "<<endl;
            
        }
        
        
    }
    
    else{
        
        cout<<"Peki, iyi gunler ! "<<endl;
        
        
    }


}


 class sinif1 :public polymorphism
{   
    public:
	sinif1();
};


sinif1::sinif1()
{
 
}





int main()
{
		
	now obj;
	obj.tellUs();  /*cpp dosyasindaki ilk islemi cagirma*/
	    
    string devam;
	
	cout<<"- Sirket ici sorularin ve merak ettiklerin varsa sana yardim edebilirim :) "<<"\nBenimle devam etmek ister misin ?(ipucu : evet)"<<endl;
	cin>>devam;
	
	if(devam=="evet"){
	cout<<"- Iste karsinda sana yardimci olabilecegim konular:  \n\n1) Izin islemleri 2) Calisma Belgesi Olusturma 3) Maas Islemleri 4) Yuksek Lisans Destegi"<<
	" 5) Terfi Sureci 6) Istifa Sureci 7) Uzaktan Calisma Kayit 8) Servis Kayit  9) Yeni Egitim Talebi Olusturma 10) Kartvizit Talebi Olusturma "<<endl;
           
	now obj;   /*cpp dosyasindaki ikinci islemi cagirma*/
	obj.tellUs2();
	   
		
	}
	
	
	else
	{
		cout<<"Pekala. Kendine iyi bak o zaman :) "<<endl;
	}
	
	
	sinif1 s1; 



	
	return 0;
}
