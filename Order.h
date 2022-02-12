#pragma once
#include <iostream>
#include <vector>
#include "StoreItem.h"

class order {
public:
	order(std::vector<item> orderList);
	std::vector<item> orderList;
	void addToOrder(order ord, item newItem);
	double getPrice(order ord);
	
};