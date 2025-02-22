# Reverse Polish Notation (Infix to Postfix Converter)

## 📌 Project Overview
The **Reverse Polish Notation** (RPN) converter is a C-based program that efficiently converts infix expressions to postfix notation (also known as Reverse Polish Notation). It utilizes stack-based operations to ensure correct precedence and associativity of operators.

## 🚀 Features
- ✅ **Handles Infix Expressions** – Converts standard infix notation to postfix.
- ✅ **Operator Precedence Management** – Ensures correct precedence of operators.
- ✅ **Parentheses Handling** – Correctly processes expressions with `()`.
- ✅ **Edge Case Handling** – Includes test cases covering various scenarios.
- ✅ **Efficient Stack Implementation** – Uses stack data structure for conversion.

## 🏗️ Technologies Used
- **Programming Language:** C
- **Data Structures:** Stack (Array-based implementation)

## 🔧 Installation & Setup
1. **Clone the Repository**
   ```sh
   git clone https://github.com/pvashisth-07/Reverse-Polish-Notation.git
   cd Reverse-Polish-Notation
   ```
2. **Compile the Code**
   ```sh
   gcc infix_to_postfix.c -o infix_to_postfix
   ```
3. **Run the Program**
   ```sh
   ./infix_to_postfix
   ```

## 🖥️ Sample Run (Test Cases)
```
Enter infix: A + ( B - C ) * D
Postfix is: A B C - D * +

Enter infix: A * ( B + C * D )
Postfix is: A B C D * + *

Enter infix: ( A + B ) / ( C - D ) * E
Postfix is: A B + C D - / E *

Enter infix: ( A + B * ( C - D ) ) ^ E
Postfix is: A B C D - * + E ^

Enter infix: A * ( B + C / D ) - E
Postfix is: A B C D / + * E -
```

## 📜 Usage Guide
- Run the program and enter an infix expression when prompted.
- The program will output the corresponding postfix notation.

### 🔎 Example Test Cases
#### **Input & Output Examples**
| Infix Expression | Postfix Expression |
|------------------|-------------------|
| `A + ( B - C ) * D` | `A B C - D * +` |
| `A * ( B + C * D )` | `A B C D * + *` |
| `( A + B ) / ( C - D ) * E` | `A B + C D - / E *` |
| `( A + B * ( C - D ) ) ^ E` | `A B C D - * + E ^` |
| `A * ( B + C / D ) - E` | `A B C D / + * E -` |

## 💡 Future Enhancements
- Implement **error handling** for invalid expressions.
- Support for **floating-point numbers** in expressions.
- Extend support for **additional operators**.

## 🤝 Contribution
Feel free to contribute by:
- Reporting bugs 🐞
- Suggesting new features ✨
- Improving documentation 📖

## 📞 Contact
For any queries, reach out to me via:
- 📧 Email: pvashisth0711@gmail.com
- 🔗 GitHub: [pvashisth-07](https://github.com/pvashisth-07)
- 🔗 LinkedIn: [Pranav Vashisth](https://www.linkedin.com/in/pranav-vashisth/)

---
_Enjoy Efficient Expression Conversion! 🔢_

