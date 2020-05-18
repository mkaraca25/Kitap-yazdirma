/*Melik KARACA 190757079 Bil.Müh.(Ý.Ö) C grubu 
Nesneye Yönelik Programlama BIM-104-50-50-C Bahar 2020
PROJESÝ 3 Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER*/

#include "Kitap.h" //Kitap Kütüphanem
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Turkish"); 
	Kitap kitap;
	std::string ad, yazar, tur, yayinevi, isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;

	std::cout << "Kitabýn adýný giriniz:" << std::endl;
	std::getline(cin,ad); //kullanýcý boþluk girdiðin de hata vermeme kodu
	std::cout << "Kitabýn yazarýný giriniz:" << std::endl;
	std::getline(cin,yazar);
	std::cout << "Kitabýn türünü giriniz:" << std::endl;
	std::getline(cin,tur);
	std::cout << "Kitabýn yayinevini giriniz:" << std::endl;
	std::getline(cin,yayinevi);
	std::cout << "Kitabýn IsbnNo giriniz:" << std::endl;
	std::getline(cin,isbnNo);
	std::cout << "Kitabýn sayfa sayýsýný giriniz:" << std::endl;
	std::cin >> sayfaSayisi;
	std::cout << "Kitabýn fiyatýný giriniz:" << std::endl;
	std::cin >> fiyat;
	std::cout << "Kitabýn baský yýlýný giriniz:" << std::endl;
	std::cin >> baskiYili;
	std::cout << "Kitabýn baský sayýsýný giriniz:" << std::endl;
	std::cin >> baskiSayisi;
	
	kitap.setAd(ad);
	kitap.setYazar(yazar);
	kitap.setTur(tur);
	kitap.setYayinevi(yayinevi);
	kitap.setisbnNo(isbnNo);
	kitap.setSayfaSayisi(sayfaSayisi);
	kitap.setFiyat(fiyat);
	kitap.setBaskiYili(baskiYili);
	kitap.setBaskiSayisi(baskiSayisi);

	std::cout << "kitabýn Adý = " << kitap.getAd() << " kitabýn yazarý = " << kitap.getYazar() << " kitabýn türü = " << kitap.getTur() << " kitabýn yayinevi = " << kitap.getYayinevi() << " kitabýn isbnNo = " << kitap.getisbnNo() << " kitabýn sayfa Sayýsý = " << kitap.getSayfaSayisi() << " kitabýn fiyatý = " << kitap.getFiyat() << " kitabýn baský yýlý = " << kitap.getBaskiYili() << " kitabýn baský sayýsý = " << kitap.getBaskiSayisi() << std::endl;
}

