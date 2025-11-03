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

  std::cout<<"Welcome to Unit converter. Please enter one of the following options:"<<std::endl;
  std::cout<<"1. Temperature"<<std::endl;
  std::cout<<"2. Speed"<<std::endl;
  std::cout<<"3. Length"<<std::endl;
  std::cout<<"4. Weight"<<std::endl;
  std::cout<<"5. Fuel economy"<<std::endl;
  std::cout<<"Your choice: ";
  std::cin>>izbor;
  switch (izbor) {

    // ---------------- TEMPERATURE ----------------
    case 1:
      std::cout<<"Please choose converter:"<<std::endl;
      std::cout<<"1. Celsius to Fahrenheit"<<std::endl;
      std::cout<<"2. Fahrenheit to Celsius"<<std::endl;
      std::cout<<"3. Celsius to Kelvin"<<std::endl;
      std::cout<<"4. Kelvin to Celsius"<<std::endl;
      std::cout<<"5. Fahrenheit to Kelvin"<<std::endl;
      std::cout<<"6. Kelvin to Fahrenheit"<<std::endl;
      std::cout<<"Your choice: ";
      int temperaturski_izbor;
      std::cin>>temperaturski_izbor;
      double degrees;
      switch (temperaturski_izbor) {
        case 1:
          std::cout<<"\nEnter temperature in Celsius: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Celsius is "<<degrees*1.8+32<<" Fahrenheit"<<std::endl;
        break;

        case 2:
          std::cout<<"\nEnter temperature in Fahrenheit: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Fahrenheit is "<<(degrees-32)/1.8<<" Celsius"<<std::endl;
        break;

        case 3:
          std::cout<<"\nEnter temperature in Celsius: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Celsius is "<<degrees+Temperature::celsiusKelvinCoeff<<" Kelvin"<<std::endl;
        break;

        case 4:
          std::cout<<"\nEnter temperature in Kelvin: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Kelvin is "<<degrees-Temperature::celsiusKelvinCoeff<<" Celsius"<<std::endl;
        break;

        case 5:
          std::cout<<"\nEnter temperature in Fahrenheit: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Fahrenheit is "<<(degrees-32)*0.5556+Temperature::celsiusKelvinCoeff<<" Kelvin"<<std::endl;
        break;

        case 6:
          std::cout<<"\nEnter temperature in Kelvin: ";
          std::cin>>degrees;
          std::cout<<degrees<<" Kelvin is "<<(degrees-Temperature::celsiusKelvinCoeff)*1.8+32<<" Fahrenheit"<<std::endl;
        break;

        default:
        std::cout<<"Wrong choice!"<<std::endl;
        break; 
      }
      break;

    // ---------------- SPEED ----------------
    case 2:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Mile to kmH"<<std::endl;
      std::cout<<"2. kmH to Mile"<<std::endl;
      std::cout<<"Your choice: ";
      int izbor_brzine;
      std::cin>>izbor_brzine;
      double speed;
      switch (izbor_brzine) {
        case 1:
          std::cout<<"Enter speed in Mile: ";
          std::cin>>speed;
          std::cout<<speed<<" in Mile is "<<speed*Speed::mileToKmCoeff<<" kmH"<<std::endl;
        break;

        case 2:
         std::cout<<"Enter speed in kmH: ";
         std::cin>>speed;
         std::cout<<speed<<" in kmH is "<< speed/Speed::mileToKmCoeff<<" Mile"<<std::endl;
        break;

        default:
         std::cout<<"Wrong choice!"<<std::endl;
        break;
      }
      break;

    // ---------------- LENGTH ----------------
    case 3:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Light-year to Kilometer"<<std::endl;
      std::cout<<"2. Kilometer to Light-year"<<std::endl;
      std::cout<<"3. Foot to Meter"<<std::endl;
      std::cout<<"4. Meter to Foot"<<std::endl;
      std::cout<<"5. Inch to Centimeter"<<std::endl;
      std::cout<<"6. Centimeter to Inch"<<std::endl;
      std::cout<<"Your choice: ";
      int izbor_duzine;
      std::cin>>izbor_duzine;
      long double length;
      switch (izbor_duzine) {
        case 1:
          std::cout<<"Enter length in Light-years: ";
          std::cin>>length;
          std::cout<<length<<" Light-years is "<<length*Length::lightYearKmCoeff<<" Kilometers"<<std::endl;
        break;

        case 2:
          std::cout<<"Enter length in Kilometers: ";
          std::cin>>length;
          std::cout<<length<<" Kilometers is "<<length/Length::lightYearKmCoeff<<" Light-years"<<std::endl;
        break;

        case 3:
          std::cout<<"Enter length in Foot: ";
          std::cin>>length;
          std::cout<<length<<" Foot is "<<length*Length::footMeterCoeff<<" Meters"<<std::endl;
        break;

        case 4:
          std::cout<<"Enter length in Meters: ";
          std::cin>>length;
          std::cout<<length<<" Meters is "<<length/Length::footMeterCoeff<<" Foot"<<std::endl;
        break;

        case 5:
          std::cout<<"Enter length in Inch: ";
          std::cin>>length;
          std::cout<<length<<" Inch is "<<length*Length::inchCmCoeff<<" Centimeters"<<std::endl;
        break;

        case 6:
          std::cout<<"Enter length in Centimeters: ";
          std::cin>>length;
          std::cout<<length<<" Centimeters is "<<length/Length::inchCmCoeff<<" Inch"<<std::endl;
        break;

        default:
          std::cout<<"Wrong choice!"<<std::endl;
        break;
      }
      break;

    // ---------------- WEIGHT ----------------
    case 4:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Kilogram to Pound"<<std::endl;
      std::cout<<"2. Pound to Kilogram"<<std::endl;
      std::cout<<"Your choice: ";
      int izbor_tezine;
      std::cin>>izbor_tezine;
      double weight;
      switch (izbor_tezine) {
        case 1:
          std::cout<<"Enter weight in Kilograms: ";
          std::cin>>weight;
          std::cout<<weight<<" Kilograms is "<<weight*Weight::kgLbCoeff<<" Pounds"<<std::endl;
        break;

        case 2:
          std::cout<<"Enter weight in Pounds: ";
          std::cin>>weight;
          std::cout<<weight<<" Pounds is "<<weight/Weight::kgLbCoeff<<" Kilograms"<<std::endl;
        break;

        default:
          std::cout<<"Wrong choice!"<<std::endl;
        break;
      }
      break;

    // ---------------- FUEL ECONOMY ----------------
    case 5:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Liters per 100km to Miles per Gallon"<<std::endl;
      std::cout<<"2. Miles per Gallon to Liters per 100km"<<std::endl;
      std::cout<<"Your choice: ";
      int izbor_goriva;
      std::cin>>izbor_goriva;
      double fuel;
      switch (izbor_goriva) {
        case 1:
          std::cout<<"Enter fuel consumption in Liters per 100km: ";
          std::cin>>fuel;
          std::cout<<fuel<<" Liters per 100km is "<<Fuel::literPer100kmToMpgCoeff/fuel<<" Miles per Gallon"<<std::endl;
        break;

        case 2:
          std::cout<<"Enter fuel consumption in Miles per Gallon: ";
          std::cin>>fuel;
          std::cout<<fuel<<" Miles per Gallon is "<<Fuel::literPer100kmToMpgCoeff/fuel<<" Liters per 100km"<<std::endl;
        break;

        default:
          std::cout<<"Wrong choice!"<<std::endl;
        break;
      }
      break;

    default:
      std::cout<<"Wrong choice!"<<std::endl;
    break;
  }

  return 0;
}

