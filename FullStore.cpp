#include <iostream>
#include <vector>
#include <ostream>
#include "FullStore.h"
#include "StoreItem.h"

store::store(std::vector<item> List):
	itemList{ List } {}

void store::processOrder(order ord) {
	for (int i = 0; i < ord.orderList.size(); i++) {
		itemList[i].itemStock = itemList[i].itemStock - ord.numWant[i];
	}
}


std::ostream& operator<<(std::ostream& out, const store& store) {
	for (int i = 0; i < store.itemList.size(); i++) {
		out << store.itemList[i].itemName << " x " << store.itemList[i].itemStock << "\n";
	}
	return out;
}
