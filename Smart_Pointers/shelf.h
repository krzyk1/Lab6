#pragma once
#include <iostream>
#include <memory>
#include "book.h"
class shelf
{
	std::shared_ptr<book> head;
public:
	shelf();
	shelf(std::shared_ptr<book> glowa);
	void addToShelf(std::shared_ptr<book> nowa);
	void DisplayShelf();
};

