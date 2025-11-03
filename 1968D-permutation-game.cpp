#include <bits/stdc++.h>
using namespace std;

using ll = long long;

template <typename T>
using v = vector<T>;

template <typename K, typename V>
using m = unordered_map<K, V>;


// return max score for a player starting at start
ll bfs(ll start, v<ll> &p, v<ll> &a, ll k) {
  // max score tracker and also current score tracker
  ll curr_score = 0, max_score = 0;

  // queue of nodes, only enqueue when k > 0
  deque<ll> q{start};

  // set of visited nodes, there's no more optimal strategy to re-visit nodes, it is greedy
  v<ll> visited(p.size());
  visited[start - 1] = 1;

  while (q.size()) { // k is valid for this turn
    // take a turn given we are at this vertex
    ll curr = q.front(); q.pop_front();

    // calculate the score we would get by staying here 1 turn and also k turns
    max_score = max(max_score, curr_score + k * a[curr - 1]); // k turns

    // then stay here for one turn and move on to explore
    curr_score += a[curr - 1];

    // try continue exploring if we have more turns
    if (k > 1 && visited[p[curr - 1] - 1] == 0) {
      q.push_back(p[curr - 1]);
      visited[p[curr - 1] - 1] = 1;
    }

    // finish this turn
    --k;
  }
  return max(curr_score, max_score);
}

void solve() {
  ll n, k, pb, ps;
  cin >>n>>k>>pb>>ps;

  v<ll> p(n), a(n);
  for (ll i = 0; i < n; ++i)
    cin >> p[i];
  for (ll i = 0; i < n; ++i)
    cin >> a[i];

  ll max_bodya = bfs(pb, p, a, k);
  ll max_sasha = bfs(ps, p, a, k);

  if (max_bodya > max_sasha)
    cout << "Bodya\n";
  else if (max_bodya < max_sasha)
    cout << "Sasha\n";
  else
    cout << "Draw\n";
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
