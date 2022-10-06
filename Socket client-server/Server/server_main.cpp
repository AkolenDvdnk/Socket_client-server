#include "ServerSocket.h"
#include "../Helper/SocketException.h"
#include <iostream>

int main(){
    std::cout << "running....\n";

    try{
        ServerSocket server(30000);

        while (true){
            ServerSocket new_sock;
            server.accept(new_sock);

            try{ 
                while (true){
                    std::string data;
                    new_sock >> data;
                    new_sock << data;
                }
            }
            catch (SocketException&) {}
        }
    }
    catch (SocketException& e){
        std::cout << "Exception was caught: " << e.description() << "\nExiting.\n";
    }
    
    return 0;
}