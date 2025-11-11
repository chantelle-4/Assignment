#include <iostream>
#include <string>
using namespace std;
int main() {

         string firstname;
         string lastname;
         string alsoKnownAs;
         string fullname;
         string favouriteMeal;
         string favouriteMovie;
         string whyAmIInThisClass;

         cout<< "Enter your first name: ";
         getline (cin,firstname); 

          cout<< "Enter your last name: ";
          getline(cin, lastname);

          cout<<"Enter your Also known as (AKA): ";
         getline(cin, alsoKnownAs); 

          cout<<" Enter your fullname: ";
          getline(cin, fullname);

          cout<<" Enter your favoriteMeal: ";
          getline(cin,favouriteMeal);

          cout<< "Enter favoriteMovie :";
          getline(cin,favouriteMovie);


        cout<<" Enter whyAmIInThisClass : ";
        getline(cin,whyAmIInThisClass);
        
        fullname = firstname + " " + lastname;

    cout << "+---------------------------------------------+" << endl;
    cout << "|           " << fullname << " Profile            |" << endl;
    cout << "+---------------------------------------------+" << endl;
    cout << "| First Name         : " << firstname << "              |" << endl;
    cout << "| Last Name          : " << lastname << "               |" << endl;
    cout << "| Full Name          : " << fullname << "               |" << endl;
    cout << "| Also known As (AKA): " << alsoKnownAs << "            |" << endl;
    cout << "| Favorite Meal      : " << favouriteMeal << "          |" << endl;
    cout << "| Favorite Movie     : " << favouriteMovie << "         |" << endl;
    cout << "| Why am I in class  : " << whyAmIInThisClass << "      |" << endl;
    cout << "+---------------------------------------------+" << endl;

 return 0;
        
}
