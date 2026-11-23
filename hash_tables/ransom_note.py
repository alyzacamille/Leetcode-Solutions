# Time Complexity: O(m + n), where m = len(magazine) & n = len(ransomNote)
# Space Complexity: O(k), where k = number of distinct characters in magazine
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        letters = {}
        for char in magazine:
            if char in letters:
                letters[char] += 1
            else:
                letters[char] = 1
        
        for char in ransomNote:
            if char in letters:
                letters[char] -= 1
                if letters[char] == 0:
                    del letters[char]
            else:
                return False
        return True
