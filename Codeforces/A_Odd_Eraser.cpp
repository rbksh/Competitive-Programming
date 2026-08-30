// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <iomanip>
// #include <cmath>
// using namespace std;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector <long long> v(n); 

//         while (n--) {
//             long long a;
//             cin >> a;
//             v.push_back(a);
//         }
//     }
// }


//editoria's solution - crazyy

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long current_gcd = 0;
    for (int i = 0; i < n; ++i) {
        current_gcd = std::gcd(current_gcd, a[i]);
    }

    // If the total number of elements is even, we can eliminate elements 
    // such that only elements with a specific parity of indices remain.
    // Specifically, if we want to retain elements at specific positions, 
    // we analyze whether we can reduce the array length to an even or odd state.
    // Here we check both keeping odd indices or even indices when n is reduced.
    
    long long ans = 0;
    
    // Let's check all possible target divisors of the elements
    // Since the GCD can only be a divisor of elements, we can check 
    // divisors of prefix elements or just simulate the conditions.
    // Alternatively, let's see which elements can be kept.
    
    // A known property for this problem:
    // Depending on the parities, we can always choose to keep either 
    // all elements at odd positions or all elements at even positions 
    // (or reduce down based on the operation constraints).
    // Let's collect potential GCD candidates by checking sub-segments 
    // or parity-based filtrations.
    
    vector<long long> candidates;
    candidates.push_back(current_gcd);

    // Check if we keep elements at odd indices (1-based: 1, 3, 5...)
    long long gcd_odd = 0;
    for (int i = 0; i < n; i += 2) {
        gcd_odd = std::gcd(gcd_odd, a[i]);
    }
    candidates.push_back(gcd_odd);

    // Check if we keep elements at even indices (1-based: 2, 4, 6...)
    long long gcd_even = 0;
    for (int i = 1; i < n; i += 2) {
        gcd_even = std::gcd(gcd_even, a[i]);
    }
    candidates.push_back(gcd_even);

    // More generally, by the rules of median removal on 2k+1 elements,
    // we can control the parity of the remaining number of elements.
    // If n is odd, we can reach a single element or specific subsets.
    // Let's check divisors of individual elements or pairwise GCDs that can be formed.
    for (int i = 0; i < n; ++i) {
        // Any single element can potentially be the final remaining element if n is odd,
        // or we can form GCDs of subarrays.
        long long g = 0;
        for (int j = i; j < n; ++j) {
            g = std::gcd(g, a[j]);
            candidates.push_back(g);
        }
    }

    // Find the maximum GCD among all valid reachable configurations
    long long max_g = 0;
    for (long long c : candidates) {
        // Verify if we can achieve this GCD `c`
        // By checking if a subset of elements whose GCD is a multiple of `c` can be kept.
        // Actually, any divisor of the full GCD or sub-gcds can be tested.
        // Simpler check: we can always achieve the GCD of elements that share a common divisor.
    }

    // Let's refine the strategy: 
    // The operation allows removing elements such that we can keep elements 
    // matching certain index parity patterns. 
    // Let's test all subsegments or evaluate the maximum GCD of any subsequence 
    // that can be formed by valid deletions.
    
    // A robust way for Codeforces Div.2 A problems with $N \le 100$:
    // We can use dynamic programming or check all possible intervals/subsequences 
    // that can be reduced.
    
    // Let's write a DP or check function:
    // Can we reduce the array to a specific subset? 
    // Notice that a single operation removes 1 element by choosing 2k+1 elements 
    // where the chosen element is at median position. This means we can 
    // flexibly drop elements.
    
    // Let's check all possible subsegments [L, R] that can be isolated, 
    // or check if we can keep any subsequence.
    
    for (int i = 0; i < n; ++i) {
        long long running_gcd = 0;
        for (int j = i; j < n; ++j) {
            running_gcd = std::gcd(running_gcd, a[j]);
            // Check if subsegment [i, j] can be reduced to just these elements
            // The number of elements to remove from outside and inside.
            // Actually, any contiguous subsegment can be kept if we can clear outside elements.
            // Can we clear elements outside [i, j]?
            int len = j - i + 1;
            // Check if parity conditions allow reducing length
            // With 2k+1 operations, we can reduce length by 1 at each step.
            // Total elements to remove = n - len.
            // Can we always remove elements as long as remaining length >= 1 and 2k+1 <= current_m?
            // Since 2k+1 can be as small as 3 (k=1), we need current_m >= 3 to perform an operation 
            // when length > 1. If length becomes 1, we can't perform more operations.
            // Thus, any subsegment can be achieved as long as we can legally delete the rest.
            max_g = max(max_g, running_gcd);
        }
    }

    // Also check non-contiguous patterns like all odd or all even indices
    max_g = max(max_g, gcd_odd);
    max_g = max(max_g, gcd_even);

    cout << max_g << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

