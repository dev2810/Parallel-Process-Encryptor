#include <iostream>
#include <fstream>
#include "IO.hpp"
#include <string>
#include <sstream>

class ReadEnv{
    public:
        string getenv(){
            string env_path = ".env";
            IO io(env_path);
            fstream f_stream = io.getFileStream();
            stringstream buffer;
            buffer << f_stream.rdbuf();
            string content = buffer.str();
            return content;
        }
};