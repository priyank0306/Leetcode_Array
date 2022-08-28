class Solution {
  public:
    vector < vector < int >> diagonalSort(vector < vector < int >> & mat) {
      int n = mat.size();
      int m = mat[0].size();
      vector < vector < int >> ans;
      vector < int > r;
      for (int i = 0; i < m; i++) {
        r.push_back(-1);
      }
      for (int i = 0; i < n; i++) {
        ans.push_back(r);
      }

      for (int i = 0; i < n; i++) {
        int j = 0;
        int temp1 = i;
        int temp2 = j;
        vector < int > s;
        while (temp1 < n && temp2 < m) {
          s.push_back(mat[temp1][temp2]);
          temp1++;
          temp2++;

        }
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());

        temp1 = i;
        temp2 = j;
        while (temp1 < n && temp2 < m) {
          ans[temp1][temp2] = s.back();
          s.pop_back();
          temp1++;
          temp2++;
        }

      }
      for (int i = 0; i < m; i++) {
        int j = 0;
        int temp1 = j;
        int temp2 = i;
        vector < int > s;
        while (temp1 < n && temp2 < m) {
          s.push_back(mat[temp1][temp2]);
          temp1++;
          temp2++;

        }

        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());

        temp1 = j;
        temp2 = i;
        while (temp1 < n && temp2 < m) {
          ans[temp1][temp2] = s.back();

          s.pop_back();

          temp1++;
          temp2++;
        }

      }
      return ans;
    }
};