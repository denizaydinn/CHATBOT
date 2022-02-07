#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "class.h"
using namespace std;





void giris_bilgileri()
{
    int id,sifre;
    cout<<"- (integer degerdir) Kullanici ID : "<<endl;
	cin>>id;
	cout<<"- Sifre : "<<endl;
	cin>>sifre;
	
    string ay;
    cout<<"- Hangi ay istiyorsun?:  "<<endl;
	cin>>ay;
}




void  izin_islemleri(){
	
	int izin;
	cout<<"\n 1)Yillik Izni 2)Dogum Izni 3)Hastalik- Istirahat Izni 4)Evlilik Izni 5)Cenaze Izni 6)Babalik Izni "<<endl;
	cout << "HANGI IZIN ISTEDIGINIZI SECINIZ : "<<endl;;
	cin>>izin;
	
	switch(izin)
	{ 
	
	    case 1:
	   	cout<<	"(    Yillik izin en fazla 14 gun tanimlanabilir.    )"<<endl;
	    	
	   giris_bilgileri(); 
	   int basla,bit,hesap;
	   
	  cout<<"- Ayin kacinda baslasin?:  "<<endl;
	  cin>>basla;  
	  cout<<"- Ayin kacinda bitsin?:  "<<endl;
	  cin>>bit;
	 hesap=bit-basla;
	  
	 while(hesap>14) {
	     
		cout<<"Yillik izin en fazla 14 gunluk tanimlanabilir.Gun sayisini tekrar girer misin lutfen :) "<<endl;
	    cout<<"Ayin kacinda baslasin?:  "<<endl;
	    cin>>basla;
	    cout<<"Ayin kacinda bitsin?:  "<<endl;
	    cin>>bit;
	    hesap=bit-basla;
	 }   
	 
	 cout<<"Tamamdir! "<< hesap<<" gunluk "<<" izin islemini sirket sistemine aktardim. Tatilinde iyi eglenceler ! Kendini ozletme lutfen :)"<<endl;
	 
	 break;
	
	 
	 
	 case 2:
	 	
	cout<<	"(    Dogum izini, 16 hafta'dir.    )"<<endl;
    giris_bilgileri(); 
	int bas; 
	
	cout<<"- Ayin kacinda baslasin?:  "<<endl;
	cin>>bas;
	
	cout<<"Tamamdir!  16 haftalik dogum izin islemini sirket sistemine aktardim. Bebeginle guzel gunler dilerim! "<<endl;
	cout<<" 3 ay 22 gun sonra gorusmek uzere "<<endl;  
	break;
	
	 
	 case 3:
	 	cout<<"    (Hastalik/Istirahat Izni 10 gundur. )    "<<endl;
		giris_bilgileri();
	
	int start,finish,top;
	
	  cout<<"- Izin ayin kacinda baslasin?:  "<<endl;
	  cin>>start;
	  cout<<"- Izin ayin kacinda bitsin?:  "<<endl;
	  cin>>finish;
	
	 top=finish-start;
	 
	 while(top>10) {
	      cout<<"Hastalik/Istirahat izni en fazla 10 gunluk tanimlanabilir.Gun sayisini tekrar girer misin lufen= "<<endl;
	     cout<<"Ayin kacinda baslasin?:  "<<endl;
	     cin>>start;
	    cout<<"Ayin kacinda bitsin?:  "<<endl;
	    cin>>finish;
	    top=finish-start;
	    
	 }   
	  cout<<"Tamamdir! "<< top <<" gunluk "<<" izin islemini sirket sistemine aktardim. Cok gecmis olsun. Kendine dikkat et lutfen :)"<<endl;
	 break;
	 
	 case 4:
	 	
	cout<<"    (Evlilik Izni 3 gundur. )    "<<endl;
	giris_bilgileri();
	
	int x,y,aralik;
	cout<<"Baslama tarihi : "<<endl;
	cin>>x;
	cout<<"Bitme tarihi : "<<endl;
	cin>>y;
	aralik=y-x;
	
	while(aralik>3) {
	cout<<"Evlilik izni  en fazla 3 gunluk tanimlanabilir.Gun sayisini tekrar girer misin lutfen :) = "<<endl;
    cout<<"Ayin kacinda baslasin?:  "<<endl;
	cin>>x;
	cout<<"Ayin kacinda bitsin?:  "<<endl;
	cin>>y;
	aralik=y-x;
 }   
	cout<<"Evlilik iznini sirket sistemine tanimladim . Hayatta mutluluklar dilerim :)"<<endl;
 
	 break;
	 
	 
	 case 5:
	cout<<"    (Cenaze Izni 3 gundur. )    "<<endl;
	giris_bilgileri();
	
	int kac;
	
	cout<<"Iznini ayin kacinda baslatmami istersin ? : "<<endl;
	cin>>kac;
	cout<<"Ayin "<<kac<< " nda baslayacak "<<"iznini sisteme aktardim. Umarim kendini iyi hissediyorsundur.HE-RU her zaman yaninda! "<<endl;
	break;
	 
	 
	case 6:
	cout<<"    (Babalik Izni 5 gundur. )    "<<endl;
	giris_bilgileri();
	int a;
	
	cout<<"Babalik izni icin baslangic gununu girer misin? : "<<endl;
	cin>>a;
	
	cout<<"Ayin "<<a<< " nda baslayacak "<<"iznini sisteme aktardim. Bebeginle keyif dolu anlar diliyorum. Gorusuruz !  "<<endl;
	break;
	 
	default:
    cout<<"	Uzgunum. Gecerli numara girmedigin icin sana yardimci olamiyorum ."<<endl;
	 }

	
}



