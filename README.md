# Competitive Programming Progress Tracker

This repository serves as a centralized, version-controlled archive of my competitive programming submissions, C++ templates, and CP resources. It spans multiple online judges and is designed strictly for local testing, and tracking long-term algorithmic growth.

---

## The Problem Statement: Why? 

Algorithmic problem solving is a perishable skill. Furthermore, solving problems across isolated platforms (Codeforces, AtCoder, LeetCode, CodeChef) leads to fragmented knowledge, making it hard to review past submissions or revisit learning gained while competing or solving problems. 

## The Solution: How?

This repository acts as a unified knowledge base and execution environment. Instead of writing code directly in browser editors, every problem is solved locally in Visual Studio Code. This forces accountability, allows for aggressive local debugging, and builds a personalized, searchable library of successful submissions.

Chrome Extensions: Competitive Companion, CF Analytics, Codeforces Lite(because I hate light mode), CPH Submit  VS Code Extensions: CPH(Competitive Programming Helper), C/C++ Debug

## Repository Architecture

The workspace is strictly categorized by platform and utility to maintain a clean execution environment.

*   **Platform Directories (`Atcoder`, `Codechef`, `Codeforces`, `CSES`, `Leetcode`):** Isolated folders containing solutions specific to each judge's problem sets.
*   **` Templates/`:** A heavily optimized C++ boilerplate library containing pre-written implementations for graphs, dynamic programming, number theory, and fast I/O (most of which are taken from submissions of top competitive programmers).
*   **` Notes/`:** Resources, PDFs, and lecture notes to revise topics in detail.
*   **`input.txt` & `output.txt`:** For testing my submission against test cases, where I can enter the input in a separate text file and receive the output in a separate text file. 

## Local Environment Setup

To replicate this local environment:

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
```bash
git clone [https://github.com/rbksh/Competitive-Programming.git](https://github.com/rbksh/Competitive-Programming.git)
cd Competitive-Programming
```
