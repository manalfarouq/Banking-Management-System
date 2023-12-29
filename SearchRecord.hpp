#ifndef  __SEARCHRECORD_hpp
#define  __SEARCHRECORD_hpp

#include "AddRecord.hpp"
#include <iostream>
#include <string>

using namespace std;

class Search : public Customer{
    public:
    bool search(int number);
};
#endif