void calisma_belgesi(){
	


	
	ofstream myfile;
	
	int tcno,dogum_tarihi;
	int giris_tarihi,cikis_tarihi;
	string ad,soyad,dogum_yeri,bolum;
	

	
	cout<<"     --- CALISMA BELGESI YAZDIRMA ---     "<<endl;
	
	
	
	cout<<"TC KIMLIK NUMARASI : "<<endl;
	cin>>tcno;
	
	cout<<"ADI: "<<endl;
	cin>>ad;
	cout<<"SOYADI: "<<endl;
	cin>>soyad;
	
	cout<<"DOGUM YERI : "<<endl;
	cin>>dogum_yeri;
	
	cout<<"DOGUM TARIHI : "<<endl;
	cin>>dogum_tarihi;
	
	cout<<"ISE GIRIS TARIHI : "<<endl;
	cin>>giris_tarihi;
	
	cout<<"ISTEN CIKIS TARIHI : "<<endl;
	cin>>cikis_tarihi;
	
	cout<<"BOLUMU : "<<endl;
	cin>>bolum;
	
	
	cout<<"\n Yukarida acik kimligi yazili "<< ad  <<  soyad << "  isyerimizde "<< giris_tarihi << " -  "<< cikis_tarihi << "  tarihleri arasinda calismistir."<<endl;
	cout<<"\n Bu calisma belgesi 4857 sayili Is Kanunu'nun 28.Maddesi geregince duzenlenmistir."<<endl;
	
	cout<<"\n ISVEREN KURUM : LOTUS "<<endl;
	
		
	myfile.open("calisma_belgesi.txt");
	
	
	myfile<<"\n Yukarida acik kimligi yazili "<< ad  <<  soyad << "  isyerimizde "<< giris_tarihi << " -  "<< cikis_tarihi << "  tarihleri arasinda calismistir."<<endl;
	
	myfile<<"\n Bu calisma belgesi 4857 sayili Is Kanunu'nun 28.Maddesi geregince duzenlenmistir."<<endl;
	
	myfile<<"\n ISVEREN KURUM : LOTUS "<<endl;
	
	
	myfile.close();
	
	
	
	
}


