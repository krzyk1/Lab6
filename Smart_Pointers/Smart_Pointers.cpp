#include <iostream>
#include <memory>
#include "book.h"
#include "shelf.h"

//zad 2
void Fibonacci(int size)
{
	if (size < 1)
	{
		std::cout << "Niewlasciwy argument" << '\n';
	}
	else if (size == 1)
	{
		std::cout << "1: 0" << '\n';
	}
	else
	{

		std::unique_ptr<int[]> newarray{ new int[size] };
		newarray[0] = 0;
		newarray[1] = 1;
		if(size > 2)
		{
			for (int i = 2; i < size; ++i)
			{
				newarray[i] = newarray[i - 1] + newarray[i - 2];
			}
		}
		for (int i = 0; i < size; ++i) 
		{
			std::cout << i+1 << ": " << newarray[i] << '\n';
		}
	}
}
int main()
{
	//zad 1
	/*std::shared_ptr<int> ptr = std::make_shared<int>();
	std::cout << "Count: " << ptr.use_count() << std::endl;
	{
		std::shared_ptr<int> ptr2 = ptr;
		std::cout << "Count: " << ptr.use_count() << std::endl;
		{
			std::shared_ptr<int> ptr3 = ptr;
			std::cout << "Count: " << ptr.use_count() << std::endl;
			{
				std::shared_ptr<int> ptr4 = ptr;
				std::cout << "Count: " << ptr.use_count() << std::endl;
				{
					std::shared_ptr<int> ptr5 = ptr;
					std::cout << "Count: " << ptr.use_count() << std::endl;
				}
				std::cout << "Count: " << ptr.use_count() << std::endl;
			}
			std::cout << "Count: " << ptr.use_count() << std::endl;
		}
		std::cout << "Count: " << ptr.use_count() << std::endl;
	}
	std::cout << "Count: " << ptr.use_count() << std::endl;*/
	
	//zad 2

	// Fibonacci(20);


	//zad 3
	book ksiazka1("tytul", 123);
	std::shared_ptr<book> wskaz(new book(ksiazka1));
	shelf bookshelf(wskaz);
	book ksiazka2("lotr", 1237);
	wskaz.reset();
	wskaz = std::make_shared<book>(ksiazka2);
	bookshelf.addToShelf(wskaz);
	bookshelf.DisplayShelf();
}

