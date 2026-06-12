# Interface specifications (headers) — Singleton pattern

This header file (`.hpp`) defines the contract and internal structure of the `Constant` class. The architecture of this class was strictly designed to block multiple instantiations and guarantee a global and secure access point to a constant variable (the value of PI).

## Constant class structure

The class declaration is strategically divided into two access scopes to ensure encapsulation and the integrity of the Singleton pattern:

### 1. Private Scope

The private scope is responsible for hiding the creation infrastructure and confidential data from the rest of the system:

* **Static instance (`static Constant* instance`):** A static pointer that stores the single allocated reference to the class in memory. Because it is static, it belongs to the class scope and not to the generated objects, preventing the creation of redundant instances.

* **State variable (`double PI`):** The attribute that stores the mathematical value of the constant.

* **Private constructor:** The constructor signature is restricted to the scope of the class itself. This strictly prevents external classes from invoking the constructor using the `new` operator or stack allocation.

### Public Scope

The public scope defines the user interaction interface with the class, operating under strict security measures:

* **Cloning block (`delete`):** The copy constructor and assignment operator (`operator=`) are explicitly marked with the delete keyword. This syntactic restriction prevents the unique instance from being copied or receiving new values ​​by assignment, giving it the safe behavior of an immutable global variable.

* **Global Access Point (`static Constant* getInstance()`):** A static method that manages the creation (if necessary) and returns a pointer to the unique instance of the class. It is the only way to access the object's memory.

* **Access method (`double getPi()`):** A simple getter function responsible for returning the numeric value of PI encapsulated in the instance.

## Architectural Summary

**Unbreakable State Control:** The combination of a private constructor with the removal of copy and assignment functions ensures that the Constant object's lifecycle is fully self-managed. The user only interacts with static access functions, protecting the program's constant logic from unwanted side effects.

For details on business rules, mathematical logic, and concrete implementation of these components, please refer to the document at: [Implementation README file for the Singleton pattern](/src/creational/singleton/README.md).

## References and Credits

1. **Google Gemini** - To reformulate the terminology to make it more academic and technical, and to clarify some doubts about the creation of the UML diagram.

> **OBS:** Disregard the idea that LLM developed the entire README file, as that would not be true. I emphasize that I created the basic draft for the future refactoring of the language.
