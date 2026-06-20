# 🟨 JavaScript Assignment – Week 2

**IGNITE'26 — Web Development / Programming Domain**

Welcome to **Week 2**! 🚀
This week's assignment focuses on learning the fundamentals of:

- Core JavaScript Concepts
- Variables & Data Types
- Operators & Conditional Statements
- Loops
- Strings
- Arrays
- Functions & Methods

By completing this assignment, you'll build comfort with the basics of JavaScript and be able to write simple programs on your own.

---

## 🎯 Learning Objectives

- Understand core JavaScript syntax and data types
- Practice using operators, conditionals, and loops
- Work confidently with strings and arrays
- Write and use functions effectively
- Build problem-solving skills through small coding challenges

---

## 📋 Part A: Theoretical Questions (10 Questions)

**Ques 1:** What will be the output of the following code? Explain why.

```javascript
console.log(typeof a);   // ?
console.log(typeof b);   // ? 

var a = 5;
let b = "hello";
```

**Ques 2:** What will be the output? Explain the type conversion happening.

```javascript
console.log("10" + 5);      // ?
console.log("10" - 5);      // ?
console.log(10 + true);     // ?
console.log("5" == 5);      // ?
console.log("5" === 5);     // ?
```

**Ques 3:** Write code to:

- Declare a variable using `var`, `let`, and `const`, and explain one key difference between them.
- Swap the values of two variables without using a third variable.
- Check whether a given number is even or odd using an `if-else` statement.

**Ques 4:** Explain the difference between `==` and `===` in JavaScript with at least two examples.

**Ques 5:** What will be the output of the following code? Explain the loop execution step by step.

```javascript
for (let i = 1; i <= 5; i++) {
  if (i === 3) continue;
  if (i === 5) break;
  console.log(i);
}
```

**Ques 6:** Explain the difference between a `for` loop, a `while` loop, and a `do-while` loop. When would you use each?

**Ques 7:** Write code to convert:

- String `"Hello World"` to uppercase and lowercase
- A sentence into an array of words
- An array of words back into a single sentence

**Ques 8:** What's the difference between a function declaration and a function expression? Give one example of each.

**Ques 9:** Explain the difference between an array and an object in JavaScript. When would you use one over the other?

**Ques 10:** What will be the output of the following code? Explain the array method being used.

```javascript
const nums = [10, 20, 30, 40, 50];

console.log(nums.length);        // ?
console.log(nums[2]);            // ?
console.log(nums.includes(40));  // ?
```

---

## 💻 Part B: Practical Coding Questions (10 Questions)

### Ques 11. Number Properties

Write a function that takes a number and returns whether it is:

- Positive, Negative, or Zero
- Even or Odd
- A prime number (using a loop)

### Ques 12. Pattern Printing

Using nested loops, write code to print the following pattern (for `n = 5`):

```
*
* *
* * *
* * * *
* * * * *
```

### Ques 13. String Operations

Write a function that takes a string and:

- Counts the number of vowels in it
- Reverses the string (without using built-in `reverse()`)
- Checks if the string is a palindrome

### Ques 14. Array Basics

Given the following array, write code to:

```javascript
const marks = [45, 67, 23, 89, 12, 95, 56];
```

- Find the highest and lowest marks
- Calculate the average marks
- Count how many students scored above 50

### Ques 15. Array Methods (push, pop, map, filter)

Given the array of numbers below, write code to:

```javascript
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
```

- Add the number `11` to the end and remove the first number
- Create a new array containing only even numbers (using `filter`)
- Create a new array where every number is doubled (using `map`)

### Ques 16. Functions & Default Parameters

Write a function `calculateBill(amount, discount)` that:

- Applies the discount (as a percentage) to the amount
- Uses a default discount of 10% if none is provided
- Returns the final amount, rounded to 2 decimal places

### Ques 17. Simple Calculator

Write a function `calculator(num1, num2, operator)` that performs addition, subtraction, multiplication, or division based on the operator passed in (`'+'`, `'-'`, `'*'`, `'/'`). Handle the case of division by zero.

### Ques 18. Object Basics

Create an object named `car` with properties: `brand`, `model`, `year`, and `price`. Then write code to:

- Print all property values using dot notation
- Add a new property called `color`
- Update the `price` property

### Ques 19. Working with Loops and Arrays Together

Write a function that takes an array of names and returns a new array where each name is greeted, for example: `"Hello, Alice!"`. Use a loop (not a built-in array method) to do this.

### Ques 20. Mini Logic Challenge

Write a function `findSecondLargest(arr)` that takes an array of numbers and returns the second largest number in the array, without using `sort()`.

---

## ⚠️ Note

- Assignment to be submitted by 21 June, 2026.
- Attempt this using only the concepts covered in this week's playlist — no external libraries.
- Do **not** use ChatGPT or any AI tool. Write and test the code yourself.
- Comment your code where logic might not be obvious.

---

## 🚀 Happy Coding!

Build, test, debug, and keep learning.
