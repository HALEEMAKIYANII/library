#include<iostream>
using namespace std;
int main()
{
	int initial_quantity, remaining_stock = 0, sold_items;
	cout << "Enter the initial quantity in stock: ";
	cin >> initial_quantity;
	char choice;
	do 
	{
		cout << "Enter Items Sold: ";
		cin >> sold_items;
		remaining_stock = initial_quantity - sold_items;
		cout << "Remaining Stock is: " << remaining_stock << endl;
		initial_quantity -= remaining_stock;

		cout << "Another Sale(y/n): ";
		cin >> choice;
	} while (choice == 'y');
	return 0;
}