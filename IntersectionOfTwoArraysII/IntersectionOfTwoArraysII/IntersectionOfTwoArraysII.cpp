// IntersectionOfTwoArraysII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"Intersection.h"

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> v1(m), v2(n);
	for (int i = 0;i < m; i++)
		cin >> v1[i];
	for (int j = 0;j < n; j++)
		cin >> v2[j];
	Intersection s;
	vector<int> res(s.getIntersect(v1, v2));
	for (int i = 0, len = res.size(); i < len; i++)
		cout << res[i] << '\n';
	cout << '\n';
    return 0;
}

