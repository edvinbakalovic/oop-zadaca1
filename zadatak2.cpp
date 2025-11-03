#include<iostream>
#include <bitset>

void printBits(unsigned short reg) {
  std::bitset<16> bits(reg);
  std::cout<<bits<<std::endl<<std::endl;
}

void setBit(unsigned short &reg, int bit) //& - to znaci da se salje referenca, tj ne koriisti se kopija nego originalna vrijednost registra
{
  reg|=(1<<bit);
}

void resetBit(unsigned short &reg, int bit) // & ista stvar kao i sa setBit fun.^
{
  reg&=~(1<<bit);
}

int main()
{
  unsigned short regA=0;
  unsigned short regB=0;
  short mainIzbor;
  int bit;

  while (true) {
    std::cout<<"1. Modifikacija registra A"<<std::endl;
    std::cout<<"2. Modifikacija registra B"<<std::endl;
    std::cout<<"3. Zamijena registara"<<std::endl;
    std::cout<<"4. Izlaz"<<std::endl;
    std::cout<<"Unesite izbor: ";
    std::cin>>mainIzbor;

    if (mainIzbor==4) 
      break;

    if (mainIzbor==3) {
      regA=regA^regB;
      regB=regA^regB;
      regA=regA^regB;
      std::cout<<"Registri zamijenjeni!"<<std::endl;
      continue;
    }

    if(mainIzbor!=2 && mainIzbor!=1){
      std::cout<<"Pogresan unos!"<<std::endl;
      continue;
    }

    std::cout<<"\n1. Ispisi registar"<<std::endl;
    std::cout<<"2. Set bit u registar"<<std::endl;
    std::cout<<"3. Reset bit u registar"<<std::endl;
    std::cout<<"4. Izlaz"<<std::endl;
    short izbor;
    std::cout<<"Unesite izbor: ";
    std::cin>>izbor;

    if(izbor==4)
      break;

    switch (izbor) {
      case 1:
        if(mainIzbor==1)
          printBits(regA);
        else
          printBits(regB);
      break;
      
      case 2:
        std::cout<<"Unesi vrijednost bita: ";
        std::cin>>bit;
        if(bit<0 || bit>15){
        std::cout<<"Pogresan unos!"<<std::endl;
        break;
       }

        if (mainIzbor==1) {
          setBit(regA,bit);
          std::cout<<"Nova vrijednost registra: "<<regA<<std::endl;
         printBits(regA);
        } else {
        setBit(regB,bit);
        std::cout<<"Nova vrijednost registra: "<<regB<<std::endl;
        printBits(regB);
       }
      break;

      case 3:
        std::cout<<"Unesite vrijednost bita: ";
        std::cin>>bit;
        if(bit<0 || bit>15){
          std::cout<<"Pogresan unos!"<<std::endl;
          break;
        }

        if (mainIzbor==1) {
          resetBit(regA,bit);
          std::cout<<"Nova vrijednost registra: "<<regA<<std::endl;
          printBits(regA);
        } else{
          resetBit(regB,bit);
          std::cout<<"Nova vrijednost registra: "<<regB<<std::endl;
          printBits(regB);
        }
      break;

      default:
        std::cout<<"Pogresan izbor!"<<std::endl;
        break;
    }

  }

  return 0;
}
