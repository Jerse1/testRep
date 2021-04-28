#include <iostream>
#include "Log.h"

int main(){
    initLog();
    Log("Hello world!");
    std::cin.get();
}