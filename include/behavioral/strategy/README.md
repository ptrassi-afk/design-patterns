# Interface specifications (headers) — Strategy pattern

This directory centralizes the project scope declarations (hpp files). Here you define class prototypes, method signatures, instance attributes, and their respective access modifiers (public, private).

## Structural Organization of Interfaces

The declarative architecture of the pattern was designed to ensure decoupling between the choice of algorithm and its execution, structuring itself into two main components:

* **Context Class** (Area_Calculator):

  * Responsible for managing the active strategy through a pointer or reference to the abstract interface.

  * Modifier method (Setter - setOperation): Allows dynamic dependency injection by altering a specific strategy at runtime.

  * Execution method (executeOperation): Acts as a flow intermediary. It invokes the virtualized method of the interface and returns the generated result, without needing to know the identity of the concrete class that is processing the operation.

> **Project note:** The class's default constructor has been omitted in this implementation, delegating the assignment of the initial strategy exclusively to the setter method.

* **Strategy Interface** (Operation):

  * A pure abstract class that establishes the syntactic contract for calculating the area using pure virtual methods (such as the execute method).

  * Pure interface: Functions strictly as a declarative model for methods, possessing no state (attributes) or behavior of its own.

  * Mandatory Implementation Contract: The presence of the pure virtual method forces all child classes (concrete strategies) to implement this function from the moment of their creation.

  * Overriding: Concrete subclasses inherit only the signature of the parent class and override the virtual method, applying the mathematical logic and business rules of each geometric figure in isolation.

## Polymorphism and runtime resolution (late linking)

**Computational Efficiency and Modularity:** By postponing the decision of which algorithm to use until runtime, the system avoids the overhead of complex conditional structures (such as lengthy if-else or switch-case statements) and unnecessary instantiations in memory. Coupling occurs strictly through the abstract interface, ensuring that system resources are allocated on demand, according to user interactions.

For details on business rules, mathematical logic, and concrete implementation of these components, please refer to the document at: [README de Implementação do Padrão Strategy](/src/behavioral/strategy/README.md).

## References and Credits

1. Google Gemini - To reformulate the terminology to make it more academic and technical, and to clarify some doubts about the creation of the UML diagram.

> **OBS:** Disregard the idea that LLM developed the entire README file, as that would not be true. I emphasize that I created the basic draft for the future refactoring of the language.
