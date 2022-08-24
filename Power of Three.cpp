class Solution {
public:
    bool isPowerOfThree(int n) {
          long long int temp;
      int power = 0;
      while (1) {
        temp = pow(3, power);
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