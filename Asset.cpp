#include <string>
#include "Asset.h"

Asset::Asset(){
    type = "";
    product_value = 0;
}

Asset::Asset(int value, std::string product_type){
    type = product_type;
    product_value = value;
}

std::string Asset::get_product_type(){
    return type;
}

int Asset::get_value(){
    return product_value;
}

Asset::~Asset(){}