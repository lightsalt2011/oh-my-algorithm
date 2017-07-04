
#### Sorting algorithms

* [Bubble Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/bubble-sort) [(wiki)](http://en.wikipedia.org/wiki/Bubble_sort)
* [Selection Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/selection-sort) [(wiki)](http://en.wikipedia.org/wiki/Selection_sort)
* [Insertion Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/insertion-sort) [(wiki)](http://en.wikipedia.org/wiki/Insertion_sort)
* [Shell Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/shell-sort) [(wiki)](http://en.wikipedia.org/wiki/Shellsort)
* [Merge Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/merge-sort) [(wiki)](http://en.wikipedia.org/wiki/Merge_sort)
* [Heap Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/heap-sort) [(wiki)](http://en.wikipedia.org/wiki/Heapsort)
* [Quick Sort](https://github.com/arnauddri/algorithms/tree/master/algorithms/sorting/quick-sort) [(wiki)](http://en.wikipedia.org/wiki/Quicksort)




|  method   |    avg    |   best    |   worst   |  space   | place | stability |
| :-------: | :-------: | :-------: | :-------: | :------: | :---: | :-------: |
|  bubble   |  O(n^2)   |   O(n)    |  O(n^2)   |   O(1)   |  in   |     y     |
| selection |  O(n^2)   |  O(n^2)   |  O(n^2)   |   O(1)   |  in   |     n     |
| insertion |  O(n^2)   |   O(n)    |  O(n^2)   |   O(1)   |  in   |     y     |
|   shell   | O(nlog2n) | O(nlog2n) | O(nlog2n) |   O(1)   |  in   |     n     |
|   merge   | O(nlogn)  | O(nlogn)  | O(nlogn)  |   O(n)   |  out  |     y     |
|   heap    | O(nlogn)  | O(nlogn)  | O(nlogn)  |   O(1)   |  in   |     n     |
|   quick   | O(nlogn)  | O(nlogn)  |  O(n^2)   | O(logn)  |  in   |     n     |
| counting  | O(n + k)  | O(n + k)  | O(n + k)  |   O(k)   |  out  |     y     |
|  bucket   | O(n + k)  | O(n + k)  |  O(n^2)   | O(n + k) |  out  |     y     |
|   radix   | O(n * k)  | O(n * k)  | O(n * k)  | O(n + k) |  out  |     y     |