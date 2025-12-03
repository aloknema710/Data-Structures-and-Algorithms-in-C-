// | Feature              | **Aggregation**                                 | **Composition**                               |
// | -------------------- | ----------------------------------------------- | --------------------------------------------- |
// | **Type of relation** | **"Has-a"**                                     | **"Has-a"**                                   |
// | **Object lifetime**  | **Independent**: Child can exist without parent | **Dependent**: Child’s life is tied to parent |
// | **Ownership**        | **Shared/associated**                           | **Owned**                                     |
// | **Tightness**        | Looser coupling                                 | Tighter coupling                              |
// | **Reusability**      | High (used across classes)                      | Lower (tied to parent class)                  |
// | **Example**          | Driver **has a** Car (can change cars)          | Human **has a** Heart (not separable)         |





/*
class Car {
public:
    void start() {
        cout << "Car is starting.\n";
    }
};

class Driver {
private:
    Car* car; // Aggregation: using pointer (no ownership)
public:
    Driver(Car* c) : car(c) {} // Car is passed in; Driver doesn't own it

    void startTrip() {
        car->start();
    }
};
✅ Aggregation: Car can exist without Driver. Driver just uses it.
*/


/*
class Heart {
public:
    void beat() {
        cout << "Heart is beating.\n";
    }
};

class Human {
private:
    Heart heart; // Composition: tightly bound
public:
    void live() {
        heart.beat();
    }
};
✅ Composition: Heart is created and destroyed with Human.
*/


/*
More detailed

Q1. A Book has Pages
Pages are tightly coupled with the book. If the book is destroyed, pages are too.

👉 Your Answer?
<details><summary>✅ Answer</summary> **Composition** — pages are part of the book and do not exist separately. </details>

Q2. A Team has Players
Players can be part of different teams or can exist outside a team.

👉 Your Answer?
<details><summary>✅ Answer</summary> **Aggregation** — players are independent and can exist without the team. </details>

Q3. A Company has Departments
Departments exist only as part of the company structure.

👉 Your Answer?
<details><summary>✅ Answer</summary> **Composition** — departments are integral to the company structure. </details>

Q4.A Student has a Laptop
Laptop can exist on its own and be used by someone else.

👉 Your Answer?
<details><summary>✅ Answer</summary> **Aggregation** — laptop is a separate object, not created/destroyed with the student. </details>

Q5. An Order has OrderItems
Items are part of the order, and deleting the order deletes the items.

👉 Your Answer?
<details><summary>✅ Answer</summary> **Composition** — order items are part of the order lifecycle. </details>
*/