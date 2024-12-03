#include <iostream>
#include "CRYPTION.hpp"

int main(int argc,char* argv[]){
    if (argc != 2){
        cerr << "USage: ./cryption <task_data>" << endl;
        return 1;
    }
    executeCryption(argv[1]);
    return 0;
}