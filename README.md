# Datastructures-Algorithms
A collections of Data Structures and Algorithms tutorials and their implementations in various languages.


### Modular Arithmetic
Sometimes in competitive programming, the answer get overflowed, I mean to say that, they simply can't be stored in **INT32(int)**. So, it is enough to save answer as "modulo m" form i.e remainder when answer is divided by m(10^9+7).

E.g 17 mod 5 = 2.


Following formulas will really help you in competitive programming

1. (a+b) mod m = (a mod m + b mod m) mod m
2. (a-b) mod m = (a mod m - b mod m) mod m
3. (a*b) mod m = (a mod m * b mod m) mod m


        
``` cpp
    long long x = 1;
    for (int i = 1; i <= n; i++) {
    x = (x*i)%m;
    }
    cout << x << "\n";
 ```
        
### Shorten the code
 ```cpp
 typedef long long ll;
 typedef vector<int> vi;
      
ll a = 12345678901234;
vi b = {1,2,3,4};

// Use Macros to shorten the code
#define PB push_back

b.PB(5) // will append 5 in dynamic vector b 



// shorten for loop , check the demo on [http://cpp.sh/4vtvg]
// [I'm an inline-style link](https://www.google.com)
#define REP(i,a,b) for (int i=a;i<b;i++)

REP(i,0,9){cout << i;} // 012345678
```

<http://cpp.sh/4vtvg>
  
  
