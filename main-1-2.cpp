#include <iostream>
#include <string>

#include "Asset.h"
#include "AssetPortfolio.h"

using namespace std;

int main() {
  Asset asset1 = Asset(2, "stones"), asset2 = Asset(3, "bricks"),
        asset3 = Asset(7, "cement"), asset4 = Asset(1, "computers");
  AssetPortfolio portfolio1 = AssetPortfolio(), portfolio2 = AssetPortfolio(3);
cout << "Assets created sucessfully" <<endl;

// Checking empty constructor
  cout << "Adding Asset to portfolio 1: " << endl;
  if (portfolio1.add_asset(asset1)) {
    cout << "Adding was sucessfull" << endl;
  } else {
    cout << "Adding was uncessfull" << endl;
  }


// Checking constructor, add_asset and get_num_assets
 cout << "Adding Asset to portfolio w: " << endl;
  if (portfolio1.add_asset(asset1)) {
    cout << "Adding asset1 was sucessfull" << endl;
  } else {
    cout << "Adding asset1 was uncessfull" << endl;
  }
  cout << "Number of assets portfolio2 has: " << portfolio1.get_num_assets() << endl;

  if (portfolio1.add_asset(asset2)) {
    cout << "Adding asset2 was sucessfull" << endl;
  } else {
    cout << "Adding asset2 was uncessfull" << endl;
  }
    cout << "Number of assets portfolio2 has: " << portfolio1.get_num_assets() << endl;

    if (portfolio1.add_asset(asset3)) {
    cout << "Adding asset3 was sucessfull" << endl;
  } else {
    cout << "Adding asset3 was uncessfull" << endl;
  }
      cout << "Number of assets portfolio2 has: " << portfolio1.get_num_assets() << endl;

    if (portfolio1.add_asset(asset4)) {
    cout << "Adding asset4 was sucessfull" << endl;
  } else {
    cout << "Adding asset4 was uncessfull" << endl;
  }
        cout << "Number of assets portfolio2 has: " << portfolio1.get_num_assets() << endl;


//checking has_asset
cout << "Checking if portfolio2 has bricks" << endl;
if (portfolio2.has_asset("bricks")){
    cout << "Portfolio2 has bricks" << endl;
} else{
    cout << "Portfolio2 has no bricks" << endl;
}

cout << "Checking if portfolio2 has eggs" << endl;
if (portfolio2.has_asset("eggs")){
    cout << "Portfolio2 has eggs" << endl;
} else{
    cout << "Portfolio2 has no eggs" << endl;
}


// checking get_assts
Asset* asset_list = portfolio2.get_assets();

for (int i = 0; i < 4; i++){
    cout << asset_list[i].get_product_type() << endl;
}

}