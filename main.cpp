#include <iostream>
using namespace std;



class Kitap{

public:
    string isim ="Null";

public:
    string bilgileriSoyle(){
    cout<<isim<<endl;
    }
};

class Roman: public Kitap {
public:
    string romanTipi; //kisa/orta/uzun
    Roman(string isim,string romanTipi){
    this->isim = isim;
    this->romanTipi = romanTipi;
    }

    void bilgileriSoyle(){
        cout<<"Roman Ismi: "<<isim<<" Roman Tipi:"<<romanTipi<<endl;
    }
};




int main()
{

    Roman r1("Dokuzuncu Hariciye Kogusu","Uzun");

    cout<<"***********r1.bilgileriSoyle()"<<endl;
    r1.bilgileriSoyle();

    cout<<"***********r1.Kitap::bilgileriSoyle()"<<endl;
    r1.Kitap::bilgileriSoyle(); // Bu ise ismini bilmedigim harici bir yontem...


    Kitap *r1Ebeveyn; //Pointer ile yapilan bu isleme Overriding denir. Kendi classindaki metodu cigneyip ebeveyn metotu getirir.
    r1Ebeveyn =&r1;

    cout<<"***********r1Ebeveyn->bilgileriSoyle()"<<endl;
    r1Ebeveyn->bilgileriSoyle();



    return 0;
}
