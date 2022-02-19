#pragma once
#include <iostream>
#include <ostream>

class item {
public:
	item(const std::string name, const int id, const double price, int stock);
	const std::string itemName;
	const int itemId;
	const double itemPrice;
	int itemStock;
	std::string getName() const;
	int getId() const;
	double getPrice() const;
	int getStock() const;
};

std::ostream& operator<<(std::ostream& out, const item& item);