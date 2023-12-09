# In-Memory Key-Value Database

## Introduction

This project implements an in-memory key-value database in C++. The database supports transactions, allowing "all or nothing" updates to prevent dirty writes, making it suitable for scenarios like money transactions in a banking app.

## Table of Contents

- [Getting Started](#getting-started)
    - [Installation](#installation)
- [Usage](#usage)
    - [Running the Code](#running-the-code)
    - [Example Usage](#example-usage)
- [Assignment Modifications](#assignment-modifications)


## Getting Started


### Installation

1. Clone the repository:

    ```bash
    git clone repo_url
    ```

2. Navigate to the project directory:

    ```bash
    cd path/Data-Processing-and-Storage
    ```

## Usage
### Dislclaimer
For the get(value) function if your key is not in the main data store the value for null that is returned is 0, so keep that in mind when using this program.
### Changing the main
Open the project in the text editor of your choosing, and make whatever changes to main.cpp you desire. You can also make changes in the terminal using the command:
```bash
nano main.cpp
```
### Running the Code

To compile and run the code run:

```bash
make
./main
```

When you're down to remove the executable created run:
```bash
make clean
```

## Assignment Modifications

**Banking Assignment:**
- I think creating a database for a bank where transactions could be modeled which was described in the instructions would have been a good real assignment.
- This by itself would likely be too much coding for one assignment so we could have been provided some boiler plate code implementing the banking accounts, and we could be in charge of implementing the transactions system.

**Test Cases:**
- This is a pretty low code assignment so this could've been combined with the unit testing assignment.
- We could've developed a suite of test cases to validate the functionality of the database.

**Clarifications:**
- One thing I wish was clarified in the instructions is what happens if two transactions are opened at the same time. I assumed we were just supposed to throw an exception but it doesn't really specify.
- It didn't really specify what you wanted for the null values for the get(value) function as in C++ NULL gets converted to 0 for functions returning ints, so either saying return a specific value such as 0 or -1 or saying that you only want the string value of the value of the database so something like 'key not in database' could be outputted would've been helpful.

