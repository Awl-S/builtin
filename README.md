# bultin

# GCC/Clang Built-in Functions Documentation

## Introduction
GCC and Clang compilers provide a set of built-in functions (`__builtin_*`) that allow programmers to directly utilize low-level operations, optimize code, and access processor-specific features. These functions are often mapped to hardware instructions or implemented in an efficient manner by the compiler.

---

## 1. Bit Manipulation Functions
These functions operate on bit-level representations of integers.

### `__builtin_popcount`
- **Description**: Counts the number of set bits (1s) in the binary representation of an `unsigned int`.
- **Parameters**:
  - `unsigned int x`: The input number.
- **Return Value**: The number of 1s in the binary representation of `x`.

### `__builtin_popcountl`
- **Description**: Counts the number of set bits in an `unsigned long`.
- **Parameters**:
  - `unsigned long x`: The input number.
- **Return Value**: The number of 1s in the binary representation of `x`.

### `__builtin_popcountll`
- **Description**: Counts the number of set bits in an `unsigned long long`.
- **Parameters**:
  - `unsigned long long x`: The input number.
- **Return Value**: The number of 1s in the binary representation of `x`.

### `__builtin_ctz`
- **Description**: Counts the number of trailing zeros in an `unsigned int`.
- **Parameters**:
  - `unsigned int x`: The input number.
- **Return Value**: The number of trailing zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_ctzl`
- **Description**: Counts the number of trailing zeros in an `unsigned long`.
- **Parameters**:
  - `unsigned long x`: The input number.
- **Return Value**: The number of trailing zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_ctzll`
- **Description**: Counts the number of trailing zeros in an `unsigned long long`.
- **Parameters**:
  - `unsigned long long x`: The input number.
- **Return Value**: The number of trailing zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_clz`
- **Description**: Counts the number of leading zeros in an `unsigned int`.
- **Parameters**:
  - `unsigned int x`: The input number.
- **Return Value**: The number of leading zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_clzl`
- **Description**: Counts the number of leading zeros in an `unsigned long`.
- **Parameters**:
  - `unsigned long x`: The input number.
- **Return Value**: The number of leading zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_clzll`
- **Description**: Counts the number of leading zeros in an `unsigned long long`.
- **Parameters**:
  - `unsigned long long x`: The input number.
- **Return Value**: The number of leading zeros in the binary representation of `x`. Returns undefined if `x` is 0.

### `__builtin_parity`
- **Description**: Returns the parity of the number of 1s in an `unsigned int`. Returns 1 if the number of 1s is odd, otherwise 0.
- **Parameters**:
  - `unsigned int x`: The input number.
- **Return Value**: `1` if the number of 1s is odd, `0` otherwise.

### `__builtin_parityl`
- **Description**: Returns the parity of the number of 1s in an `unsigned long`.
- **Parameters**:
  - `unsigned long x`: The input number.
- **Return Value**: `1` if the number of 1s is odd, `0` otherwise.

### `__builtin_parityll`
- **Description**: Returns the parity of the number of 1s in an `unsigned long long`.
- **Parameters**:
  - `unsigned long long x`: The input number.
- **Return Value**: `1` if the number of 1s is odd, `0` otherwise.

---

## 2. Arithmetic Overflow Functions
These functions detect overflow conditions during arithmetic operations.

### `__builtin_add_overflow`
- **Description**: Performs addition and checks for overflow.
- **Parameters**:
  - `T x`: The first operand.
  - `T y`: The second operand.
  - `T* result`: Pointer to store the result.
- **Return Value**: Returns `1` if overflow occurred, `0` otherwise.

### `__builtin_sub_overflow`
- **Description**: Performs subtraction and checks for overflow.
- **Parameters**:
  - `T x`: The first operand.
  - `T y`: The second operand.
  - `T* result`: Pointer to store the result.
- **Return Value**: Returns `1` if overflow occurred, `0` otherwise.

### `__builtin_mul_overflow`
- **Description**: Performs multiplication and checks for overflow.
- **Parameters**:
  - `T x`: The first operand.
  - `T y`: The second operand.
  - `T* result`: Pointer to store the result.
- **Return Value**: Returns `1` if overflow occurred, `0` otherwise.

---

## 3. Memory Manipulation Functions
These functions provide efficient ways to manipulate memory blocks.

### `__builtin_memcpy`
- **Description**: Copies a block of memory from the source to the destination.
- **Parameters**:
  - `void* dest`: Destination pointer.
  - `const void* src`: Source pointer.
  - `size_t n`: Number of bytes to copy.
- **Return Value**: Returns a pointer to the destination (`dest`).

### `__builtin_memset`
- **Description**: Fills a block of memory with a specific value.
- **Parameters**:
  - `void* dest`: Pointer to the memory block to fill.
  - `int c`: The value to fill.
  - `size_t n`: Number of bytes to fill.
- **Return Value**: Returns a pointer to the destination (`dest`).

### `__builtin_memmove`
- **Description**: Moves a block of memory from the source to the destination. Handles overlapping memory safely.
- **Parameters**:
  - `void* dest`: Destination pointer.
  - `const void* src`: Source pointer.
  - `size_t n`: Number of bytes to move.
- **Return Value**: Returns a pointer to the destination (`dest`).

---

## 4. Control Flow Optimization
These functions provide hints to the compiler for optimizing control flow.

### `__builtin_expect`
- **Description**: Provides the compiler with branch prediction information.
- **Parameters**:
  - `long exp`: The expression to evaluate.
  - `long c`: The expected value of the expression.
- **Return Value**: Returns the value of `exp`. The compiler optimizes for the assumption that `exp == c`.

---

## 5. Type Checking and Constants
These functions help in type checking and constant evaluation.

### `__builtin_types_compatible_p`
- **Description**: Checks whether two types are compatible.
- **Parameters**:
  - `T1`: The first type.
  - `T2`: The second type.
- **Return Value**: Returns `1` if the types are compatible, otherwise `0`.

### `__builtin_constant_p`
- **Description**: Checks if a value is a compile-time constant.
- **Parameters**:
  - `exp`: The expression to check.
- **Return Value**: Returns `1` if the expression is a compile-time constant, otherwise `0`.

---

## 6. Math and Utility Functions
These functions provide basic mathematical and utility operations.

### `__builtin_abs`
- **Description**: Returns the absolute value of an integer.
- **Parameters**:
  - `int x`: The input integer.
- **Return Value**: The absolute value of `x`.

### `__builtin_labs`
- **Description**: Returns the absolute value of a `long` integer.
- **Parameters**:
  - `long x`: The input integer.
- **Return Value**: The absolute value of `x`.

### `__builtin_llabs`
- **Description**: Returns the absolute value of a `long long` integer.
- **Parameters**:
  - `long long x`: The input integer.
- **Return Value**: The absolute value of `x`.

---

## Notes
1. These built-in functions are platform-specific and optimized by the compiler.
2. Some functions, such as `__builtin_expect`, may not provide runtime benefits on all platforms but assist in compiler optimization.
3. Functions like `__builtin_popcount` may leverage hardware instructions (e.g., POPCNT) if supported by the CPU.
