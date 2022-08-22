class Solution {
  public:
    bool isPowerOfFour(int n) {
      long long int temp;
      int power = 0;
      while (1) {
        temp = pow(4, power);
        power++;
        if (temp > n) {
          break;
        }

        if (temp == n) {
          return true;
        }
      }
      return false;
    }
};