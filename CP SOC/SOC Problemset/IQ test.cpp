#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
#define ll long long int
#define vi vector<int>
#define endl "\n"
 
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  char a[5][5];
  for (int i = 0; i < 4; ++i)
    for(int j = 0; j < 4; ++j)
      cin >> a[i][j];
  
  for(int i =0; i < 3; ++i)
    for(int j = 0; j < 3; ++j) {
      int cnt = 0;
      for(int ii = i; ii < i+2; ++ii)
	for(int jj = j; jj < j+2; ++jj) {
	  if(a[ii][jj] == '#')
	    cnt++;
	}
      if (cnt >= 3) {
	/* cout << "cnt " << cnt << endl; */
	cout << "YES\n";
	return 0;
      }
    }
  for(int i =0; i < 3; ++i)
    for(int j = 0; j < 3; ++j) {
      int cnt = 0;
      for(int ii = i; ii < i+2; ++ii)
	for(int jj = j; jj < j+2; ++jj) {
	  if(a[ii][jj] == '.')
	    cnt++;
	}
      if (cnt >= 3) {
	/* cout << "cnt " << cnt << endl; */
	cout << "YES\n";
	return 0;
      }
    }
  cout << "NO\n";
 
  return 0;
}
 