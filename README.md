# AlgoSphere — DSA Visualizer & Complexity Lab

An interactive Data Structures and Algorithms learning tool built with HTML, CSS, JavaScript, and C examples. Visualize sorting, inspect operation counts, and compare algorithmic trade-offs.

## Features
- Animated visualizer for Bubble, Selection, Insertion, and Quick sort
- Step-by-step execution with pause/run controls
- Adjustable array size and animation speed
- Comparison and array-access counters
- Time/space complexity notes and C implementation snippets
- Searching and complexity learning sections
- Responsive desktop and mobile interface
- No build tools or JavaScript frameworks required

## Run it
Open `index.html` in a modern browser, or enable GitHub Pages from **Settings → Pages → Deploy from a branch → main (or your default branch) → /(root) → Save**.

Live hosting note: GitHub Pages supports this project's HTML, CSS, and JavaScript. The C snippets are educational examples; they are not executed by the browser.

## Project structure
```text
AlgoSphere/
├── index.html
├── style.css
├── app.js
├── c-algorithms/
│   └── algorithms.c
├── README.md
└── .gitignore
```

## Complexity reference

| Algorithm | Best | Average | Worst | Extra space |
|---|---:|---:|---:|---:|
| Bubble sort (optimized) | O(n) | O(n²) | O(n²) | O(1) |
| Selection sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion sort | O(n) | O(n²) | O(n²) | O(1) |
| Quick sort | O(n log n) | O(n log n) | O(n²) | O(log n) average |

## Suggested test plan
- Run each sorting algorithm on small and large arrays.
- Use Step repeatedly and verify counters increase.
- Shuffle and rerun; check the final bars are ascending.
- Change speed during an execution.
- Test at mobile and desktop widths.
- Confirm the displayed complexity changes with the selected algorithm.

## Next-level extensions
Add Merge Sort and Heap Sort, implement a real binary search animation, add automated unit tests, and introduce a benchmark view comparing operation counts across input sizes.

## Portfolio note
This is an educational visualization, not a formal benchmarking tool. Browser animation timing includes rendering and scheduling overhead and should not be treated as a precise algorithm performance benchmark.
