#include <iostream>
#include <vector>

int main()
{
  int broj;
  std::cout<<"Unesite cijeli broj: ";
  std::cin>>broj;

  std::vector<int> vektor;

  while(broj>0)
  {
    int cifra=broj%10;
    vektor.push_back(cifra);
    broj/=10;
  }

  std::cout<<"Broj u obrnutom redoslijedu: ";
  for(int x:vektor)
    std::cout<<x;
  
  int max=vektor[0];
  int min=vektor[0];
  int suma=0;
  int proizvod=1;
  for(int i=0;i<vektor.size();i++)
  {
    if(vektor[i]>max)
      max=vektor[i];
    if(vektor[i]<min)
      min=vektor[i];

    suma+=vektor[i];
    proizvod*=vektor[i];
  }

  std::cout<<std::endl<<"Najveca cifra broja je: "<<max<<std::endl;
  std::cout<<"Najmanja cifra broja je: "<<min<<std::endl;
  std::cout<<"Suma cifara broja je: "<<suma<<std::endl;
  std::cout<<"Proizvod cifara broja je: "<<proizvod<<std::endl;

  return 0;
}
