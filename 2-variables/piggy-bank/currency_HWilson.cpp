#include <iostream>

int main() {
//define variables
  double Pesos;
  double Raeis;
  double Soles;
  double Dollars;
    double PesosDollars;
    double RaeisDollars;
    double SolesDollars;

//prompt user for inputs
std::cout << "Enter number of Colombian Pesos";
std::cin >> Pesos; 
std::cout << "Enter number of Brazilian Reais";
std::cin >> Raeis; 
std::cout << "Enter number of Peruvian Soles";
std::cin >> Soles;

//calculate currencies in US dollars
PesosDollars = Pesos * 0.00032;
RaeisDollars = Raeis * 0.26;
SolesDollars = Soles * 0.3;

// notify user of value for each currency in US dollars
std::cout<<"You have US$"<<PesosDollars<<" equivelent Colombian Pesos " << "\n";
std::cout<<"You have US$"<<RaeisDollars<<" equivelent Brazilian Raeis " << "\n";
std::cout<<"You have US$"<<SolesDollars<<" equivelent Peruvian Soles " << "\n";

// calculate total value
Dollars = SolesDollars + RaeisDollars + PesosDollars;

// print total value
std::cout << "the total value of your foreign currencies is US$" << Dollars << "\n";

// print disclaimer
std::cout << "\n";
std::cout << "\n";
std::cout << "DISCLAIMER: \n";
std::cout << "1. THE METHOD USED TO DETERMINE VALUE OF FOREIGN CURRENCY USES A FIXED VALUE FROM A PUBLIC DATABASE INQUIRED ON 19/03/2019 @ 10:35AM AEST. \n\n2. THIS ADVICE IS NOT ACCURATE FOR ANY PERIOD OUTSIDE OF THIS DATE & TIME. \n\n3. ADDITIONAL CHARGES MAY APPLY TO CURRENCY CONVERSIONS. PLEASE CHECK WITH YOUR FINANCIAL INSTITUTION FOR THE PRECISE TRANSACTION VALUE \n";
std::cout << "\n";
std::cout << "END \n";
  
return 0;
  
}
