#include "EditRecord.hpp"
#include <iostream>
#include "AddRecord.hpp" 
#include <string>

using namespace std;

void Record::Edit()
{
    int choix;
    string fname;
    string lname;
    do
    {
        cout << "********** MENU ***********" << endl;
        cout << "\n1. Modifier le nom " << endl;
        cout << "2. Modifier le numero du compte " << endl;
        cout << "3. Modifier le balance " << endl;
        cout << "4. Quitter" << endl;
        cout << "********************************" << endl;
        cout << "Choix : ";
        cin >> choix;

        switch (choix)
        {
        case 1:
            //*Changement du First et Last Name
            cout << "Enter new first name: ";
            cin >> fname;
            cout << "Enter new last name: ";
            cin >> lname;
            this->first_name = fname;
            this->last_name = lname;
            break;
        case 2:
            //*Changement du account_number
            cout << "Enter new account number: ";
            int account_number2;
            cin >> account_number2;
            this->account_number = account_number2;
            break;
        case 3:
            //*Changement du balance
            cout << "Enter your new balance: ";
            double balance2;
            cin >> balance2;
            this->balance = balance2;
            break;
        case 4:
            cout << "Exiting edit menu." << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a valid option." << endl;
            break;
        }
    } while (choix != 4);
}
