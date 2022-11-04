//S110-Bhamare-Sorted-Vector.cpp
//Author: P.Bhamare
//Goal: Create a vector with numeric data in such a way that it is sorted after each insertion

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//Prototypes
void insertDataInOrder(vector <int> &v, int data);
void showVector(vector<int> v, string msg = "");
int main()
{

	int data;
	vector <int> v;
	do {
		cout << "Please enter a number: ";
		cin >> data;
		if (data == -1)break;
		insertDataInOrder(v, data);
		showVector(v);
	} while (true);
}
void showVector(vector<int> v, string msg) {
	cout << msg << endl;
	for (int num : v)cout << num << " ";
	cout << endl;
}
void insertDataInOrder(vector <int>& v, int data)
{
	v.push_back(data);
	int  i = v.size() - 2;							//first cell to the left side

	while ((i >= 0) && (v[i] > data)) {				//finding the 'right' place for data 
		//exchange cells 
		v[i + 1] = v[i];
		v[i] = data;
		i--;
	}
}
