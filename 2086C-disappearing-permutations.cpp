#include <iostream>
#include <vector>
#include <map>
using std::cout, std::cin;

using ll = long long;

template <typename T>
using v = std::vector<T>;

template <typename K, typename V>
using m = std::map<K, V>;

v<ll> parent;
v<ll> size;
ll total_size = 0;

void make_set(int a) {
  parent[a] = a;
  size[a] = 1;
  ++total_size;
}

int find_set(int a) {
  if (parent[a] == -1) {
    make_set(a);
    return a;
  }

  if (a == parent[a])
    return a;

  return parent[a] = find_set(parent[a]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (size[a] < size[b]) {
      parent[a] = b;
      size[b] += size[a];
    } else {
      parent[b] = a;
      size[a] += size[b];
    }
  }
}

void solve() {
  ll n;
  cin >> n;

  parent = v<ll>(n, -1);
  size = v<ll>(n);
  total_size = 0;

  m<ll, ll> idx_map;
  for (ll i = 0; i < n; ++i) {
    ll p;
    cin >> p;
    idx_map[p] = i;
  }
  for (ll i = 0; i < n; ++i) {
    ll di;
    cin >> di;
    // (process query di)
    // add di to dsu
    // 
    // get next element that needs to change (could be just di if it's in the right spot)
    // while next element and current element are not in same set
    // 		union next element and current element
    // 		set current element to next element
    // 		set next element that needs to change to actual next element that needs to change
    ll curr_idx = di - 1;
    ll next_idx = idx_map[di];
    ll a = find_set(curr_idx);
    ll b = find_set(next_idx);
    while (a != b) {
      union_sets(a, b);
      curr_idx = next_idx;
      next_idx = idx_map[next_idx + 1];
      a = find_set(curr_idx);
      b = find_set(next_idx);
    }

    cout << total_size << " ";
  }
  cout << "\n";
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
