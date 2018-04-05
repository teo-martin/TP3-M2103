#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>

namespace nsUtil
{
    class Exception : public std::exception
    {
        private:
            std::string myLibelle;
            unsigned int myCodErr;
        public:
            Exception (const std::string & myLibelle = "", const unsigned int & myCodErr = 0);
            virtual ~Exception();
            unsigned int getCodErr() const;
            std::string getLibelle() const;
            virtual const char* what() const noexcept;
            void display();
    };
}
#endif // EXCEPTION_H
