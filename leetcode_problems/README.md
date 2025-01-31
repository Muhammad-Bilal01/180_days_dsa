# Leetcode Problems

## [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/description/)

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use `pow(x, 0.5)` in c++ or `x ** 0.5` in python.

```cpp
// Linear Approch
int sqrt(int x)
{
    // If x is 0 or 1, return x itself as the square root
    if (x == 0 || x == 1)
    {
        return x;
    }

    // Iterate from 2 to x-1 to find the square root
    for (long i = 2; i < x; i++)
    {
        // If i * i equals x, return i as the exact perfect square root
        if (i * i == x)
        {
            return i;
        }
        // If i * i exceeds x, return i - 1 as the integer square root
        else if (i * i > x)
        {
            return i - 1;
        }
    }

    // If no exact square root is found, return x - 1 (shouldn't normally reach here)
    return x - 1;
}

```

**Explanation:**

```text
- 0 ka square-root hamesha 0 hoga
- 1 ka square-root hamesha 1 hoga

phr hm ne 2 se ek loop start kraa q k 2 se chota sqrt nhi aata

- check kru agr loop counter `i` ka multiple `(i*i)` equal hu `x` k, tu return kr du i ko.
- agr `(i*i)` greater than ho `x` se tu `i` ki last value return kr du. like `(i - 1)`.

agr loop se answer nhi mile tu return kr du `x - 1`.

```
