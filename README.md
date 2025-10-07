# 🚀 LeetCode Solutions

My personal collection of LeetCode problem solutions, organized by topic and difficulty. This repository documents my journey in mastering data structures, algorithms, and problem-solving patterns.

## 📊 Progress Overview

![Problems Solved](https://img.shields.io/badge/Problems%20Solved-2-brightgreen)
![Easy](https://img.shields.io/badge/Easy-1-success)
![Medium](https://img.shields.io/badge/Medium-1-orange)
![Hard](https://img.shields.io/badge/Hard-0-red)

## 📚 Problems by Category

### Hash Table
| # | Title | Difficulty | Solution | Key Concepts |
|---|-------|------------|----------|--------------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | [C++](./hash-table/two-sum.cpp) | Hash Map, Complement Search |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | [C++](./hash-table/longest-substring.cpp) | Sliding Window, Hash Map |

### Array
| # | Title | Difficulty | Solution | Key Concepts |
|---|-------|------------|----------|--------------|
| Coming soon... | | | | |

### String
| # | Title | Difficulty | Solution | Key Concepts |
|---|-------|------------|----------|--------------|
| Coming soon... | | | | |

### Two Pointers
| # | Title | Difficulty | Solution | Key Concepts |
|---|-------|------------|----------|--------------|
| Coming soon... | | | | |

### Sliding Window
| # | Title | Difficulty | Solution | Key Concepts |
|---|-------|------------|----------|--------------|
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | [C++](./sliding-window/longest-substring.cpp) | Variable Window, Hash Map |

## 🎯 Problem-Solving Patterns

### 1. Hash Table Pattern
**When to use**: Finding pairs, complements, or tracking seen elements

**Key Operations**:
- `unordered_map<KeyType, ValueType>` for O(1) lookups
- `find()` to check if element exists
- Store value → index or value → frequency mappings

**Problems**: Two Sum, Group Anagrams, Valid Anagram

### 2. Sliding Window Pattern
**When to use**: Finding optimal substrings/subarrays with constraints

**Key Components**:
- Two pointers: `left` and `right`
- Window length: `right - left + 1`
- Expand window by moving `right`
- Contract window by moving `left`

**Problems**: Longest Substring Without Repeating Characters, Minimum Window Substring

### 3. Two Pointers Pattern
**When to use**: Searching pairs in sorted arrays, removing duplicates

**Common approaches**:
- Opposite ends: `left = 0, right = n-1`
- Same direction: both start at 0, move at different speeds
- Fast & slow pointers for cycle detection

**Problems**: Container With Most Water, Remove Duplicates

## 💡 Key Learnings

### Hash Table Insights
- Always use `find()` instead of direct `[]` access to avoid creating unwanted entries
- `find(key) != map.end()` checks if key exists
- Common pattern: store complement/target for O(1) lookup

### Sliding Window Insights
- Maintain window invariant (no duplicates, sum ≤ k, etc.)
- Hash table tracks elements in current window
- Formula: `windowLength = right - left + 1`
- Remember to check condition `>= left` for elements in current window

### Time Complexity Patterns
- Nested loops: O(n²) → Usually can optimize
- Single pass with hash table: O(n)
- Sliding window: O(n) even with inner operations
- Binary search: O(log n)

## 🛠️ Technologies Used

- **Language**: C++ (C++11 and above)
- **Compiler**: g++ / clang++
- **Standard Library**: STL (unordered_map, vector, string, etc.)

## 📁 Repository Structure

```
leetcode/
├── hash-table/
│   ├── two-sum.cpp
│   └── longest-substring.cpp
├── array/
├── string/
├── sliding-window/
├── two-pointers/
└── README.md
```

## 🔧 How to Use

### Compile and Run
```bash
# Compile a solution
g++ -std=c++11 hash-table/two-sum.cpp -o two-sum

# Run the executable
./two-sum
```

### Test with Custom Input
Each solution includes a `main()` function with test cases. Modify the test cases as needed:

```cpp
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto result = solution.twoSum(nums, target);
    // Test your solution
}
```

## 📈 Study Plan

- [x] Week 1: Hash Table fundamentals
- [x] Week 2: Sliding Window technique
- [ ] Week 3: Two Pointers
- [ ] Week 4: Binary Search
- [ ] Week 5: Dynamic Programming basics
- [ ] Week 6: Trees and Graphs

## 🎓 Resources

- [LeetCode](https://leetcode.com/) - Problem platform
- [NeetCode](https://neetcode.io/) - Curated problem lists and explanations
- [Big-O Cheat Sheet](https://www.bigocheatsheet.com/) - Time/space complexity reference
- [C++ STL Documentation](https://en.cppreference.com/) - Standard library reference

## 🤝 Contributing

This is a personal learning repository, but feel free to:
- Open issues for bugs or improvements
- Suggest alternative solutions
- Share optimization ideas

## 📝 Notes

- Solutions prioritize clarity and understanding over extreme optimization
- Each solution includes comments explaining the approach
- Time and space complexity noted in comments
- Test cases included for verification

## 📫 Connect

Feel free to reach out if you want to discuss solutions or problem-solving approaches!

---

⭐ **Star this repo** if you find it helpful!

**Last Updated**: October 2025