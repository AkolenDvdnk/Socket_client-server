#ifndef SocketException_class
#define SocketException_class

#include <string>

class SocketException{
    public:
    SocketException (std::string s) : ms(s) {};
    ~SocketException() {};

    std::string description(){
        return ms;
    }
    
    private:
    std::string ms;
};

#endif