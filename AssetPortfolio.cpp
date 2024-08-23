#include "AssetPortfolio.h"

#include <string>

#include "Asset.h"

AssetPortfolio::AssetPortfolio() { AssetPortfolio(0); }

AssetPortfolio::AssetPortfolio(int size) {
  max_size = size;
  current_size = 0;

  asset_list = new Asset[max_size];
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