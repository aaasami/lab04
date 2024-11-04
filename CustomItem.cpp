#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "IceCreamItem.h"
#include "CustomItem.h"

CustomItem::CustomItem(std::string size):IceCreamItem(size){
    if(size == "small"){
        price = 3.00;
    }else if(size == "medium"){
        price = 5.00;
    }else if(size == "large"){
        price = 6.50;
    }else{
        std::cout<<"Please enter a vaild size"<<std::endl;
    }
}

CustomItem::~CustomItem(){}

void CustomItem::addTopping(std::string topping){
    toppings[topping]++;
    price = price + 0.40;
}

std::string CustomItem::composeItem(){
    std::ostringstream ss;
    ss << "Custom Size: " << size << "\nToppings:\n";
    for(const auto& topping : toppings){
        ss << topping.first << ": " << topping.second << " oz\n";
    }
    ss << "Price: $" << std::fixed << std::setprecision(2) << price << "\n";
    return ss.str();
}

double CustomItem::getPrice(){
    return price;
}