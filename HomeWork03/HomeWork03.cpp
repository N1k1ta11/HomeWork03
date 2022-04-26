#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
#include <list>

using namespace std;

void Task1(list<int>&lst)
{
	int arithmeticMean = 0;
	list<int>::iterator it = lst.begin();
	for (it; it != lst.end(); it++)
	{
		arithmeticMean += *it;
	}
	arithmeticMean /= lst.size();
	lst.push_back(arithmeticMean);
}

//Task 2
class Matrix
{
private:
	vector<int>firstStr;
	vector<int>secondStr;
	vector<int>thirdStr;
	int opred;
public:
	Matrix()
	{
		int a;
		cout << "Enter elements matrix 3x3 (line by line)\n";
		cin >> a;
		firstStr.push_back(a);
		cin >> a;
		firstStr.push_back(a);
		cin >> a;
		firstStr.push_back(a);
		cin >> a;
		secondStr.push_back(a);
		cin >> a;
		secondStr.push_back(a);
		cin >> a;
		secondStr.push_back(a);
		cin >> a;
		thirdStr.push_back(a);
		cin >> a;
		thirdStr.push_back(a);
		cin >> a;
		thirdStr.push_back(a);
	}

	int opredMat()
	{
		vector<int>::iterator it2 = secondStr.begin();
		vector<int>::iterator it3 = thirdStr.begin();
		for (it2; it2 != secondStr.end(); it2++, it3++)
		{
			*it2 -= *it3;
		}
		opred = thirdStr[2] * pow(-1, 3 + 3);
		opred *= ((firstStr[0] * secondStr[1]) - (secondStr[0] * firstStr[1]));
		return opred;
	}
};



int main()
{
	list<int>arr{5,5,5,4,2,5};
	Task1(arr);
	for (auto it : arr)
	{
		cout << it << endl;
	}

	Matrix m;
	cout<<m.opredMat();
}