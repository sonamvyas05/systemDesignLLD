#include "RealBankAccount.h"
RealBankAccount :: RealBankAccount(double initialBalance) : balance(initialBalance) {}

void RealBankAccount:: withdraw(double amount){
    if(amount <= balance){
        balance -= amount;
        std::cout<< "Withdrawal successful. Remaining balance: " <<balance <<std::endl;
    }
    else{
        std::cout<<" not sufficient balance, failed to withdraw "<<std::endl;

    }
}

double RealBankAccount::getBalance() const
{
    return balance;
}