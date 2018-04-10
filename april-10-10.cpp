#include<iostream>
using namespace std;
int main()
{
    char sing_ch;

    cout << " \n\n Print the code (ASCII code / Unicode etc) of a given character : \n";
    cout << "-----------------------------------------------------------------------\n";

    cout <<" Input character : ";
    cin >> sing_ch;

    cout << " The ASCII value of "<<sing_ch<< " is : " <<(int)sing_ch <<endl;
    cout << " The character for the ASCII value "<< (int)sing_ch << " is: " <<(char)((int)sing_ch)<<endl;
    cout << endl;

    return 0;
}
