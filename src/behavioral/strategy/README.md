# Strategy design pattern: Geometric calculator

This module implements the Strategy behavioral design pattern to calculate the areas of geometric figures. The choice of this architecture aims to provide a modular, encapsulated, and easily maintainable structure, initially applied to three geometric shapes: rectangle, triangle, and rhombus.

## Pattern architecture

The project structure is divided into three main pillars:

1. Interface (Operation): A pure abstract class that defines the default contract for the area design.
2. Concrete Strategies (Rectangle, Triangle, Diamond): Classes that inherit from Operation and implement their respective business rules and mathematical formulas in an isolated and independent manner.
3. Context (Area_Calculator): Class responsible for interacting with the user, storing the reference to the current strategy, and executing the project in a polymorphic way.

## Fluxo de Execução

The dynamism of the Strategy pattern is reflected in the following control flow:

Instantiation: The system initializes an object of the Area_Calculator context class.

Selection: The user defines which geometric figure they want to calculate.

Strategy definition (setOperation): The context invokes the setOperation() method, dynamically injecting the instance of the corresponding concrete strategy (Rectangle, Triangle, or Diamond).

Processing (executeOperation): The user provides the necessary numeric parameters. The context calls the executeOperation() method, which delegates execution to the Operation interface. Through polymorphism, the mathematical logic of the specified concrete class is executed, returning the final result.

![Diagram UML Strategy](/assets/images/behavioral/strategy/design-patterns-behavioral-strategy.drawio.png)

## Advantages and extensibility

Open/Closed Principle (SOLID): Weak isolation between classes ensures that the system is highly scalable. If the need arises to calculate the area of ​​new geometric figures (such as circles or trapezoids), simply create a new concrete class that implements an interface operation. This extension occurs without the need to modify the existing context or strategies, mitigating the risk of regressions in the code.

## References and Credits

1. Google Gemini - To reformulate the terminology to make it more academic and technical, and to clarify some doubts about the creation of the UML diagram.

> **OBS:** Disregard the idea that LLM developed the entire README file, as that would not be true. I emphasize that I created the basic draft for the future refactoring of the language.
