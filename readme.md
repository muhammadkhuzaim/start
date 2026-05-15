C++ OBJECT-ORIENTED PROGRAMMING (OOP) PRACTICE TASKS
===================================================

Developed by: Muhammad Khuzaim

This project contains a collection of C++ programs demonstrating core Object-Oriented 
Programming concepts including Composition, Aggregation, Association, and Operator Overloading.

---------------------------------------------------
1. PROJECTS OVERVIEW
---------------------------------------------------

TASK 1: HOSPITAL MANAGEMENT SYSTEM (Aggregation & Composition)
- Composition: The Hospital 'owns' the Ward objects. If the Hospital is destroyed, 
  the Wards are also destroyed.
- Aggregation: The Hospital has a collection of Doctor objects. Doctors exist 
  independently and remain accessible even after the Hospital object is destroyed.

TASK 2: SMART HOME AUTOMATION (Composition)
- Components: LightSystem, ThermoStatSystem, and SecuritySystem.
- Functionality: Manages brightness, temperature modes, and security arming states 
  for specific home addresses.

TASK 3: UNIVERSITY MANAGEMENT (Association)
- Association: Courses are linked to Lecturers and Classrooms via pointers.
- Aggregation: A Semester object acts as a container for multiple Course objects.

TASK 4: E-COMMERCE ORDER SYSTEM (Composition & Operator Overloading)
- Components: ShippingAddress, PaymentInfo, and OrderItem.
- Key Feature: Overloads the '<<' operator using a friend function to print 
  formatted receipts directly to the console.

---------------------------------------------------
2. CONCEPTS APPLIED
---------------------------------------------------
- Classes & Objects: Encapsulation of data and methods.
- Constructors: Initialization lists and parameterized constructors.
- Pointers: Managing dynamic associations between objects.
- Friend Functions: Used for custom output formatting.

---------------------------------------------------
3. HOW TO RUN
---------------------------------------------------
1. Open your terminal or VS Code.
2. Compile a file using G++:
   g++ TaskName.cpp -o TaskName
3. Run the executable:
   ./TaskName (Mac/Linux) or TaskName.exe (Windows)

---------------------------------------------------
(C) 2026 Muhammad Khuzaim - Practice Portfolio
---------------------------------------------------