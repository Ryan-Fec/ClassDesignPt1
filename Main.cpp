#include <iostream>
#include <vector>
#include "StoreItem.h"
#include "Order.h"
#include "CameraMetadata.h"
#include "FullStore.h"
#include "URL.h"

int main() {
	item book{ "Book", 956544235, 75.00, 17 };
	item square{ "Square", 956544232, 75.00, 15 };
	item cube{ "Cube", 956544231, 75.00, 17 };
	item box{ "Box", 956544236, 75.00, 17 };
	store everything{ {book, square, cube, box} };
	everything.printFullStore(everything);

}
