//
//  main.cpp
//  device template.
//
//  Created by Bill on 4/28/17.
//  Copyright © 2017 noncreature0714. All rights reserved.
//

#include <iostream>

template <typename T>
class Device {
public:
    void setName(std::string n){
        name = n;
    }
    
    std::string readName(){
        return name;
    }
    
    void setAddress(T a){
        address = a;
    }
    
    T readAddress(){
        return address;
    }
    
    void setValue(T v){
        value = v;
    }
    
    T readValue(){
        return value;
    }
    
private:
    std::string name;
    T address;
    T value;
};

//template <typename T>
//class AnalogDevice: public Device<T> {
//public:
//    void remapDevice(T min, T max){
//        
//    }
//private:
//    T rangeMin;
//    T rangeMax;
//};

template <typename T>
class DigitalDevice: public Device<T> {
    
};



struct AnalogDevice {
    std::string name;
    int address;
    int value;
    
    void setValue(int v){
        value = v;
    }
    
    
};

//
//class AnalogDevice {
//    
//};

int main(int argc, const char * argv[]) {
    
    int input = 3;
    
    AnalogDevice * pADev;

    pADev = new AnalogDevice[input];
    
    std::string num = "";
    for(int i = 0; i < input; ++i ){
        pADev[i] = {"hello", i+1*2, i+2*8};
    }
    
    for (int i = 0; i < input; ++i ){
        std::cout << pADev[i].name << " ";
        std::cout << pADev[i].address << " ";
        std::cout << pADev[i].value << std::endl;
    }
    
    delete [] pADev;
    pADev = 0;
    
    return 0;
}
