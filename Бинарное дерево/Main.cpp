#include <conio.h>
#include <iostream>
#include <fstream>
#include "Functions.h"
#include "Tree.h"
#include "Windows.h"

static int a;

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	cout << a;

    Tree tree;
    bool exit = false;

    for (;;)
	{
		PrintMenu();

		int choice = _getch();

		switch (choice)
		{
			case '1': 
                Insert(tree);
                break;
			case '2': 
                Remove(tree);
                break;
			case '3': 
                Print(tree);
                break;
			case '4': 
                Search(tree);
                break;
            case '5':
                exit = true;
                break;
		}

        if (exit)
        {
            break;
        }
	}

    return 0;
}