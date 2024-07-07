#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;
#pragma warning(disable:4996)

int d[256];
string s;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt","rt",stdin);
		freopen("output.txt","wt",stdout);
	#endif

	cin>>s;

	for (int i=0; i<s.length(); i++)
		d[s[i]]++;

	for (int i=255; i>0; i--)
		if (d[i]) {
			for (int j=0; j<d[i]; j++)
				cout<<(char)i;
			break;
		};

	return 0;
};