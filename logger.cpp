#include "Log.h"

#include <iostream>

void initLog(){
    Log("Initializing log");
}

void Log(const char* Text){
    std::cout << Text << std::endl;
}


int main(){
Log("nigga");
}