void maas_islemleri()
{
	int maas;
	
	cout<<"1)Maas Bodrosu Bilgisi Almak Istiyorum 2)Maas Dilekcesi Yazmak Istiyorum"<<endl;
	
	
	cout<<"\n Yukarida bulunan maas islemlerinden hangisini yapmak istedigini secer misin lutfen? :) : "<<endl;
	cin>>maas;
	
	
	switch(maas)
	{
		case 1:
			cout<<"----  Maas Bodrosu detayli bilgi icin www.Lotus.com'daki yonergemize bakmani oneririm. Umarim yardimci olmusumdur :)'"<<endl;
			break;
		
		case 2:
			
			int telefon;
			string eposta;
			
			cout<<"Sizi hemen maas dilekcesi olusturma kismina yonlendiriyorum .....";
			
			cout<<"\n Tekrardan Hosgeldiniz! Dilekce icin sizin bilgilerinize ihtiyacim olacak :) ";
			
			cout<<"\n Telefon No : "<<endl;
			cin>>telefon;
			
			cout<<"\n E-posta Adresi : "<<endl;
			cin>>eposta;
			
			cout<<"Dilekce'nin kalan kismini olusturmak icin seni http://Lotus.IKDestek adresine yonlendiriyorum :)";
			break;
		
	
	}
	
	
}


void yuksek_lisans()
{
	
	int destek;
	cout<<"Sirketimizin Yuksek Lisans icin anlasmali oldugu okul ISTANBUL AYDIN UNIVERSITESI ' DIR . "<<endl;
	
	cout<<"\n Yuksek Lisans Destegi icin basvurmak ister misin ? 1)evet 2)hayir [ Seni anlayabilmem icin lutfen sayi gir  :) ] :  "<<endl;
	cin>>destek;
	
	if(destek==1)
	{
		
		cout<<"\n ISTANBUL AYDIN UNIVERSITESI'NDE YUKSEK LISANS EGITIMI GOREN IS ARKADASLARIMIZA %20 ORANINDA DESTEK SAGLAMAKTAYIZ. "<<endl;
		cout<<"Eger yuksek lisans sartlarini sagliyorsan www.Lotus/Basvuru_YuksekLisans.com adresinden basvurabilirsin."<<endl;
		
		
	}
	
	else{
		
		cout<<"Pekala . O zaman kendine iyi bak ! ";
	}
	
	

	
	
	
}




void terfi()
{
	int terfi;
	cout<<"--- Terfi Yonergesi icin www.Lotus/TerfiYonerge.com ' u ziyaret edip aklindaki soru isaretlerini giderebilirsin "<<endl;
	
	cout<<"\n --- Bunun yaninda istersen sana terfi sureci hakkinda etkili olan birkac onemli noktalari soyleyebilirim :)  "<<endl;
	cout<<"\n --- Istiyorsan 1'e , istemiyorsan 2'ye basmalisin :  "<<endl;
	cin>>terfi;
	
	if(terfi==1){
	
	
	cout<<"\n - 1)Performans : Isyerindeki performansiniz takip edilir.Rapor edilir ve analiz edilir.Bunun sonucunda performans yol haritasi cizilmis olur. "<<endl;
	cout<<"\n - 2)Hizmet Suresi : Calisan tarafindan gerceklestirilen is suresi belli bir kademede olmalidir. "<<endl;
	cout<<"\n - 3)Liyakat ve Yetenek : Terfinin degerini olcmek icin gerekli olan diger bir adimdir. "<<endl;
	cout<<"\n - 4)Egitimsel/Teknik Nitelikler : Terfi soz konusu oldugunda olcu ve karar verme aracidir. "<<endl;
	cout<<"\n - 5)Potansiyelin Degerlendirilmesi : Yeni bir pozisyon gerceklesmeden once bu adima da dikkat edilmektedir. "<<endl;
	cout<<"\n - 6)Egitim : Kisinin aldigi egitimler onun terfi surecine etki eden diger bir husustur. "<<endl;
	
	cout<<"\n -- Umarim sana yardimci olabilmisimdir. Aklinda sorular varsa ben her zaman burdayim :) " <<endl;
	
   }
   
   else
   {
   	
   	cout<<"\n --Guzel bir sohbetti ! Iyi Gunler !! "<<endl;
   	
   }

	
	
}


