# Input & Validation Library — C++

A lightweight and reusable C++ library that simplifies **user input handling** and **data validation** in console applications.
The project also includes helper libraries (**clsString** and **clsDate**) used to demonstrate advanced validation and utility functions.

> ⚡ This project is part of my personal learning journey in C++, focused on building reusable tools and improving software design skills.

---

## ✨ Features

* Safe numeric input validation
* String validation utilities
* Range checking
* Retry handling for invalid input
* Helper string operations via **clsString**
* Date handling and validation via **clsDate**
* Clean and beginner-friendly design
* Easy integration with any C++ console project

---

## 📦 Project Structure

```
InputValidateLib/
│
├── InputValidate.h
├── InputValidate.cpp
├── clsString.h
├── clsString.cpp
├── clsDate.h
├── clsDate.cpp
└── example.cpp
```

### Components Overview

* **InputValidate** → Core input & validation library
* **clsString** → String helper utilities used in validation scenarios
* **clsDate** → Date validation and formatting utilities
* **example.cpp** → Demonstrates how all components work together

---

## 🚀 Getting Started

### 1️⃣ Clone the repository

```bash
git clone https://github.com/your-username/input-validate-lib.git
```

### 2️⃣ Include the libraries

```cpp
#include "InputValidate.h"
#include "clsString.h"
#include "clsDate.h"
```

### 3️⃣ Compile

```bash
g++ example.cpp InputValidate.cpp clsString.cpp clsDate.cpp -o app
```

---

## 🧠 Example Usage

```cpp
#include "InputValidate.h"
using namespace std;

int main()
{
    int age = ReadInt("Enter your age: ");
    cout << "Valid age entered: " << age;

    return 0;
}
```

---

## ✅ Validation & Utility Capabilities

The project demonstrates:

* Integer & numeric validation
* String manipulation helpers
* Date validation and formatting
* Range-restricted input
* Safe retry logic

---

## 🎯 Learning Purpose

This project was built as part of an ongoing journey to:

* Strengthen C++ fundamentals
* Practice modular design
* Create reusable libraries
* Improve problem-solving skills

It represents hands-on learning through real implementation.

---

## 🔧 Requirements

* C++11 or later
* Any modern compiler (GCC, Clang, MSVC)

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the project
2. Create a feature branch
3. Commit your changes
4. Submit a pull request

---

## 📄 License

This project is open-source and available under the MIT License.

---

## 💡 Author

Built as part of a personal learning journey to master C++ through practical projects and reusable system design.

---

⭐ If you found this useful, consider starring the repo!
