

#include "Kitap.h" //Kitap Kütüphanem
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Turkish"); 
	Kitap kitap;
	std::string ad, yazar, tur, yayinevi, isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;

	std::cout << "Kitabın adını giriniz:" << std::endl;
	std::getline(cin,ad); //kullanıcı boşluk girdiğin de hata vermeme kodu
	std::cout << "Kitabın yazarını giriniz:" << std::endl;
	std::getline(cin,yazar);
	std::cout << "Kitabın türünü giriniz:" << std::endl;
	std::getline(cin,tur);
	std::cout << "Kitabın yayinevini giriniz:" << std::endl;
	std::getline(cin,yayinevi);
	std::cout << "Kitabın IsbnNo giriniz:" << std::endl;
	std::getline(cin,isbnNo);
	std::cout << "Kitabın sayfa sayısını giriniz:" << std::endl;
	std::cin >> sayfaSayisi;
	std::cout << "Kitabın fiyatını giriniz:" << std::endl;
	std::cin >> fiyat;
	std::cout << "Kitabın baskı yılını giriniz:" << std::endl;
	std::cin >> baskiYili;
	std::cout << "Kitabın baskı sayısını giriniz:" << std::endl;
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

	std::cout << "kitabın Adı = " << kitap.getAd() << " kitabın yazarı = " << kitap.getYazar() << " kitabın türü = " << kitap.getTur() << " kitabın yayinevi = " << kitap.getYayinevi() << " kitabın isbnNo = " << kitap.getisbnNo() << " kitabın sayfa Sayısı = " << kitap.getSayfaSayisi() << " kitabın fiyatı = " << kitap.getFiyat() << " kitabın baskı yılı = " << kitap.getBaskiYili() << " kitabın baskı sayısı = " << kitap.getBaskiSayisi() << std::endl;
}

