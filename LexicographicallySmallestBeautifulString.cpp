/*
A string is beautiful if:

It consists of the first k letters of the English lowercase alphabet.
It does not contain any substring of length 2 or more which is a palindrome.
You are given a beautiful string s of length n and a positive integer k.

Return the lexicographically smallest string of length n, which is larger than s and is beautiful. If there is no such string, return an empty string.

A string a is lexicographically larger than a string b (of the same length) if in the first position where a and b differ, a has a character strictly larger than the corresponding character in b.

For example, "abcd" is lexicographically larger than "abcc" because the first position they differ is at the fourth character, and d is greater than c.
 

Example 1:

Input: s = "abcz", k = 26
Output: "abda"
Explanation: The string "abda" is beautiful and lexicographically larger than the string "abcz".
It can be proven that there is no string that is lexicographically larger than the string "abcz", beautiful, and lexicographically smaller than the string "abda".
Example 2:

Input: s = "dc", k = 4
Output: ""
Explanation: It can be proven that there is no string that is lexicographically larger than the string "dc" and is beautiful.
 

Constraints:

1 <= n == s.length <= 105
4 <= k <= 26
s is a beautiful string.
*/

/*

Intuition
There is one key observation which helps us solve this problem easily. If a substring s[l : r] is palindrome, then the substring s[l + 1 : r - 1] will also be a palindrome, and so on till the length of substring is either 2 or 3. Therefore, for the condition of palindrome, we will only make sure that the substrings of length 2 or 3 are not palindrome.

Approach
Points to note 1:

A string a is lexicographically larger than a string b (of the same length) if in the first position where a and b differ, a has a character strictly larger than the corresponding character in b.

Points to note 2:

Return the lexicographically smallest string of length n, which is larger than s and is beautiful.

According to point 1, if we find a string t and a position i such that t[0 : i] > s[0 : i], also both t[0 : i] and s[0 : i] are beautiful, then we just need to minimize the substring t[i + 1 : ] in order to make the string t lexicographically smallest string as well.

So we will iterate from back (reverse) and find such position i where the above conditions meet. Now we need to make the string lexicographically smallest string as well. So for that we will try to make the substring s[i + 1 : ] as small as possible. If we don't find any suitable i, then there doesn't exist any suitable string, so we simply return empty string.

So we have major 2 tasks:

Finding appropriate i
Making the substring t[i + 1 : ] as small as possible
For Task 1:
For each character in the reverse iteration, we will now iterate over the first k letters of the English lowercase alphabet which are greater than s[i]. We will check at after changing the current character, will it introduce a palindrome of length 2 or 3 in the substring s[0 : i]. If it does not introduce a palindrome, than we can simply change the current character and we also found our i.

For Task 2:
For the substring s[i + 1 : ] to be smallest, we could just make all the charatcters as a. But we also need to make the string beautiful. We cannot also make the remaining substring as ababab.. as this will also introduce a palindrome of length 3. So we can conclude that by using the charaters a, b and c we can fill the remaining array.

So to do so, what we will do is, we will iterate over all the remaining positions of the string, and for all the three characters we will check the palindrome condition of length 2 and 3. We will use the smallest character of the three to put at the respective position.

Time complexity:
In the worst case, for each character in the string we iterate over all the k characters. So the time complexity will be: O(n∗k)O(n * k)O(n∗k).

As k is always less than or equal to 26, we can consider it as constant. So the time complexity will be: O(n)O(n)O(n).

*/



class Solution {
public:
    string smallestBeautifulString(string s, int k) {
        int n = (int) s.size();
        int pos = -1;
        
        for (int i = n - 1; i >= 0 && pos < 0; i--) {
            int cur = s[i] - 'a';
            cur++;
            while (cur < k && pos < 0) {
                bool isPal = false;
                if (i - 1 >= 0 && (s[i - 1] - 'a') == cur) isPal = true;
                if (i - 2 >= 0 && (s[i - 2] - 'a') == cur) isPal = true;
                if (!isPal) {
                    s[i] = (char) (cur + 'a');
                    pos = i;
                }
                cur++;
            }
        }
        
        if (pos < 0) return "";
        
        for (int i = pos + 1; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                bool isPal = false;
                if (i - 1 >= 0 && (s[i - 1] - 'a') == j) isPal = true;
                if (i - 2 >= 0 && (s[i - 2] - 'a') == j) isPal = true;
                if (!isPal) {
                    s[i] = (char) (j + 'a');
                    break;
                }
            }
        }
        
        return s;
    }
};