# Call-by-value-and-reference-in-cpp

**EXPERIMENT – 10A – CALL BY VALUE AND CALL BY REFERENCE IN C++**

**Aim**
To explore and implement *call by value* and *call by reference* in C++, recognizing their differences and practical uses.

**Required Tools**
VS Code or any online C++ compiler.

**Theory**
C++ allows two primary ways to pass parameters to a function:

* **Call by Value**: A copy of the argument is sent to the function. Any modification inside the function affects only this copy, leaving the original variable unchanged.

  ```cpp
  void func(int x) { x = 10; }  // modifies only the local copy
  ```

* **Call by Reference**: The function receives the variable’s address, so changes inside the function directly modify the original variable.

  ```cpp
  void func(int* x) { *x = 10; }  // modifies the original variable
  ```

  C++ also supports *reference parameters* using the `&` operator, another form of call by reference:

  ```cpp
  void func(int& x) { x = 10; }
  ```

**Memory Concepts**

* *Stack Memory*: Stores local variables and parameters.
* *Address Operator (&)*: Retrieves a variable’s memory location.
* *Dereference Operator (*)\*: Accesses the value at a memory address.
* *Pointers*: Variables that hold memory addresses.

**Importance**

* Reduces unnecessary copying of large data.
* Lets you decide when a function should alter original data.
* Improves performance when working with large objects.
* Maintains control over data integrity.

### Programs

1. **Swap Using Call by Value**

   * Declare two integers in `main`.
   * Print initial values.
   * Call a `swap_by_value` function to swap using a temporary variable.
   * Print values again to show no change in the originals.

2. **Swap Using Call by Reference**

   * Declare two integers in `main`.
   * Print initial values.
   * Call `swap_by_reference` while passing variable addresses.
   * Use pointers inside the function to swap the actual values.
   * Print updated values to confirm the swap.

3. **Employee Bonus Checker**

   * Collect employee details: service years, research projects, new projects, and profit contribution.
   * Evaluate criteria and count qualifications (minimum three needed).
   * Pass employee data and a salary pointer to `EmployeeCheck`.
   * If eligible, calculate a 20% bonus via pointer dereferencing and display the updated salary.

4. **In-Place String Reversal**

   * Read a string using `getline`.
   * Pass the string by reference to `ReversingString`.
   * Use a two-pointer method and a `swap_chars` helper with reference parameters to reverse characters in place.
   * Output the reversed string.

**Key learning**
This experiment helped me clearly distinguish between value and reference parameter passing. I learned to work confidently with pointers and memory addresses, which strengthened my understanding of how data is stored and accessed. I can now choose parameter-passing methods that balance efficiency and safety, and I can apply call by reference in real-world tasks such as manipulating data structures or handling large objects without unnecessary copying.

**Applications**
Call by reference is valuable in many practical scenarios. It allows direct editing of arrays, linked lists, and other complex structures without creating extra copies. It also makes it easier to return multiple values from a single function. In system-level programming, call by reference is essential for interacting with hardware. Within object-oriented code, it improves efficiency by passing large objects without copying them. Finally, it supports in-place algorithm implementation, which leads to better overall performance.


### Conclusion

Through this experiment, I clearly understood the difference between **call by value** and **call by reference** in C++. I observed that call by value only works on copies of variables, so the original data stays unchanged, while call by reference lets a function modify the actual variables using pointers or references. By writing programs for swapping values, calculating an employee bonus, and reversing a string, I learned when it is better to protect data and when it is more efficient to update it directly. This activity improved my grasp of pointers, memory handling, and how to design functions more effectively.

