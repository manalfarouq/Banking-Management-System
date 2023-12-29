#include "SearchRecord.hpp"

#include <iostream>
#include <string>

using namespace std;

bool Search::search(int number)
{
    if (number == account_number)
    {
        return true;
    }
    else
        return false;
}
