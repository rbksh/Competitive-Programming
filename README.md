# Competitive Programming Workspace

**Algorithmic Problem Solving and Pattern Recognition**

This repository serves as a centralized, version-controlled archive of my competitive programming submissions, algorithmic templates, and mathematical scratchpads. It spans multiple online judges and is designed strictly for local testing, rapid iteration, and tracking long-term algorithmic growth.

---

## The Problem Statement

Algorithmic problem solving is a perishable skill. Without consistent practice under time constraints, pattern recognition degrades, implementation speed slows down, and mathematical intuitions fade. Furthermore, solving problems across isolated platforms (Codeforces, AtCoder, LeetCode) leads to fragmented knowledge, making it difficult to review past logic or reuse complex data structures like Segment Trees or custom polynomial identities. 

## The Solution

This repository acts as a unified knowledge base and execution environment. Rather than writing code directly into browser editors, every problem is solved locally. This forces accountability, allows for aggressive local debugging, and builds a personalized, searchable library of successful algorithms. It is a raw record of progress, reflecting both the streaks and the inevitable struggle of pushing through difficult problem sets.

## Repository Architecture

As seen in the file Screenshot 2026-08-30 at 9.04.14 PM.jpg, the workspace is strictly categorized by platform and utility to maintain a clean execution environment.

*   **Platform Directories (`Atcoder`, `Codechef`, `Codeforces`, `CSES`, `Leetcode`):** Isolated folders containing solutions specific to each judge's problem sets.
*   **`Templates/`:** A heavily optimized C++ boilerplate library containing pre-written implementations for graphs, dynamic programming, number theory, and fast I/O.
*   **`Notes/`:** Text files and scratchpads for breaking down complex logic (e.g., specific edge cases for algorithmic problems).
*   **`.cph/`:** Configuration directory for the Competitive Programming Helper extension, enabling automated downloading and testing of sample test cases.
*   **`input.txt` & `output.txt`:** The core of the local debugging pipeline, allowing for rapid I/O redirection without manual terminal entry.

## Technical Stack

*   **C++ (99.9%):** The primary language used for all submissions. Chosen for its raw execution speed, deterministic memory management, and the exhaustive Standard Template Library (STL).
*   **Python (0.1%):** Reserved strictly for scripting, generating massive test cases, or handling edge-case problems requiring arbitrary-precision arithmetic.

## Local Environment Setup

The repository is configured for immediate compilation and testing via file redirection. To replicate this local environment:

### 1. Clone the Repository
```bash
git clone [https://github.com/rbksh/Competitive-Programming.git](https://github.com/rbksh/Competitive-Programming.git)
cd Competitive-Programming
```

2. Configure Your Compiler
Ensure you have g++ (GCC) installed. For local debugging, it is recommended to compile with strict warning flags and memory sanitizers to catch out-of-bounds errors before submission.

```Bash
g++ -std=c++17 -Wshadow -Wall -o solution solution.cpp -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG
```

3. Execution Pipeline
The provided C++ templates are designed to automatically detect a local environment and route standard input/output through the local text files.

Paste the problem's sample input into input.txt.

Write your solution in a .cpp file (using the base template).

Run the compiled executable.

Verify the results in output.txt.

```Bash
./solution
```
This setup completely decouples the logic-building phase from the browser, ensuring a distraction-free, highly efficient problem-solving workflow.
git clone [https://github.com/rbksh/Competitive-Programming.git](https://github.com/rbksh/Competitive-Programming.git)
cd Competitive-Programming
