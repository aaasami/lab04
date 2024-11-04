#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <vector>
#include <string>
#include "IceCreamItem.h"


class PreMadeItem : public IceCreamItem{
    public:
        PreMadeItem(std::string name, std::string size);
        virtual ~PreMadeItem();

        std::string composeItem() override;
        double getPrice() override;
    private:
        std::string name;
};
#endif