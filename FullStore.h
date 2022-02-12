#pragma once
#include <iostream>
#include <vector>
#include "StoreItem.h"

class store {
public:
	store(std::vector<item> itemList);
	std::vector<item> itemList;
	void printFullStore(store List);
};