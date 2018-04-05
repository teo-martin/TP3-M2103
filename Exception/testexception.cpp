#include <iostream>
#include <iomanip>
#include <fstream>
#include "exception.h"
#include <string>

using namespace std;
using namespace nsUtil;

namespace
{
    void testException()
    {
        while (true)
        {
           string Libelle;
           unsigned int Code;
           cout << "Libelle: ";
           cin >> Libelle;
           if (cin.eof()) break;

           cout << "code: ";
           cin >> Code;
           if (cin.eof()) break;

           Exception(Libelle, Code).Exception::display();
        }
    }
}


int main()
{
    testException();
    return 0;
}
