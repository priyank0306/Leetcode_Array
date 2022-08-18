/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
    vector < vector < int >> spiralMatrix(int m, int n, ListNode * head) {
      vector < vector < int >> ans;
      ListNode * trav = head;
      for (int i = 0; i < m; i++) {
        vector < int > temp;
        for (int j = 0; j < n; j++) {
          temp.push_back(-1);
        }
        ans.push_back(temp);

      }

      int top = 0;
      int bottom = m - 1;
      int left = 0;
      int right = n - 1;
      int dir = 0;
      int check = 1;
      while (top <= bottom && left <= right) {
        if (trav == NULL)
          break;
        if (dir == 0) {
          for (int i = left; i <= right; i++) {
            if (trav == NULL)
              break;
            ans[top][i] = trav -> val;

            trav = trav -> next;

          }
          top++;
          dir = 1;
        }
        if (trav == NULL)
          break;
        else if (dir == 1) {
          if (trav == NULL)
            break;
          for (int i = top; i <= bottom; i++) {
            if (trav == NULL)
              break;
            ans[i][right] = trav -> val;

            trav = trav -> next;

          }
          right--;
          dir = 2;
        }
        if (trav == NULL)
          break;
        else if (dir == 2) {
          if (trav == NULL)
            break;
          for (int i = right; i >= left; i--) {
            if (trav == NULL)
              break;
            ans[bottom][i] = trav -> val;

            trav = trav -> next;

          }
        }
        bottom--;
        dir = 3;

        if (trav == NULL)
          break;
        else if (dir == 3) {
          if (trav == NULL)
            break;
          for (int i = bottom; i >= top; i--) {
            if (trav == NULL)
              break;
            ans[i][left] = trav -> val;
            cout << check++ << "\t";

            trav = trav -> next;

          }
          left++;
          dir = 0;
        }
      }
      // ans[0][1]=1;
      // cout<<ans[0][1];
      return ans;
    }
};