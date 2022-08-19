class Solution {
  public:
    bool isPossible(vector < int > & nums) {
      map < int, int > freq, endingOfSub;
      for (auto x: nums)
        freq[x]++;
      for (auto x: nums) {

        if (!freq[x]) continue;

        freq[x]--;
        if (endingOfSub[x - 1]) {
          endingOfSub[x]++;
          endingOfSub[x - 1]--;
        } else if (freq[x + 1] && freq[x + 2]) {
          endingOfSub[x + 2]++;
          freq[x + 1]--;
          freq[x + 2]--;
        } else {
          return false;
        }
      }
      return true;
    }
};