#include <iostream>

using namespace std;

class Auto
{
  public:

  string marka;
  string model;
  int rocznik;
  int przebieg;

  void wczytaj()
  {
      cout << endl <<"Dodajemy nowy samochod do bazy danych: "<< endl;
      cout << "podaj marke: ";
      cin >> marka;
      cout << "Podaj model: ";
      cin >> model;
      cout << "Podaj rocznik: ";
      cin >> rocznik;
      cout << "Podaj przebieg: ";
      cin >> przebieg;
  }

  void wypisz()
  {

      cout << "Marka: "<< marka << ", model: " << model << ", rocznik: " << rocznik << ", przebieg: "<< przebieg;
  }
};



int main()
{

    Auto s1;
    s1.wczytaj();
    s1.wypisz();

    Auto s2;
    s2.wczytaj();
    s2.wypisz();




    return 0;
}
