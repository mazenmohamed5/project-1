#include<iostream>
#include<string>
using namespace std;
class product
{
public:
	string name;
	int code, afterprice, beforeprice, quantity, discount;
	void addarray(product x[])
	{
		cout << "please fill the array" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "enter name" << endl;
			cin >> x[i].name;
			cout << "enter code" << endl;
			cin >> x[i].code;
			cout << "enter after price" << endl;
			cin >> x[i].afterprice;
			cout << "enter before price" << endl;
			cin >> x[i].beforeprice;
			cout << "enter quantity" << endl;
			cin >> x[i].quantity;
			cout << "enter discount" << endl;
			cin >> x[i].discount;
		}
	};
	void printarray(product x[])
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "the name of product " << x[i].name << endl;
			cout << "the code " << x[i].code << endl;;
			cout << "the quantity " << x[i].quantity << endl;
			cout << "the after price " << x[i].afterprice << endl;
			cout << "the discount =  " << x[i].discount << endl;
			cout << "product discount =" << x[i].discount << "%" << endl;
		}
	}
	void searchname(product x[])
	{
		string namesearch;
		cout << "enter the namesearch" << endl;
		cin >> namesearch;
		for (int i = 0; i < 3; i++)
		{
			if (x[i].name == namesearch)
			{
				cout << "the name search is found" << endl;
				cout << "the name of product " << x[i].name << endl;
				cout << "the code " << x[i].code << endl;;
				cout << "the quantity " << x[i].quantity << endl;
				cout << "the after price " << x[i].afterprice << endl;
				cout << "the discount =  " << x[i].discount << endl;

			}
		}
	}
	void searchcode(product y[])
	{
		int searchcode;
		cout << "enter the code" << endl;
		cin >> searchcode;
		for (int i = 0; i < 3; i++)
		{
			if (y[i].code == searchcode)
			{
				cout << "the  codesearch is found" << endl;
				cout << "name of product  " << y[i].name << endl;
				cout << "the code " << y[i].code << endl;
				cout << "the quantity " << y[i].quantity << endl;
				cout << "the after price " << y[i].afterprice << endl;
				cout << "the discount =  " << y[i].discount << endl;

			}

		}
	}
	void profit(product k[])
	{
		long netcost;
		long totalprofit;
		for (int i = 0; i < 3; i++)
		{
			netcost = k[i].afterprice - k[i].beforeprice;
			totalprofit = netcost * k[i].quantity;
			cout << "the name of product " << k[i].name << endl;
			cout << "the code " << k[i].code << endl;;
			cout << "the quantity " << k[i].quantity << endl;
			cout << "the after price " << k[i].afterprice << endl;
			cout << "the before price " << k[i].beforeprice << endl;
			cout << "your netcost = " << netcost << endl;
			cout << "the total profit = " << totalprofit << endl;
		}
	}
	void update(product  x[])
	{
		for (int i = 0; i > -1; i++)
		{
			int choose;
			cout << "to update name choose 1" << endl;
			cout << "to update code choose 2" << endl;
			cout << "to update afterprice choose 3 " << endl;
			cout << "to update beforeprice choose 4" << endl;
			cout << "to update qunatity choose 5  " << endl;
			cout << "to update discount choose 6 " << endl;
			cout << "to exit enter 7" << endl;
			cin >> choose;

			string previousname;
			switch (choose)
			{
			case 1:

				cout << "enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter name" << endl;
						cin >> x[i].name;
					}

				}

				break;

			case 2:
				cout << " enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter code" << endl;
						cin >> x[i].code;
					}

				}

				break;

			case 3:
				cout << "enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter afterprice" << endl;
						cin >> x[i].afterprice;
					}

				}

				break;

			case 4:
				cout << "enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter beforeprice" << endl;
						cin >> x[i].beforeprice;
					}

				}

				break;

			case 5:
				cout << "enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter quantity" << endl;
						cin >> x[i].quantity;
					}

				}

				break;

			case 6:
				cout << "enter the name you want to search" << endl;
				cin >> previousname;
				for (int i = 0; i < 3; i++)
				{
					if (previousname == x[i].name)
					{
						cout << "enter discount" << endl;
						cin >> x[i].discount;
					}

				}

				break;

			case 7:
				i = -2;

			default:
				cout << "choose number from 1 to 7 " << endl;
				break;
			}
		}
	}
	void max_profit(product  x[])
	{
		int netcost = 0;
		int totalprofit;
		int maxprofit = 0;
		for (int i = 0; i < 3; i++)
		{
			netcost = x[i].afterprice - x[i].beforeprice;
			totalprofit = netcost * x[i].quantity;

			if (totalprofit > maxprofit)
			{
				maxprofit = totalprofit;
			}
		}
		cout << max_profit << endl;
	}
};

int main()
{
	int number;
	const int size = 3;
	product x[size];
	cout << "please enter the array" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "please enter a name " << endl;
		cin >> x[i].name;
		cout << "please enter the code " << endl;
		cin >> x[i].code;
		cout << "please enter the quantity " << endl;
		cin >> x[i].quantity;
		cout << "please enter the after price " << endl;
		cin >> x[i].afterprice;
		cout << "please enter the beforeprice " << endl;
		cin >> x[i].beforeprice;
		cout << "please enter the discount " << endl;
		cin >> x[i].discount;
	}
	for (int i = 0; i > -1; i++)
	{
		int num;
		cout << "for addarray choose 1" << endl;
		cout << "for printarray chooose 2" << endl;
		cout << "for namesearch choose 3 " << endl;
		cout << "for codesearch choose 4" << endl;
		cout << "to find the profit for all the products choose 5 " << endl;
		cout << "to update the data of products choose 6" << endl;
		cout << "to find the maxprofit choose 7" << endl;
		cout << "to exit choose 8" << endl;
		cin >> num;

		switch (num)
		{
		case 1:
			x->addarray(x);
			break;

		case 2:
			x->printarray(x);
			break;

		case 3:
			x->searchname(x);
			break;

		case 4:
			x->searchcode(x);
			break;

		case 5:
			x->profit(x);
			break;

		case 6:
			x->update(x);
			break;

		case 7:
			x->max_profit(x);
			break;
		case 8:
			return 0;

		default:
			cout << "choose number from 1 to 8" << endl;
			break;

		}
	}
	return 0;
}