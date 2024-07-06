#include<bits/stdc++.h>
 
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define min3(a,b,c) min(min(a,b),c)
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define gap " "
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define rev_sort(v) sort(all(v),greater<int>())
#define yes() "YES\n"
#define no() "NO\n"
double pi = acos(-1);
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef unsigned long long ull;
 
 
/*----------- START -----------*/
 
 
ll __lcm(ll a, ll b)
{
  return (a*b)/__gcd(b, a);
}
 
int ispalindrome(string s)
{
  ll i = 0;
  ll n = s.length();
  while (i <= n)
  {
    if (s[i++] != s[--n])
      return 0;
  }
  return 1;
}
bool is_prime(ll n)
{
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
bool isVowel(char a)
{
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
  return 1;
  return 0;
}
bool isPerfectSquare(ll x)
{
    ll s = round(sqrt(x));
    return (s * s == x);
}
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}
int previousFibonacci(int n)
{
    double a = n / ((1 + sqrt(5)) / 2.0);
    return round(a);
}
 
const int MAXPR = 10000;
 
// prefix[i] is going to store count of primes
// till i (including i).
int prefix[MAXPR + 1];
 
void buildPrefix()
{
    // Create a boolean array "prime[0..n]". A 
    // value in prime[i] will finally be false 
    // if i is Not a prime, else true.
    bool prime[MAXPR + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= MAXPR; p++) {
 
        // If prime[p] is not changed, then 
        // it is a prime
        if (prime[p] == true) {
 
            // Update all multiples of p
            for (int i = p * 2; i <= MAXPR; i += p)
                prime[i] = false;
        }
    }
 
    // Build prefix array
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAXPR; p++) {
        prefix[p] = prefix[p - 1];
        if (prime[p])
            prefix[p]++;
    }
}
 
// Returns count of primes in range from L to
// R (both inclusive).
int query(int L, int R)
{
    return prefix[R] - prefix[L - 1];
}
 
//prime sieve
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
 
 
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0) 
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
 
long long bin_sqrt(long long a)
{
    long long l=0,r=5000000001;
    while(r-l>1)
    {
        long long mid=(l+r)/2;
        if(1ll*mid*mid<=a)l=mid;
        else r=mid;
    }
    return l;
}