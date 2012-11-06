#include <iostream>
#include <string>
using namespace std;

int combine_string(string a, string b)
{
    int counter;
    string combined;
    for (int counter=1; counter<3; counter++) {
        if (counter == 1) 
            combined = a; 
        else if (counter == 2)
            combined = combined + b;
    }
    return (combined);
}



int main()
{
    int thisisanumber;

    cout<<"Please enter a number: ";
    cin>> thisisanumber;
    cin.ignore();
    cout<<"You entered: " << thisisanumber << "\n";
    //cin.get();
    int x = 100;
    if (x == 100)
    {
      cout << "x is ";
      cout << x;
    }
    combined = combine_string("To","gether");
    cout << combined;
}
