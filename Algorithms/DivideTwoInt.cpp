class Solution {
public:
  int divide(int A, int B) {
    if (B == INT_MIN)
      return A == INT_MIN ? 1 : 0;
    if (A == INT_MIN) {
      if (B == -1) return INT_MAX;
      return B > 0 ? divide(A + B, B) - 1 : divide(A - B, B) + 1;
    }    
    int a = abs(A);
    int b = abs(B);
    int ans = 0;
    for (int x = 31; x >= 0; --x)
      if (a >> x >= b)
        ans += 1 << x, a -= b << x;
    return (A > 0) == (B > 0) ? ans : -ans;
  }
};