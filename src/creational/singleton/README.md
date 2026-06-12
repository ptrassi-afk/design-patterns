# Singleton Creational Design Pattern: Constant Management

This module implements the Singleton design pattern. The goal of this architecture is to restrict the instantiation of a class to a single object shared throughout the application lifecycle, providing a global and secure access point to it.

In the context of this project, the standard for the secure management of the mathematical constant PI was applied. This approach functions as a protected "global variable," ensuring that the value is immutable and that all system requests consume exactly the same memory reference.

## Architectural and implementation constraints

To ensure instance integrity and prevent the `Constant` class from being unintentionally replaced or replicated, the architecture uses the following security mechanisms:

* **Static and private instance attribute:** The variable that stores the class instance belongs to the class scope (static), guaranteeing its persistence and uniqueness throughout execution.

* **Private constructor:** Hides the default constructor from the public scope, preventing other parts of the code from directly instantiating new objects.

* **Cloning and assignment blocking (`delete`):** In the public domain, the copy constructor and assignment operator are explicitly excluded. This invalidates fundamental operations that could duplicate the instance or change its memory address.

* **Global Access Method (`getInstance()`):** A public static method responsible for controlling access to the instance. It encapsulates the logic for checking and creating (if the instance does not already exist) and also provides accessory methods (such as a `get`) to return the encapsulated value.

<div align="center">

![Diagram UML Singleton](/assets/images/creational/singleton/design-patterns-creational-singleton.drawio.png)

</div>

## Execution and Validation Flow

The operational flow attests to the reliability of single access to the constant:

1. **First call (initialization):** The system declares the first pointer and calls the `getInstance()` method. Since the instance is still null, the class calls its private constructor, allocates the object in memory (with the constant PI), and returns its address.

2. **Subsequent calls (reuse):** A second pointer is declared and calls `getInstance()` again. The method identifies that the static instance has already been created and simply returns the existing memory address.

3. **Identity verification:** The code performs assertion tests to compare the two pointers. They must point to the same memory address and contain the same PI value, proving that the system has not generated redundant objects or undergone mutation.

## Advantages and Trust

The key problem-solving aspect of this architecture is controlled immutability. By protecting the creation of the variable and restricting its access, system developers and users have the mathematical and computational guarantee that the value of PI will not be subject to external interference, serving as a single source of truth for structural calculations.

## References and Credits

1. **Architectural credits** - The logical modeling and class diagram that underpin the structuring of our Constant class are based on literature and educational materials provided by Refactoring Guru.

2. **Google Gemini** - To reformulate the terminology to make it more academic and technical, and to clarify some doubts about the creation of the UML diagram.

> **OBS:** Disregard the idea that LLM developed the entire README file, as that would not be true. I emphasize that I created the basic draft for the future refactoring of the language.
