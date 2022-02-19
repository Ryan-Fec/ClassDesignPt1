#include "StoreItem.h"
#include <iostream>
#include <ostream>

item::item(std::string name, int id, double price, int stock):
	itemName{ name }, itemId{ id }, itemPrice{ price }, itemStock{ stock } {}

std::string item::getName() const { return itemName; }
int item::getId() const { return itemId;  }
double item::getPrice() const { return itemPrice; }
int item::getStock() const { return itemStock; }

 std::ostream& operator<<(std::ostream& out, const item& item) {
	out << "Name: " << item.getName() << " ID: " << item.getId() << " Price: " << item.getPrice() << " Current Stock: " << item.getStock() << "\n";
	return out;
}