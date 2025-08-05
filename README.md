# Day-of-the-Date

# 📅 Day of the Week Calculator

This C++ project allows users to input a date (day, month, year) and calculates the **day of the week** for that date using **Zeller's Congruence algorithm**. It also includes **robust input validation** to ensure the date entered is valid, including leap year checking for February.

## 🔧 Features

- 📆 Accepts user input for day, month, and year  
- ✅ Validates date inputs (e.g. correct number of days in each month, leap year handling)  
- 🧮 Uses Zeller's algorithm to compute the day of the week  
- ⚠️ Exception handling for invalid dates

## 🧠 How It Works

- **Zeller’s Congruence** is used to compute the index of the weekday from a given date.
- The algorithm internally adjusts January and February as months 13 and 14 of the previous year.
- Input validation is handled using `std::invalid_argument` exceptions for:
  - Months outside the range 1–12
  - Days outside valid day ranges based on the month and leap year rules

## 📌 Example

```
Enter year: 2025  
Enter month (1-12): 8  
Enter day (1-31): 5  
The day of the week is: Tuesday
```

## 🚀 How to Run

Make sure you have a C++ compiler installed. Then compile and run:

```bash
g++ -o day_of_week main.cpp
./day_of_week
```

## 🛡️ Error Handling

- If a user inputs an invalid date, the program throws a detailed error message.
- Example:
  ```
  Input error: Invalid day for February.
  ```

## 📁 File Structure

```
📦 day-of-week
 ┣ 📄 main.cpp         // Main program logic
 ┗ 📄 README.md        // Project documentation
```
