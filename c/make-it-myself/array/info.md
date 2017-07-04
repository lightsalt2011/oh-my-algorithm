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