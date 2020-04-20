#pragma once
#include <string>
#include <memory>
#include <iostream>
class book
{
	std::string title;
	int pages;

public:
	std::shared_ptr<book> next = nullptr;
	std::weak_ptr<book> previous;
	book(std::string text, int number);
	book();
	void DisplayBook();
};

