# POLYMORPHISM IN C++

**Aim:**
To study and implement the concepts of **polymorphism** in C++.

**Tools Used:**
VS Code or Online C++ Compiler

---

## Theory

**Polymorphism** means "many forms" — it allows the same function or operator name to work in different ways depending on the context. In C++, polymorphism can be achieved at **compile-time** (static polymorphism) using:

1. **Constructor Overloading**
2. **Function/Method Overloading**
3. **Operator Overloading**

### Function Overloading

* Same function name can be used with different parameter lists (different number or types of arguments).
* Compiler decides which version to call based on the arguments.

### Constructor Overloading

* A class can have multiple constructors with different parameter lists.
* Useful for creating objects in multiple ways (default, one parameter, many parameters).

### Operator Overloading

* Allows giving new or modified meanings to existing operators when applied to user-defined classes.
* Example: Redefining `<` and `>` for a custom `Number` class.

---

## Programs and Algorithms

### 1) Constructor Overloading – Rectangle Example

**Description:**
Demonstrates constructor overloading by creating rectangles and squares with different constructors.

**Algorithm:**

1. Define class `Rectangle`.
2. Create three constructors:

   * No-argument constructor → prints message.
   * Single-argument constructor → calculates area of square.
   * Two-argument constructor → calculates area of rectangle.
3. In `main()`, create three objects:

   * Default rectangle,
   * Square with side,
   * Rectangle with length and breadth.
4. Display outputs automatically when constructors run.
5. End.

**Key Learning:**
Same class can have multiple constructors for flexible object creation.

---

### 2) Method Overloading – Student Example

**Description:**
Demonstrates method overloading by using the same method `showDetails()` with different parameter lists.

**Algorithm:**

1. Define class `Student`.
2. Overload `showDetails()` with:

   * One parameter (name).
   * Two parameters (name, age).
   * Three parameters (name, age, grade).
   * One integer parameter (roll number).
3. In `main()`, create a `Student` object.
4. Call all four overloaded versions of `showDetails()`.
5. Observe different outputs depending on arguments.
6. End.

**Key Learning:**
Method overloading lets us use the same function name to handle different types of information.

---

### 3) Operator Overloading – Number Example

**Description:**
Demonstrates operator overloading by **reversing the behavior** of `<` and `>` operators.

**Algorithm:**

1. Define class `Number` with private data member `value`.
2. Create constructor to initialize `value`.
3. Overload `<` operator to behave like `>` (i.e., returns true if first value is greater).
4. Overload `>` operator to behave like `<` (i.e., returns true if first value is smaller).
5. In `main()`, create two objects `n1` and `n2`.
6. Use `<` and `>` between them and observe the swapped behavior.
7. Print results accordingly.
8. End.

**Key Learning:**
Operators can be given custom behavior for user-defined classes.

---

## Key Learning Outcomes

* **Constructor Overloading:** Multiple ways to create objects.
* **Method Overloading:** Same method name can be reused for different inputs.
* **Operator Overloading:** Operators can be redefined for custom classes.
* **Compile-time Polymorphism:** Achieved through overloading.
* **Code Reusability:** Overloading avoids having many different function names.

---

## Applications

* **Math Libraries:** Overloading `+`, `-`, `*`, `/` for complex numbers, matrices.
* **Geometry/Graphics:** Different constructors for shapes (square, rectangle, circle).
* **Student/Employee Records:** Method overloading to show details with varying inputs.
* **Game Development:** Custom operator overloading for positions, objects, collisions.

---

## Advantages

* **Simplifies Code:** Same function/operator name for similar tasks.
* **Readability:** Intuitive and logical function calls.
* **Flexibility:** Multiple ways to create and use objects.
* **Reusability:** Reduces duplication of logic.
* **Performance:** Resolved at compile-time, so no runtime cost.
