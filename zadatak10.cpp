#include <iostream>
#include <vector>


int main() {
    std::string rijec;

    std::vector<std::string> vektor;
    std::cout << "Unesi rijec: "; // EOF-End of file, za linux je ctrl+d u terminalu
    while(std::cin>>rijec){
      vektor.push_back(rijec);
      std::cout<<"Unesi rijec: ";
    }

    int brojKaraktera=0;
    std::cout<<std::endl<<"=================================================="<<std::endl;
    for(std::string r:vektor)
      std::cout<<r<<" ";

    for (int i=0;i<vektor.size();i++){
        for(int j=0;j<vektor[i].length();j++){
          brojKaraktera++;
        }
    }
    std::cout<<brojKaraktera;
    std::cout<<std::endl<<"=================================================="<<std::endl;

    int najvecaRijec=vektor[0].length();
    int indeksNajvece=0;
    for(int i=0;i<vektor.size();i++)
    {
      if(vektor[i].length()>najvecaRijec){
        najvecaRijec=vektor[i].length();
        indeksNajvece=i;
      }
    }

    std::cout<<std::endl<<"Najveca rijec je "<<vektor[indeksNajvece]<<" i ona ima "<<najvecaRijec<<" karaktera."<<std::endl;
    // uradit dijamant..
      return 0;
}

