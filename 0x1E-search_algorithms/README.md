# C - Search Algorithms

0. Linear search 
1. Binary search 
2. time complexity (worst case) of a linear search in an array of size n
3. space complexity (worst case) of an iterative linear search algorithm in an array of size n
4. time complexity (worst case) of a binary search in an array of size n
5. space complexity (worst case) of a binary search in an array of size n
6. space complexity of this function / algorithm
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

* time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)
* time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)
* time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)
