# Push_swap

*This project has been created as part of the 42 curriculum by paduarte and lbiosca-.*

---

## Description

Push_swap is a sorting project from the 42 curriculum.

The objective is to sort a stack of integers using only two stacks (`a` and `b`) and a limited set of allowed operations:

- `sa`, `sb`, `ss`
- `pa`, `pb`
- `ra`, `rb`, `rr`
- `rra`, `rrb`, `rrr`

The program outputs the sequence of operations required to sort the input stack in ascending order while minimizing the number of moves.

This version of the project focuses on algorithmic complexity and requires the implementation of multiple sorting strategies, as well as an adaptive algorithm capable of selecting the most appropriate strategy according to the initial disorder of the input.

---

## Features

- Input validation
- Detection of invalid characters
- Detection of integer overflow
- Detection of duplicate values
- Dynamic memory management
- Doubly linked list implementation
- Stack operations compliant with the Push_swap specification
- Index assignment for normalized sorting
- Disorder index calculation
- Multiple sorting strategies
- Adaptive algorithm selection

---

## Compilation

Compile the project:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove object files and executable:

```bash
make fclean
```

Rebuild the project:

```bash
make re
```

---

## Usage

Sort a list of integers:

```bash
./push_swap 4 2 8 1 3
```

Arguments may also be passed as a quoted string:

```bash
./push_swap "4 2 8 1 3"
```

Example:

```bash
./push_swap 3 2 1
```

Output:

```text
pb
sa
pa
```

---

## Data Structure

The project uses a doubly linked list to represent each stack.

```c
typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;
```

### Advantages

- Efficient insertion and removal operations
- Fast stack rotations
- Bidirectional traversal
- Simplified node management

---

## Disorder Index

Before sorting, the program computes a disorder index.

The disorder index measures how far the stack is from being sorted.

For every pair of values:

```text
(i, j) where i < j
```

a mistake is counted whenever:

```text
a[i] > a[j]
```

The disorder index is calculated as:

```text
mistakes / total_pairs
```

Interpretation:

```text
0.0 → already sorted
1.0 → maximum disorder
```

This value is used by the adaptive strategy selector.

---

## Implemented Algorithms

### 1. Simple Algorithm — O(n²)

A basic comparison-based sorting strategy.

#### Characteristics

- Easy to understand
- Suitable for small datasets
- Worst-case complexity: O(n²)

---

### 2. Chunk Sort — O(n√n)

The stack is divided into approximately √n chunks.

#### Process

1. Push values belonging to the current chunk from stack A to stack B.
2. Rotate A when the current value does not belong to the active chunk.
3. Repeat until A becomes empty.
4. Reinsert values from B to A in descending index order.
	- If the max value is closer to the top of B, rotate B is used.
	- If the max value is closer to the bottom of B, reverse rotate B is used.
	- Once the value is on top of B, push it back to A with push A.

#### Advantages

- Fewer operations than quadratic algorithms
- Good performance on medium-sized datasets

---

### 3. Radix Sort — O(n log n)

Bitwise sorting using normalized indexes.

#### Process

1. Assign an index to every value.
2. Process each bit from least significant to most significant.
3. Distribute elements between stacks according to the current bit.
4. Restore all elements to stack A.
5. Repeat for every bit position.

#### Advantages

- Consistent performance
- Excellent scalability
- Efficient for large datasets

---

## Adaptive Strategy

The adaptive strategy automatically selects the most suitable algorithm according to the disorder index.

### Selection Rules

| Disorder Index | Strategy | Complexity |
|----------------|----------|------------|
| < 0.20 | Simple Sort | O(n) / Near-sorted optimization |
| 0.20 - 0.49 | Chunk Sort | O(n√n) |
| ≥ 0.50 | Radix Sort | O(n log n) |

### Rationale

- Nearly sorted stacks require very few corrections.
- Moderately disordered stacks benefit from chunk partitioning.
- Highly disordered stacks are handled efficiently by radix sort.

This strategy is executed automatically by default.

---

## Error Handling

The program prints:

```text
Error
```

to standard error when:

- Invalid characters are provided
- Integer overflow occurs
- Duplicate values are detected
- Memory allocation fails

### Examples

```bash
./push_swap 1 2 2
```

```bash
./push_swap 42 hello 7
```

```bash
./push_swap 999999999999999999999
```

---

## Complexity Analysis

| Strategy | Time Complexity |
|-----------|----------------|
| Simple Sort | O(n²) |
| Chunk Sort | O(n√n) |
| Radix Sort | O(n log n) |
| Adaptive Strategy | Depends on disorder index |

### Space Complexity

```text
O(n)
```

for all implemented strategies.

---

## Team Contributions

Both students participated in the design, implementation, testing, debugging and optimization of the project.

### paduarte

- Stack data structure implementation
- Parsing and input validation
- Error handling
- Memory management
- Stack operations (`sa`, `sb`, `ss`, `pa`, `pb`)
- Index assignment
- Radix sort implementation
- Testing and Valgrind verification

### lbiosca-

- Disorder index implementation
- Adaptive strategy design
- Stack operations (`ra`, `rb`, `rr`,  `rra`, `rrb`, `rrr`)
- Insertion sort implementation
- Documentation
- Performance optimization

### Shared Responsibilities

- Project architecture
- Chunk-sort implementation
- Debugging
- Code reviews
- Algorithm selection
- Final testing

---

## Testing

The project has been tested with:

- Small datasets
- Medium datasets
- Large random datasets
- Duplicate values
- Invalid inputs
- Integer overflow cases
- Memory leak checks using Valgrind

Example:

```bash
valgrind --leak-check=full ./push_swap "3 2 1"
```

Expected result:

```text
All heap blocks were freed -- no leaks are possible
```

---

## References

### Documentation

- The C Programming Language — Kernighan & Ritchie
- Linux Man Pages
- 42 Documentation

### Algorithms

- Radix Sort
- Chunk-Based Sorting
- Big-O Complexity Analysis

---

## Use of AI

AI tools were used as learning and review assistants for:

- Complexity analysis
- Algorithm design discussions
- Debugging guidance
- Documentation drafting

All final code, testing, validation and design decisions were implemented and reviewed by the project authors.