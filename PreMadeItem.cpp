#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"
#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size),name(name){
     if(size == "small"){
        price = 4.00;
    }else if(size == "medium"){
        price = 6.00;
    }else if(size == "large"){
        price = 7.50;
    }else{
        std::cout<<"Please enter a vaild size"<<std::endl;
    }
}

PreMadeItem::~PreMadeItem(){}

std::string PreMadeItem::composeItem(){
    std::ostringstream ss;
    ss << "Pre-made Size: " << size << "\n";
    ss << "Pre-made Item: " << name << "\n";
    ss << "Price: $" << std::fixed << std::setprecision(2) << price << "\n";

    return ss.str();
}

double PreMadeItem::getPrice(){
    return price;
}

