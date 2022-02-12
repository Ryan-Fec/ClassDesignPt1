#include <iostream>
#include <vector>
#include "StoreItem.h"
#include "Order.h"

order::order(std::vector<item> orderList) :
	orderList{ orderList } {}
void order::addToOrder(order ord, item newItem) {
	ord.orderList.push_back(newItem);
}
double order::getPrice(order ord) {
	double price = 0.0;
	for (int i = 0; i < ord.orderList.size(); i++) {
		price = price + ord.orderList[i].itemPrice;
	}
	return price;
}