void istifa_sureci()
{
	int istifa;
	cout<<" ---- Istifa Sureci Hakkinda ----"<<endl;
	cout<<"\n -- Istifa sureci icin dogrudan IK ile konusman daha iyi olabilir. "<<endl;
	cout<<"\n -- Istersen senin icin Istifa Dilekcesi Talebi olusturabilirim. 1)Evet,olusturmak istiyorum. 2)Hayir,gerek yok sadece sordum."<<endl;
	cin>>istifa;
	
	if(istifa==1){
		
	int id;
	
	cout<<"\n Sirket Id : "<<endl;
	cin>>id;
		
	cout<<" -- Dilekce'yi olusturma talebini ilettim . Sirket sitesine girip kontrol edebilirsin. "<<endl;
	
		
		
	}
	
	else {
		
		cout<<"-- Tamamdir. Mutlu Gunler ! "<<endl;
	}




}


void uzaktan_calisma()
{
	int talep;
	
	cout<<"     --- Uzaktan Calisma Kayit --- "<<endl;
	
	cout<<"Senin icin uzaktan calisma talebi olusturmami ister misin ? \n1)Evet 2)Hayir:  "<<endl;
	cin>>talep;
	
	if(talep==1)
	{
		string sehir,ay;
		int baslangic,bitis,degisme,calisma,destek;
		
	cout<<"-- Hangi ay istiyorsun ? :  "<<endl;
	cin>>ay;
	
	
	cout<<"\n-- Sehir degistirmeyi dusunuyor musun ? 1)Evet 2)Hayir"<<endl;
	cin>>degisme;
	
	if(degisme==1)
	{
		cout<<"\nHangi sehirde calismayi dusundugunu soyler misin ? "<<endl;
		cin>>sehir;
		
		
	}
	
	else{
		
	}
	
	cout<<"\n -- Teknik destege ihtiyacin var mi ? 1)Evet 2)Hayir :  "<<endl;
	cin>>destek;
	
	if(destek==1)
	{
		cout<<"\n Tamam. Bu destek ihtiyacini not aldim :) "<<endl;
		
	}
	
	else{
		
	}
	
	
	cout<<"\n -- Peki ,   "<< ay << " ayinin kacinda baslasin ? : "<<endl;
	cin>>baslangic;
	
	cout<<"\n -- Pekala, kacinda bitsin? :  "<<endl;
	cin>>bitis;
	
	calisma=bitis-baslangic;
	
	cout<<"\n" << calisma << "  gunluk uzaktan calisma talebini sirkete aktariyorum. Sonucunu sana gelen mail ile ogrenebilirsin :) "<<endl;	
		
		
	}
	
	else {
			
		
	}
	
	
	
}

void servis_kayit()
{
	 ofstream dosyakayit;  
	
	
	string ad,soyad;
	int zaman,yaka;
	
	cout<<"     --- Servis Kayit ---     "<<endl;
	
	cout<<"\n-- Tekrardan merhaba, islem yapabilmem icin adini ve soyadini girebilir misin ? : "<<endl;
	
	cout<<"\n AD : "<<endl;
	cin>>ad;
	
	cout<<"\n SOYAD : "<<endl;
	cin>>soyad;
	
	cout<<"\n -- Hangi Istanbul yakasinda ikamet etmektesin ? 1) Avrupa 2) Anadolu : "<<endl;
	cin>>yaka;
	
	if(yaka==1){
	
	int onay;
	cout<<"\n -- Sabah vakti icin servis kalkis saatleri asagidaki kisimda bulunmaktadir ."<<endl;
	cout<<"\n AVRUPA YAKASI ICIN : 06:50 - 07.15 ARASI "<<endl;
	
	cout<<"\n -- Kayiti Onayliyor Musunuz ? 1) Evet 2) Hayir"<<endl;
	cin>>onay;
	
	switch(onay)
	{
	case 1 : 
	cout<<"\n SAYIN  "<< ad << soyad <<" Avrupa Yakasi icin kayitiniz olusturulmustur. Hoscakalin !  "<<endl; break;
		
	case 2: 
	cout<<"\n SAYIN  "<< ad << soyad <<" servis kayidiniz olusturulmadi . Iyi gunler "<<endl; break;
	
	default:
	cout<<"\n SAYIN  "<< ad << soyad <<" servis kayidiniz olusturulmadi . Iyi gunler "<<endl; break;
		
	}
	

	
	}
	
	
	else if (yaka==2){

	int onay;
	cout<<"\n -- Sabah vakti icin servis kalkis saatleri asagidaki kisimda bulunmaktadir ."<<endl;
	cout<<"\n ANADOLU YAKASI ICIN : 06:25 - 07.10 ARASI "<<endl;
	
	cout<<"\n -- Kayiti Onayliyor Musunuz ? 1) Evet 2) Hayir"<<endl;
	cin>>onay;
	
	switch(onay)
	{
	case 1 : 
	cout<<"\n SAYIN  "<< ad << soyad <<" Anadolu Yakasi icin kayitiniz olusturulmustur. Hoscakalin !  "<<endl; break;
		
	case 2: 
	cout<<"\n SAYIN  "<< ad << soyad <<" servis kayidiniz olusturulmadi . Iyi gunler "<<endl; break;
	
	default:
	cout<<"\n SAYIN  "<< ad << soyad <<" servis kayidiniz olusturulmadi . Iyi gunler "<<endl; break;
		
	}
				
	}


	else
	{
		cout<<"Uzgunum sana yardimci olamiyorum."<<endl;
		
	}
	
	dosyakayit.open("serviskayit.txt");
	dosyakayit<<"\n Yukarida belirtilen bilgilerle "<< ad  <<  soyad << "  isyerimizde "<< zaman << " diliminde olan servis sistemine kayit edilmistir."<<endl;
	dosyakayit.close(); 
	
}


