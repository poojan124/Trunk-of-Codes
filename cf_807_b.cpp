#include <bits/stdc++.h>

using namespace std;

int main() {
  int p, x, y;
  cin >> p >> x >> y;
  for (int s = y; ; s++) {
    if (s % 50 != x % 50) {
      continue;
    }
    bool me = false;
    int i = s / 50 % 475;
    for (int j = 0; j < 25; j++) {
      i = (i * 96 + 42) % 475;
      if (i + 26 == p) {
        me = true;
        break;
      }
    }
    if (me) {
      printf("%d\n", (max(0, s - x) + 50) / 100);
      break;
    }
  }
  return 0;
}
