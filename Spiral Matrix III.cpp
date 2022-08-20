class Solution {
  public:
    vector < vector < int >> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
      vector < vector < int >> ans;
      int len = 0;
      int d = 0;
      int i = 0;
      int directions[] = {
        0,
        1,
        0,
        -1,
        0
      };
      ans.push_back({
        rStart,
        cStart
      });

      i++;
      while (i < rows * cols) {
        if (d == 0 || d == 2)
          len++;
        for (int k = 0; k < len; k++) {
          rStart = rStart + directions[d];
          cStart = cStart + directions[d + 1];
          if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols) {
            ans.push_back({
              rStart,
              cStart
            });
            i++;
          }
        }
        d = ++d % 4;

      }

      return ans;
    }
};