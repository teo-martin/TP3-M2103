#include <iostream>
#include <iomanip>
#include <string>
#include "exception.h"

using namespace std;
using namespace nsUtil;



Exception::Exception (const std::string & myLibelle, const unsigned int & myCodErr) {}
Exception::~Exception() {}
unsigned int Exception::getCodErr() const
{
    return myCodErr;
}//GetCodErr
string Exception::getLibelle() const
{
    return myLibelle;
}//GetLibelle
const char* Exception::what() const noexcept
{
    const char* NTCTS;
    NTCTS = myLibelle.c_str();
}//what
void Exception::display()
{
    cout << "Erreur : " << myLibelle << endl
         << "Code   : " << myCodErr << endl;
}//display


