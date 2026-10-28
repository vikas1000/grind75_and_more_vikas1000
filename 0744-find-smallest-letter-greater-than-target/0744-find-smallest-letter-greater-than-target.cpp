class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;
        
        // If the target is greater than or equal to the last character,
        // then by wrap-around rules, the answer is the first character.
        if (target >= letters[right]) {
            return letters[0];
        }
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (letters[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return letters[left];
    }
};