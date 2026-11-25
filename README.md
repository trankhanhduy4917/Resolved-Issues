# Resolved Issues

Competitive programming solutions archive by Tran Khanh Duy (`ITCSIU25014`).

## Structure

- `Code Submission Evaluation System (CSES)/` — CSES Problem Set solutions organized by category.
- `Vietnam Olympiad in Informatics (VNOI)/` — ICPC and VNOJ contest solutions named `<Letter> - <Problem Name>.cpp`.
- `template.cpp` — Standard C++17 template using `#ifdef LOCAL` for local `freopen` file I/O.

## Local Compilation

```bash
g++ -std=c++17 -O2 -DLOCAL "solution.cpp" -o solution.exe
```

Compiling with `-DLOCAL` enables `input.txt` / `output.txt` redirection locally while keeping standard I/O active on online judges.