void egitim_talebi()
{
	int egitim;
	string ad,soyad,bolum; 
	
	cout<<"\n -- Iste karsinda sirketimizin verdigi egitimler ! "<<endl;
	cout<<"\n 1) Kisisel Gelisim 2) Microsoft 3) Finansal Modelleme ve Analiz 4) Yazilim Gelistirme ( C++ , C# , Python) 5) Dijital Pazarlama 6) Ag ve Guvenlik"<<endl;
	cout<<"\n -- Hangi egitim icin talep olusturmak istiyorsun ? : "<<endl;
	cin>>egitim;
	
	cout<<"\n -- Adin nedir ?  : "<<endl;
	cin>>ad;
	cout<<"\n -- Soyadin nedir ?  : "<<endl;
	cin>>soyad;
	
	cout<<"\n -- Sisteme kayit girerken bolumun bana lazim olacak. Lutfen onu da belirtir misin ? : "<<endl;
	cin>>bolum;
	
	
	switch(egitim){
	case 1:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Kisisel Gelisim icin kaydiniz olusturuldu. Sirket sistemine kullanici id ile giris yaptiktan sonra egitimlerim kismina bakiniz. "<<endl;
	cout<<"\n --Kendine iyi bak ! :) " <<endl;
	break; 
		
	case 2:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Microsoft Office programlari icin kaydiniz olusturuldu. Sirket sistemindeki egitimlerim kismindan gerekli bilgilere ulasabilirsin."<<endl;
	cout<<"\n -- Iyi Calismalar :) "<<endl;
	break;
	
	case 3:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Finansal Modelleme ve Analiz icin kaydiniz olusturuldu. Sirket sistemindeki egitimlerim kismindan gerekli bilgilere ulasabilirsin."<<endl;
	cout<<"\n -- Iyi Calismalar :) "<<endl;
	break;
	
	
	case 4:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Yazilim Gelistirme ( C++ , C# , Python) icin kaydiniz olusturuldu. Sirket sistemindeki egitimlerim kismindan gerekli bilgilere ulasabilirsin."<<endl;
	cout<<"\n -- Iyi Calismalar :) "<<endl;
	break;
	
	case 5:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Dijital Pazarlama icin kaydiniz olusturuldu. Sirket sistemindeki egitimlerim kismindan gerekli bilgilere ulasabilirsin."<<endl;
	cout<<"\n -- Iyi Calismalar :) "<<endl;
	break;
	
	case 6:
	cout<<"\n -- Sayin ,  "<< ad << soyad << " Ag ve Guvenlik icin kaydiniz olusturuldu. Sirket sistemindeki egitimlerim kismindan gerekli bilgilere ulasabilirsin."<<endl;
	cout<<"\n -- Iyi Calismalar :) "<<endl;
	break;
	
	
	default:
	cout<<"Gecerli bir sayi girmedigin icin sana yardimci olamiyorum :( "<<endl;
	
	
		
		
	}
	
	
	
	
	
	
	
	
	
	
}

void kartvizit_talebi()
{
	int talep;
	cout<<"\n -- Tekrardan Merhaba !  Senin icin kartvizit olusturmami ister misin ? 1) Evet 2) Hayir:  "<<endl;
	cin>>talep;
	
	int telefon;
	string ad,soyad;
	string bolum;
	
	switch(talep)
	{
	case 1:
	
	
	cout<<"\n -- Kartvizit olusturmak icin bilgilerine ihtiyacim olacak. Lutfen sorularimi yanitlar misin :) "<<endl;
	
	cout<<"\n -- Adin ? :  "<<endl;
	cin>>ad;
	
	cout<<"\n -- Soyadin ? :  "<<endl;
	cin>>soyad;
	
	cout<<"\n -- Telefon numarani da girebilir misin ? :  "<<endl;
	cin>>telefon;
	
	cout<<"\n -- Sayin,  "<< ad << soyad << " son olarak bolumunu girersen islemi tamamlamis olacagim . "<<endl;
	cout<<"\n -- Bolum :  "<<endl;
	cin>>bolum;
	
	cout<<"\n -- Sayin,  "<< ad << soyad << "  kartvizitini 10 gun sonra IK bolumunden teslim alabilirsin ! "<<endl;
	

 		
	break;
		
	case 2:
		
	cout<<"\n -- Pekala, o zaman sana iyi gunler diliyorum !"<<endl;
	
	break;
		
	default:
	cout<<"\n -- Gecerli sayi girmedigin icin yardimci olamiyorum :( "<<endl;
		
		
		
	}
	
	
	
	
	
	
	
	
	
}








class program { 
   public:	

	void baslangic()
	{
	
	cout<<"\t MERHABA"<<setw(10)<<"BENIM"<<setw(8)<<"ADIM"<<setw(10)<<"RE-HU" <<setw(15)<<" CHATBOT ! "<<setw(10)<<endl;
    cout<<"\t                o "<<setw(18)<<endl;
    cout<<"\t   o "<<setw(18)<<endl;
	cout<<"\t    _______________ "<<endl;
	cout<<"\t   [   __     __   ]"<<endl;
	cout<<"\t   [   (@)   (@)   ]"<<endl;
    cout<<"\t   [   >  *   <    ]"<<endl;
    cout<<"\t   [   T______T    ]"<<endl;
	cout<<"\t   [_______________]"<<endl;
	
	
	
	string isim;
	cout<<"\n Merhaba ismin ne?"<<endl;
	cin>>isim;
	cout<<"Hosgeldin "<<isim<<" ! "<<endl;
	
	
	}
	

};

class baslangic :public program
{	 
}; 
  



















void now::tellUs()
{
	program obj;
    obj.baslangic() ;  

	
	
	
}





void now::tellUs2()
{
	int secim;
    cout<<" \n -----   YUKARDAKI ISLEMLERDEN BIRINI SECIP NUMARASINI YAZAR MISIN LUTFEN? ------  : "<<endl;
    cin>>secim;
    
      if(secim==1){                            
          izin_islemleri();
      }
    
    else if(secim==2)
    {
        calisma_belgesi();
    }
    
    
    else if(secim==3)
    {
        maas_islemleri();
    }
    
    
    else if(secim==4)
    {
        yuksek_lisans();
    }
    
    
    else if(secim==5)
    {
        terfi();
    }
    
    
    
    else if(secim==6)
    {
        istifa_sureci();
    }
    
    
    else if(secim==7)
    {
        uzaktan_calisma();
    }
    
    
    else if(secim==8)
    {
        servis_kayit();
    }
    
    
    else if(secim==9)
    {
       egitim_talebi();
    }
    
    
    else if(secim==10)
    {
        kartvizit_talebi();
    }
    
    
    
    
    else
    {
        cout<<"Gecersiz bir sayi girdin :) "<<endl;
    }
    

}
