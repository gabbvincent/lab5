#include "bank_account.h"

BankAccount::BankAccount() {

  this->accountNumber = 0;
  this->balance = 0.0;

}

BankAccount::BankAccount(unsigned int accountNumber) {

this->accountNumber = accountNumber;
this->balance = 0.0;
}

BankAccount::BankAccount(double balance, unsigned int accountNumber) {

  this->accountNumber = accountNumber;
  this->balance = balance;
}

void BankAccount::deposit(double amount) {

this->balance = balance + amount;

}

bool BankAccount::withdraw(double amount) {

if (balance >= amount) {

 this->balance = balance - amount;
  return true;

} else {

  return false;
 }
}

double BankAccount::getBalance() {
  
  return this->balance;

}

unsigned int BankAccount::getAccountNumber() {

  return this->accountNumber;

}

string BankAccount::toString() {

  ostringstream out;
  out.setf(ios::fixed);
  out.setf(ios::showpoint);
  out.precision(2);
 
  out << "Account #" << this->accountNumber << ", Current balance $" << this->balance;

  return out.str();
}