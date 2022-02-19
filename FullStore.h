#pragma once
#include <iostream>
#include <vector>
#include <ostream>
#include "StoreItem.h"
#include "Order.h"

class store {
public:
	store(std::vector<item> itemList);
	std::vector<item> itemList;
	void processOrder(order ord);
};

std::ostream& operator<<(std::ostream& out, const store& store);