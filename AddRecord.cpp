#include "AddRecord.hpp"
#include <iostream>
#include <iostream>
#include <string>

using namespace std;

void Customer::read_data(int number, string fname, string lname, double balance)
{
    this->account_number = number;
    this->first_name = fname;
    this->last_name = lname;
    this->balance = balance;
}

int Customer::getAccountNumber() const {
    return account_number;
}