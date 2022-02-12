#include "StoreItem.h"
#include <iostream>

item::item(std::string name, int id, double price, int stock):
	itemName{ name }, itemId{ id }, itemPrice{ price }, itemStock{ stock } {}

