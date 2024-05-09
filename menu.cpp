#include <iostream>
using namespace std;

int main () {
	
	float tel1=1500;
    float tel2=2750;
    float tel3=8832;
    float saat1=543.99;
    float saat2=1324.50;
    float saat3=850;
    float yaza=553.50;
    float yazb=848.20;
    float yazc=1433.33;
    float pcx=14600;
    float pcy=12964;
    float pcz=22920;
    float pcq=36123;
    
    float toplam=0;
	int adim;
	int secim,sorgu,sepet,urun;

    cout << "*********************--- ABC ELEKTRONIK ---*********************\n\n";
    cout << "-------------------------- Hosgeldiniz -------------------------\n\n";

    while(true)
	{
		cout << "****************************************************************\n";
		cout << "1- Urun ve fiyat sorgula\n";
        cout << "2- Sepete urun ekle\n";
        cout << "3- Siparis tamamla\n";
        cout << "4- Sonlandir\n";
        cout << "****************************************************************\n";
    
        cout << "Seciminiz: ";
        cin >>secim;
        cout << endl;
		
		while(secim==1)
		{
			cout << "****************************************************************\n";
            cout << "Hangi kategoriden urun sorgulamak istiyorsunuz?\n\n";
		    cout << "1- Akilli Telefon\n";
            cout << "2- Akilli Saat\n";
            cout << "3- Yazici\n";
            cout << "4- Bilgisayar\n";
            cout << "****************************************************************\n";

            cout << "Seciminiz: ";
            cin >>sorgu;
            cout << "\n****************************************************************\n";
            
            if(sorgu==1)
			{
				cout << "Akilli Telefon-1   1500 TL\nAkilli Telefon-2   2750 TL\nAkilli Telefon-3   8832 TL\n";
			}
			
			else if(sorgu==2)
			{
				cout << "Akilli Saat-1   543.99 TL\nAkilli Saat-2   1324.50 TL\nAkilli Saat-3   850 TL\n";
			}
			
			else if(sorgu==3)
			{
				cout << "Yazici A   553.50 TL\nYazici B   848.20 TL\nYazici C   1433.33 TL\n";
			}
			
			else if(sorgu==4)
			{
				cout << "Bilgisayar X   14600 TL\nBilgisayar Y   12964 TL\nBilgisayar Z   22920 TL\nBilgisayar Q   36123 TL\n";
			}
			
			else
			{
				cout << "\nHATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
				continue;
			}
			
			while(true)
				{
					cout << "****************************************************************\n";
                    cout << "1- Baska Urun Sorgula\n";
                    cout << "2- Ana Menuye Don\n";
                    cout << "****************************************************************\n";
                    cout << "Seciminiz: ";
                    cin >>adim;
                    cout << "\n";

					if(adim==1)
					{
						break;
					}
					
					else if(adim==2)
					{
						break;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				}
				
				if(adim==1)
				{
					continue;
				}
				
		break;
		}

        while(secim==2)
		{
			cout << "****************************************************************\n";
            cout << "Hangi kategoriden urun eklemek istiyorsunuz?\n\n";
		    cout << "1- Akilli Telefon\n";
            cout << "2- Akilli Saat\n";
            cout << "3- Yazici\n";
            cout << "4- Bilgisayar\n";
            cout << "****************************************************************\n";

            cout << "Seciminiz: ";
            cin >>sepet;
            cout << "\n";

			if(sepet==1)
			{
				while(true)
				{	
					cout << "****************************************************************\n";
                    cout << "Akilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n\n";
                    cout << "Akilli Telefon-1   1500 TL\nAkilli Telefon-2   2750 TL\nAkilli Telefon-3   8832 TL\n";
                    cout << "****************************************************************\n";

                    cout << "Seciminiz: ";
                    cin >>urun;
                    cout << "\n";
					
					if(urun==1)
					{
						toplam+=tel1;
					}
					
					else if(urun==2)
					{
						toplam+=tel2;
					}
					
					else if(urun==3)
					{
						toplam+=tel3;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				break;
				}
				
			}
			
			else if(sepet==2)
			{	
				while(true)
				{	
					cout << "****************************************************************\n";
                    cout << "Akilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n\n";
                    cout << "Akilli Saat-1   543.99 TL\nAkilli Saat-2   1324.50 TL\nAkilli Saat-3   850 TL\n";
                    cout << "****************************************************************\n";

                    cout << "Seciminiz: ";
                    cin >>urun;
                    cout <<"\n";
                    
                    if(urun==1)
					{
						toplam+=saat1;
					}
					
					else if(urun==2)
					{
						toplam+=saat2;
					}
					
					else if(urun==3)
					{
						toplam+=saat3;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				break;
				}
				
			}
			
			else if(sepet==3)
			{
				while(true)  // Model seçiminde hatalý giriþ yapýlýrsa seçenekleri tekrar göstermek üzere bu döngüye dönülür.
				{	
					cout << "****************************************************************\n";
                    cout << "Yazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n\n";
                    cout << "1-Yazici A   553.50 TL\n2-Yazici B   848.20 TL\n3-Yazici C   1433.33 TL\n";
                    cout << "****************************************************************\n";

                    cout << "Seciminiz: ";
                    cin >>urun;
                    cout <<"\n";
                    
                    if(urun==1)
					{
						toplam+=yaza;
					}
					
					else if(urun==2)
					{
						toplam+=yazb;
					}
					
					else if(urun==3)
					{
						toplam+=yazc;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				break;
				}
				
			}
			
			else if(sepet==4)
			{
				while(true)
				{	
					cout << "****************************************************************\n";
                    cout << "Bilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?\n\n";
                    cout << "1-Bilgisayar X   14600 TL\n2-Bilgisayar Y   12964 TL\n3-Bilgisayar Z   22920 TL\n4-Bilgisayar Q   36123 TL\n";
                    cout << "****************************************************************\n";

                    cout << "Seciminiz: ";
                    cin >>urun;
                    cout <<"\n";

					if(urun==1)
					{
						toplam+=pcx;
					}
					
					else if(urun==2)
					{
						toplam+=pcy;
					}
					
					else if(urun==3)
					{
						toplam+=pcz;
					}
					
					else if(urun==4)
					{
						toplam+=pcq;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				break;
				}
				
			}
			
			else
			{
				cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
				continue;
			}
			
			cout << "****************************************************************\n";
            cout << "Toplam Sepet Tutariniz: " << toplam << "\n\n";
			
			while(true)
			{
				cout << "****************************************************************\n";
                    cout << "1- Baska Urun Sorgula\n";
                    cout << "2- Ana Menuye Don\n";
                    cout << "****************************************************************\n";
                    cout << "Seciminiz: ";
                    cin >>adim;
                    cout << "\n";

					if(adim==1)
					{
						break;
					}
					
					else if(adim==2)
					{
						break;
					}
					
					else
					{
						cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
						continue;
					}
					
				}
				
				if(adim==1)
				{
					continue;
				}
				
		break;
		}

        while(secim==3)
		{
			int sayi;
			cout << "****************************************************************\n";
            cout << "Toplam Sepet Tutariniz: " << toplam << "\n\n";
            cout << "Ana Menuye Donmek Icin Herhangi Bir Sayiya Basabilirsiniz ";
            cin >> sayi;
            break;
		}

        while(secim==4)
		{
			cout << "****************************************************************\n";
            cout << "Iyi gunler dileriz... :)\n";
            cout << "Program sonlandiriliyor...\n";
            cout << "****************************************************************\n";
			
			return -1;
		}

        while(secim!=1 && secim!=2 && secim!=3 && secim!=4)
		{
			cout << "HATALI GIRIS\nGECERLI BIR DEGER GIRINIZ\n\n";
			break;
		}
    }
    return 0;
}
