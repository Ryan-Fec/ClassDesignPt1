#include <iostream>
#include <vector>
#include "FullStore.h"
#include "StoreItem.h"

store::store(std::vector<item> List):
	itemList{ List } {}
void store::printFullStore(store List) {
	for (int i = 0; i < List.itemList.size(); i++) {
		std::cout << List.itemList[i].itemName << " x " << List.itemList[i].itemStock << "\n";
	}
}
