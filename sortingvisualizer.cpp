#include <SDL2/SDL.h>
#include<iostream>
#include<random>
#include<ranges>
#include<algorithm>

using namespace std;


int main(){

	//taking random numbers from range 1 to 99
	std:: random_device rd;
	std:: uniform_int_distribution d(1,99);
	vector<int>v;

	//insert random number in the vector
	for (int i = 0; i < 100; i++)
	{
		v.push_back(d(rd));
	}

	//sort algorithm
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i; j < v.size(); j++)
		{
			if (v[j] < v[i])
			{
				swap(v[j],v[i]);
			}
		}
	}
	for (auto i : v)
	{
		cout << i << " ";
	}
}