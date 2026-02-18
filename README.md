# Led-blink-with-FOR-loop-


## 🔹 Introduction

In embedded systems, digital output pins of a microcontroller are commonly used to control external components such as LEDs. Instead of writing separate instructions for each output pin, arrays and loops can be used to simplify and optimize the code.

This project demonstrates how multiple LEDs can be controlled efficiently using an array in Arduino programming.

---

## 🔹 Circuit Diagram

_Add your simulation or connection image below:_

![WhatsApp Image 2026-02-18 at 7 38 53 PM (1)](https://github.com/user-attachments/assets/afa25531-46da-45f2-a985-7c85dfeacb36)

*(Replace "your_image_name.png" with your actual file name and make sure the image is inside an "images" folder in your repository.)*

---

## 🔹 Concepts Used

### 1️⃣ Arrays

An array is a collection of elements stored under a single variable name.

Example used in this project:

int pins[9] = {2,3,4,5,6,7,8,9,10};

This allows us to access and control all LED pins using index values.

---

### 2️⃣ For Loop

A `for` loop is used to execute a block of code multiple times.

- In `setup()`, the loop sets all pins as OUTPUT.
- In `loop()`, the loop turns LEDs ON and OFF sequentially.

This reduces repetitive coding and makes the program scalable.

---

### 3️⃣ pinMode() Function

pinMode(pin, OUTPUT);

This function configures the selected pin as an output so it can control devices like LEDs.

---

### 4️⃣ digitalWrite() Function

digitalWrite(pin, HIGH); → Turns LED ON  
digitalWrite(pin, LOW);  → Turns LED OFF  

This function sends HIGH (5V) or LOW (0V) signals to the LEDs.

---

### 5️⃣ delay() Function

delay(2000);

This creates a delay of 2000 milliseconds (2 seconds), allowing visible LED switching.

---

## 🔹 Working Principle

1. Arduino starts serial communication.
2. All LED pins are configured as OUTPUT using a loop.
3. LEDs turn ON one by one with a 2-second delay.
4. LEDs turn OFF one by one with the same delay.
5. The process repeats continuously.

---

## 🔹 Learning Outcome

- Understanding arrays in embedded systems
- Efficient multiple pin handling
- Use of loops for repetitive tasks
- Basic digital output interfacing
- Writing clean and structured Arduino code
