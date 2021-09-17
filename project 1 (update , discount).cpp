#include<iostream>
#include<string>
using namespace std;
struct product
{
	string name;
	int code, quantity, discount;
	long afterprice, beforeprice;
};

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
void discount(product z[])
{
	int discount;
	int afterdiscount;
	for (int i = 0; i < 3; i++)
	{
		afterdiscount = z[i].afterprice - z[i].discount;
		cout << "the name of product " << z[i].name << endl;
		cout << "the code " << z[i].code << endl;;
		cout << "the quantity " << z[i].quantity << endl;
		cout << "the after price " << z[i].afterprice << endl;
		cout << "the discount =  " << z[i].discount << endl;
		cout << "the price after discount " << afterdiscount << endl;
	}
}
void update(product g[])
{
	string searchname;
	for (int i = 0;i < 3;i++)
	{
		if (g[i].name == searchname)
		{
			cout << "update name ";
			cin >> g[i].name;
			cout << "update afterprice ";
			cin >> g[i].afterprice;
			cout << "update beforeprice ";
			cin >> g[i].beforeprice;
			cout << "update code ";
			cin >> g[i].code;
			cout << "update discount ";
			cin >> g[i].discount;
			cout << "update quantity ";
			cin >> g[i].quantity;
		}
	}
}
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
		cout << "for namesearch choose 1 " << endl;
		cout << "for codesearch choose 2 " << endl;
		cout << "to find the profit for all the products choose 3 " << endl;
		cout << "to find the products that have discount choose 4" << endl;
		cout << "to update the data of products choose 5" << endl;
		cout << "to exit choose 6 " << endl;

		cin >> num;

		switch (num)
		{
		case 1:
		{
			searchname(x);
			break;
		}
		case 2:
		{
			searchcode(x);
			break;
		}
		case 3:
		{
			profit(x);
			break;
		}
		case 4:
		{
			discount(x);
			break;
		}
		case 5:
		{
			update(x);
		}
		case 6:
		{
			return 0;
		}
		default:
			cout << "choose num from 1 to 6" << endl;
			break;
		}

	}
	return 0;
}