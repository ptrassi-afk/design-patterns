# 🛠️ Design Patterns in C++

Practical implementation of the main design patterns (GoF) in modern C++.

---

## 📌 About the Project

This repository was created with the goal of studying and applying, in practice, the classic design patterns presented in the Software Engineering course at the Federal Technological University of Paraná (UTFPR), in the Bachelor's degree program in Computer Science.

The implemented examples are based on the GoF (Gang of Four) pattern catalog—a term used to refer to the authors Erich Gamma, Richard Helm, Ralph Johnson, and John Vlissides, responsible for the book Design Patterns: Elements of Reusable Object-Oriented Software (1994), which describes 23 classic object-oriented software development patterns.

> **OBS:** We will use one design pattern from each category.

### 🏗️ Implemented Standards

The project is divided into three categories of design patterns:

* **Creational:**
  * `Singleton` (Used to ensure that a class has only one instance throughout the application's lifecycle and provides a global access point to it).
* **Structural:**
  * `Adapter` (Used to integrate legacy systems or third-party libraries).
* **Behavioral:**
  * `Observer` (Used to establish reactive and indirect communication between parts of the system without creating a strong coupling).

---

## 🚀 Technologies and Tools

* **Language:** C++ (C++17 or C++20 standard)
* **Building system:** CMake (version 3.10+) / CMake Tools (version 1.20+)
* **Compiler:** G++ (part of GCC - GNU Compiler Collection)
* **Recommended IDE:** VSCode

---

## 💻 How to Execute the Project

Follow the steps below to run the project locally.

### Prerequisites

You will need to have a G++ compiler and CMake installed on your machine.

### Step by step

1. **Clone the repository:**
Whether it's an HTTP or SSH key, we'll use this one here, but the choice is yours.

   ```bash
   git clone git@github.com:ptrassi-afk/design-patterns.git
   cd design-patterns
   ```

2. **Generate the compilation files using CMake:**

    ```bash
    cmake -B build "In developing..."
    ```

3. **Compile the project:**

    ```bash
    cmake --build build "In developing..."
    ```

4. **Run the generated binary:**

* **On Linux/Mac:**

    ```bash
    ./build/NomeDoExecutavel "In developing..."
    ```

* **On Windows:**

    ```bash
    .\build\Debug\NomeDoExecutavel.exe "In developing..."
    ```

## 🔗 References and Credits

1. Refactoring Guru: [https://refactoring.guru/](https://refactoring.guru/) - Excellent visual and theoretical explanation of design patterns.
2. Google Gemini - Analysis and explanation of code, and refactoring of documentation.
