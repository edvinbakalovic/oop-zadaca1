#include <iostream>
namespace Temperature{
const double celsiusKelvinCoeff=273.15;
}

namespace Speed{
const double mileToKmCoeff=1.60934;
}

namespace Length{
const double inchCmCoeff=2.54;
const double footMeterCoeff=0.3048;
const long double lightYearKmCoeff=9.4607e12L;
}

namespace Weight{
const double kgLbCoeff=2.20462;
}

namespace Fuel{
const double literPer100kmToMpgCoeff=235.215; 
}

int main(){

  int izbor;

  std::cout<<"Dobro dosli u pretvarac jedimica. Molimo unesite jednu od ponudjenih opcija:"<<std::endl;
  std::cout<<"1. Temperatura"<<std::endl;
  std::cout<<"2. Brzina"<<std::endl;
  std::cout<<"3. Duzina"<<std::endl;
  std::cout<<"4. Tezina"<<std::endl;
  std::cout<<"5. Potrosnja goriva"<<std::endl;
  std::cout<<"Vas izbor: ";
  std::cin>>izbor;
  switch (izbor) {

    case 1:
      std::cout<<"Molimo odaberite pretvarac:"<<std::endl;
      std::cout<<"1. Celzijus u Farenhajt"<<std::endl;
      std::cout<<"2. Farenhajt u Cellzijus"<<std::endl;
      std::cout<<"3. Celzijus u Kelvin"<<std::endl;
      std::cout<<"4. Kelvin u Celzijus"<<std::endl;
      std::cout<<"5. Farenhajt u Kelvin"<<std::endl;
      std::cout<<"6. Keelvin u Farenhajt"<<std::endl;
      std::cout<<"Vas izbor: ";
      int temperaturski_izbor;
      std::cin>>temperaturski_izbor;
      double degrees;
      switch (temperaturski_izbor) {
        case 1:
          std::cout<<"\nUnesite temperaturu u Celzijus: ";
          std::cin>>degrees;
          if(degrees<-273.15){std::cout<<"GRESKA: Temperatura ne moze biti ispod -273.15 Celzijus!\n";break;}
          std::cout<<degrees<<" Celzijus je "<<degrees*1.8+32<<" Farenhajt"<<std::endl;
        break;

        case 2:
          std::cout<<"\nUnesite temperaturu u Farenhajt: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Farenhajt je "<<(degrees-32)/1.8<<" Celzijus"<<std::endl;
        break;

        case 3:
          std::cout<<"\nUnesite temperaturu u Celzijus: ";
          std::cin>>degrees;
          if(degrees<-273.15){std::cout<<"GRESKA: Temperatura ne moze biti ispod -273.15 Celzijus!\n";break;}
          std::cout<<degrees<<" Celzijus jr "<<degrees+Temperature::celsiusKelvinCoeff<<" Kelvin"<<std::endl;
        break;

        case 4:
          std::cout<<"\nUnesite temperaturu u Kelvin: ";
          std::cin>>degrees;
          if(degrees<0){std::cout<<"GRESKA: Negativna vrijednost Kelvina ne postoji!\n";break;}
          std::cout<<degrees<<" Kelvin je "<<degrees-Temperature::celsiusKelvinCoeff<<" Celzijus"<<std::endl;
        break;

        case 5:
          std::cout<<"\nUnesite temperaturu u Farenhajt: ";
          std::cin>>degrees;
          double rez;
          rez=(degrees-32)*0.5556+Temperature::celsiusKelvinCoeff;
          if(rez<0){std::cout<<"GRESKA: Rezultat u Kelvin ne moze biti negativan!\n";break;}
          std::cout<<degrees<<" Farenhajt je "<<rez<<" Kelvin"<<std::endl;
        break;

        case 6:
          std::cout<<"\nUnesite temperaturu u Kelvin: ";
          std::cin>>degrees;
          if(degrees<0){std::cout<<"GRESKA: Negativna vrijednost Kelvina ne postoji!\n";break;}
          std::cout<<degrees<<" Kelvin je "<<(degrees-Temperature::celsiusKelvinCoeff)*1.8+32<<" Farenhajt"<<std::endl;
        break;

        default:
        std::cout<<"Pogresan izborr!"<<std::endl;
        break; 
      }
      break;

    case 2:
      std::cout<<"Molimo odaberite pretvarac: "<<std::endl;
      std::cout<<"1. Milja u km/h"<<std::endl;
      std::cout<<"2. km/h u Milju"<<std::endl;
      std::cout<<"Vas izbor: ";
      int izbor_brzine;
      std::cin>>izbor_brzine;
      double speed;
      switch (izbor_brzine) {
        case 1:
          std::cout<<"Unesite brzinu u Miljama: ";
          std::cin>>speed;
          std::cout<<speed<<" Milja je "<<speed*Speed::mileToKmCoeff<<" km/h"<<std::endl;
        break;

        case 2:
         std::cout<<"Unesite brzinu u km/h: ";
         std::cin>>speed;
         std::cout<<speed<<" km/h je "<< speed/Speed::mileToKmCoeff<<" Milja"<<std::endl;
        break;

        default:
         std::cout<<"Pogresan izbor!"<<std::endl;
        break;
      }
      break;

    case 3:
      std::cout<<"Molimo odaberite pretvarac: "<<std::endl;
      std::cout<<"1. Svjetlosna godina u Kilometar"<<std::endl;
      std::cout<<"2. Kilometar u Svjetlosnu godinu"<<std::endl;
      std::cout<<"3. Stopu u Metar"<<std::endl;
      std::cout<<"4. Metar u Stopu"<<std::endl;
      std::cout<<"5. Inc u Centimetar"<<std::endl;
      std::cout<<"6. Centimetar u Inč"<<std::endl;
      std::cout<<"Vas izbor: ";
      int izbor_duzine;
      std::cin>>izbor_duzine;
      long double length;
      switch (izbor_duzine) {
        case 1:
          std::cout<<"Unesite duzinu u Svjetlosnim godinama: ";
          std::cin>>length;
          std::cout<<length<<" Svjetlosnih godina je "<<length*Length::lightYearKmCoeff<<" Kilometara"<<std::endl;
        break;

        case 2:
          std::cout<<"Unesite duzinu u Kilometrima: ";
          std::cin>>length;
          std::cout<<length<<" Kilometara je "<<length/Length::lightYearKmCoeff<<" Svjetlosnih godina"<<std::endl;
        break;

        case 3:
          std::cout<<"Unesite duzinu u Stopama: ";
          std::cin>>length;
          std::cout<<length<<" Stopi je "<<length*Length::footMeterCoeff<<" Metara"<<std::endl;
        break;

        case 4:
          std::cout<<"Unesite duzinu u Metrima: ";
          std::cin>>length;
          std::cout<<length<<" Metara je "<<length/Length::footMeterCoeff<<" Stopi"<<std::endl;
        break;

        case 5:
          std::cout<<"Unesite duzinu u Inč: ";
          std::cin>>length;
          std::cout<<length<<" Inča je "<<length*Length::inchCmCoeff<<" Centimetara"<<std::endl;
        break;

        case 6:
          std::cout<<"Unesite duzinu u Centimetrima: ";
          std::cin>>length;
          std::cout<<length<<" Centimetara je "<<length/Length::inchCmCoeff<<" Inča"<<std::endl;
        break;

        default:
          std::cout<<"Pogresan izbor!"<<std::endl;
        break;
      }
      break;

    case 4:
      std::cout<<"Molimo odaberite pretvarac:"<<std::endl;
      std::cout<<"1. Kilogram u Funtu"<<std::endl;
      std::cout<<"2. Funtu u Kilogram"<<std::endl;
      std::cout<<"Vas izbor: ";
      int izbor_tezine;
      std::cin>>izbor_tezine;
      double weight;
      switch (izbor_tezine) {
        case 1:
          std::cout<<"Unesite tezinu u Kilogramima: ";
          std::cin>>weight;
          std::cout<<weight<<" Kilograma je "<<weight*Weight::kgLbCoeff<<" Funti"<<std::endl;
        break;

        case 2:
          std::cout<<"Unesite tezinu u Funtama: ";
          std::cin>>weight;
          std::cout<<weight<<" Funti je "<<weight/Weight::kgLbCoeff<<" Kilograma"<<std::endl;
        break;

        default:
          std::cout<<"Pogresan izbor!"<<std::endl;
        break;
      }
      break;

    case 5:
      std::cout<<"Molimo odaberite pretvarac:"<<std::endl;
      std::cout<<"1. Litara na 100km u Milje po galonu"<<std::endl;
      std::cout<<"2. Milje po galonu u Litara na 100km"<<std::endl;
      std::cout<<"Vas izbor: ";
      int izbor_goriva;
      std::cin>>izbor_goriva;
      double fuel;
      switch (izbor_goriva) {
        case 1:
          std::cout<<"Unesite potrosnju u L/100km: ";
          std::cin>>fuel;
          std::cout<<fuel<<" L/100km je "<<Fuel::literPer100kmToMpgCoeff/fuel<<" MPG"<<std::endl;
        break;

        case 2:
          std::cout<<"Unesite potrosnju u MPG: ";
          std::cin>>fuel;
          std::cout<<fuel<<" MPG je "<<Fuel::literPer100kmToMpgCoeff/fuel<<" L/100km"<<std::endl;
        break;

        default:
          std::cout<<"Pogresan izbor!"<<std::endl;
        break;
      }
      break;

    default:
      std::cout<<"Pogresan izbor!"<<std::endl;
    break;
  }

  return 0;
}

