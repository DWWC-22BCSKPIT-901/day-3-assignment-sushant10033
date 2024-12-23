Q.5. You are given a positive integer primeFactors. You are asked to construct a 
positive integer n that satisfies the following conditions:  
The number of prime factors of n (not necessarily distinct) is at most 
primeFactors.  
The number of nice divisors of n is maximized. Note that a divisor of n is nice if it 
is divisible by every prime factor of n. For example, if n = 12, then its prime 
factors are [2,2,3], then 6 and 12 are nice divisors, while 3 and 4 are not.  
Return the number of nice divisors of n. Since that number can be too large, return 
it modulo 109 + 7.  
Note that a prime number is a natural number greater than 1 that is not a product of 
two smaller natural numbers. The prime factors of a number n is a list of prime 
numbers such that their product equals n.  
Program Code:- 
  
#include <iostream> 
#include <cmath>  
using namespace std;  
const int MOD = 1e9 + 7; 
long long 
powerMod(long long 
base, long long exp, 
long long mod) 
{     long long result = 
1;     
while (exp > 0) 
{         if (exp % 2 == 1) 
{             result = (result 
* base) % mod;  
        }  
        base = (base * base) % mod;         
exp /= 2;  
    }     return 
result;  
} int maxNiceDivisors(int primeFactors) 
{     if (primeFactors == 1) return 1;     
int q = primeFactors / 3;     int r = 
primeFactors % 3;  
  
    if (r == 0) {         return 
powerMod(3, q, MOD);     } else if 
(r == 1) {         return (powerMod(3, 
q - 1, MOD) * 4) % MOD;  
    } else {  
        return (powerMod(3, q, MOD) * 2) % MOD;  
}  
} int main() {     int primeFactors;     cout << 
"Enter the number of prime factors: ";     cin >> 
primeFactors;  
cout << "Number of nice divisors: " << maxNiceDivisors(primeFactors) << 
endl;     
return 0; } 
