#include "shelf.h"

shelf::shelf(std::shared_ptr<book> glowa)
{
	head = glowa;
}

void shelf::addToShelf(std::shared_ptr<book> nowa)
{
	if (head)
		{
		std::shared_ptr<book> i = head;
		while (i->next)
		{
			i = i->next;
		}
		i->next = nowa;
		nowa->previous = i;
	}
	else
	{
		head = nowa;
	}
}

void shelf::DisplayShelf()
{
	std::shared_ptr<book> i = head;
	do
	{
		i->DisplayBook();
		i = i->next;
	} while (i);
}
