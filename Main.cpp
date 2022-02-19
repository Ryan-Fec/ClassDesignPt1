#include <iostream>
#include <vector>
#include <ostream>
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
	std::cout << everything;
	URL randomURL{ "https://canvas.highline.edu/courses/2188303" };
	std::cout << randomURL;
	MetaPhoto cake{ "cake", "PNG", "6/18/21", 0.232, "John Jacob Jingleheimer Schmidt", 416, 237, "f/1.8", "1/40", 320, false };
	std::cout << cake;
	std::cout << book;
	order ord{ {book, square, cube}, {1, 6, 7} };
	everything.processOrder(ord);
	std::cout << everything;
}
