#include "AssetPortfolio.h"

#include <string>
#include <iostream>

#include "Asset.h"

AssetPortfolio::AssetPortfolio() { AssetPortfolio(0); }

AssetPortfolio::AssetPortfolio(int size) {
  this->max_size = size;
  this->current_size = 0;

  asset_list = new Asset[max_size];

  // std::cout << max_size << " " << current_size << " " << std::endl;
}

int AssetPortfolio::get_num_assets() { return current_size; }

bool AssetPortfolio::has_asset(std::string product) {
  for (int i = 0; i < current_size; i++) {
    if (asset_list[i].get_product_type() == product) {
      return true;
    }
  }
  return false;
}

Asset *AssetPortfolio::get_assets() { return asset_list; }

bool AssetPortfolio::add_asset(Asset new_asset) {
// std::cout << current_size << " " << max_size << std::endl;
  if (current_size < max_size) {
    asset_list[current_size] = new_asset;
    current_size++;
    return true;
  }
  return false;
}

AssetPortfolio::~AssetPortfolio(){
    delete[] asset_list;
}