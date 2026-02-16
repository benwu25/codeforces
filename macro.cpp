#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int long long
#define maybe_erase_if_zero(x, y) if (!x[y]) x.erase(y)
#define vec_last(x) *std::prev(x.end())
#define vec_nth_last(x, n) x[x.size()-n]
#define set_last(x) *(x.end()-1)
#define set_first(x) *std::begin()
#define set_nth_last(x, n) *(x.end()-n)
#define set_nth(x, n) *(x.begin()+n)
#define pop_back_deque(d) d.back(); d.pop_back()
#define pop_front_deque(d) d.front(); d.pop_front()

#define make_vec(n, s) std::vector<long long> n(s)
#define read_vec(n, s) std::vector<long long> n(s); \
    for (long long i = 0; i < n; ++i) std::cin >> n[i]
#define make_vec_t(n, t, s) std::vector<t> n(s)
#define read_vec_t(n, t, s) std::vector<t> n(s); \
    for (long long i = 0; i < s; ++i) std::cin >> n[i]

#define make_quick_set(n, t) std::unordered_set<t> n
#define make_set(n, t) std::set<t> n

#define read_string(s) std::string s; std::cin >> s
#define diff(a, b) (a-b)
#define add(a, b) (a+b)
#define mod(a, b) a % b
#define output(x) std::cout << x << "\n"
#define make_quick_map(n, k, v) std::unordered_map<k, v> n
#define make_map(n, k, v) std::map<k, v> n
#define read_n() long long n; std::cin >> n
#define read(x) long long x; std::cin >> x
#define last_idx(x) x.size()-1

#define make_nested_vec(n, r, c) std::vector<std::vector<long long>> n(r, std::vector<long long>(c))
#define read_nested_vec(n, r, c) std::vector<std::vector<long long>> n(r, std::vector<long long>(c)); \
    for (long long i = 0; i < r; ++i) \
      for (long long j = 0; j < c; ++j) std::cin >> n[i][j]

#define FOR_COUNT_UP(start, end, i) \
    for (long long i = start; i < end; ++i)
#define FOR_COUNT_UP_EXPORT(start, end, i) \
    long long i; \
    for (i = start; i < end; ++i)
#define FOR_COUNT_UP_INCLUSIVE(start, end, i) \
    for (long long i = start; i <= end; ++i)
#define FOR_COUNT_DOWN(top, bottom, i) \
    for (long long i = top; i >= bottom; --i)
#define FOR_COUNT_DOWN_EXPORT(top, bottom, i) \
    long long i; \
    for (i = top; i >= bottom; --i)
#define FOR_ITERATOR_UP(start_iter, end_iter, it) \
    for (auto it = start_iter; it != end_iter; it = std::next(it))
#define FOR_ITERATOR_DOWN(top_iter, bottom_iter, it) \
    for (auto it = top_iter; it >= bottom_iter; it = std::prev(it))
#define FOR_ITERATOR_UP_EXPORT(start_iter, end_iter, it) \
    auto it; \
    for (it = start_iter; it != end_iter; it = std::next(it))
#define FOR_ITERATOR_DOWN_EXPORT(top_iter, bottom_iter, it) \
    auto it; \
    for (it = top_iter; it >= bottom_iter; it = std::prev(it))



// todo: write different loop styles as macros
// e.g., explicit iterator, index-based, the colon iterator loops, etc.



void solve() {

}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; cin >> t;
  while (t--)
    solve();
}
