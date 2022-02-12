#pragma once
#include <iostream>
class item {
public:
	item(std::string name, int id, double price, int stock);
	std::string itemName;
	int itemId;
	double itemPrice;
	int itemStock;
};
