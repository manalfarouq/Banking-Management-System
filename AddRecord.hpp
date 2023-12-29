#ifndef __ADDRECORD_HPP
#define __ADDRECORD_HPP

#include <iostream>
#include <string>

using namespace std;

class Customer
{
protected:
    int account_number;
    string first_name;
    string last_name;
    double balance;

public:
    void read_data(int number, string fname, string lname, double balance);
    void show_data();
    void Edit();
    int getAccountNumber() const;
};

#endif
