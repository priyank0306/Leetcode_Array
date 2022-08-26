class Solution {
  public:
    bool reorderedPowerOf2(int n) {
      vector < vector < int >> check;
      int i = 0;
      int ans = 0;
      while (i < 32) {
        vector < int > temp;
        long long int power = pow(2, i);
        while (power > 0) {
          temp.push_back(power % 10);
          power = power / 10;
        }

        sort(temp.begin(), temp.end());
        i++;
        check.push_back(temp);
      }
      vector < int > number;
      while (n > 0) {
        number.push_back(n % 10);
        n = n / 10;
      }
      sort(number.begin(), number.end());

      for (int i = 0; i < check.size(); i++) {
        int flag = 1;
        if (check[i].size() != number.size()) {

          continue;
        } else {
          for (int j = 0; j < number.size(); j++) {
            if (check[i][j] != number[j]) {

              flag = 0;
              break;
            }
          }
          if (flag == 1) {
            ans = 1;
            break;
          }
        }
      }

      if (ans) return true;

      return false;
    }
};