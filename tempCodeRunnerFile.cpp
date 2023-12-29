#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "SearchRecord.hpp"
#include "AddRecord.hpp"
#include "EditRecord.hpp"
#include "ListData.hpp"

using namespace std;

int main()
{
    int compteur = 0;
    int numero_compte;
    double balance;
    string fName, lName;

    vector<Customer> myCustomer;

    cout << "******* Account Information System *******" << endl;
    int choice;

    do
    {
        cout << "Select one option below" << endl;
        cout << "\t\t1--> Add Record " << endl;
        cout << "\t\t2--> Show Record  " << endl;
        cout << "\t\t3--> Search Record " << endl;
        cout << "\t\t4--> Update Record " << endl;
        cout << "\t\t5--> Sort Records " << endl;
        cout << "\t\t6--> Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "How many records would you like to enter? " << endl;
            cin >> compteur;
            for (int i = 0; i < compteur; i++)
            {
                cout << "Enter your first name: ";
                cin >> fName;
                cout << "Enter your last name: ";
                cin >> lName;
                cout << "Enter your account number: ";
                cin >> numero_compte;
                cout << "Enter your balance: ";
                cin >> balance;
                Customer newCustomer;
                newCustomer.read_data(numero_compte, fName, lName, balance);
                myCustomer.push_back(newCustomer);
                cout << "\n-------------------------------------------" << endl;
            }
            break;
        case 2:
            for (const auto &customer : myCustomer)
            {
                customer.show_data();
                cout << "\n-------------------------------------------" << endl;
            }
            break;
        case 3:
            cout << "Enter your Account number : " << endl;
            int number;
            cin >> number;
            cout << "There are " << compteur << " records " << endl;
            bool result = SearchRecord::search(myCustomer, number);
            cout << "\n-------------------------------------------" << endl;
            break;
        case 4:
            int editIndex;
            cout << "Enter the index of the record you want to edit: ";
            cin >> editIndex;
            if (editIndex >= 0 && editIndex < myCustomer.size())
            {
                myCustomer[editIndex].Edit();
            }
            else
            {
                cout << "Invalid index." << endl;
            }
            cout << "\n-------------------------------------------" << endl;
            break;
        case 5:
            sort(myCustomer.begin(), myCustomer.end(), [](const Customer &a, const Customer &b) {
                return a.getAccountNumber() < b.getAccountNumber();
            });
            cout << "Records sorted by account number." << endl;
            cout << "\n-------------------------------------------" << endl;
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 6);

    return 0;
}
