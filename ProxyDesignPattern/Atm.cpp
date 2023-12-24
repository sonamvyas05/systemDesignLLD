#include "BankAccountProxy.h"
int main()
{
    BankAccountProxy accountProxy(1000);
     std::cout<< "ATM Transcation 1: "<< std::endl;
     accountProxy.withdraw(500);

     std::cout << "\nATM Transaction 2:" << std::endl;
    accountProxy.withdraw(800);

    std::cout << "\nATM Transaction 3:" << std::endl;
    accountProxy.withdraw(200);

    return 0;

}