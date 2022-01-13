# Cpp_ColumnarReader

This is going to be a C++ analytical library that provides interface and functionality for big data columnar formats.
The initial focus is set to the parquet format - [Apache Parquet](https://parquet.apache.org/ "Official project"). The currently existing apache project Arrow - [Apache Arrow](https://github.com/apache/arrow) allows to read/write parquet files but my feeling is that it's lacking some functionalities and the proposed Columnar Reader library would provide other set of functionalities.

The root cause of building this library is to be able to split huge parquet files into smaller ones and the other way round, read the metadata and efficiently operate with the data stored in parquet. 

In the future this library will allow to directly query columnar files both on local and in cloud storages, what will allow for using it as a cli ETL/ELT tool for loading columnar files into your data system, i.e. rdbms, data warehouse or nosql.

## Initial project functionalities
1. Read Parquet MetaData
2. Read Parquet Data
3. Read Parquet file in parallel using concurrency
4. Filter pushdown (read only specific part of the file)
5. Split Parquet file into smaller parts
6. Combine smaller Parquet files into a bigger one
7. Write data into new Parquet File
8. Porting the library into Python using Cython


## What C++ functionalities this project uses
- Loops, Functions, I/O
    - The project demonstrates an understanding of C++ functions and control structures.
    - The project reads data from a file and process the data, or the program writes data to a file.
    - The project accepts user input and processes the input.
- Object Oriented Programming   
    - The project uses Object Oriented Programming techniques.
    - Classes use appropriate access specifiers for class members.
    - Class constructors utilize member initialization lists.
    - Classes abstract implementation details from their interfaces.
    - Classes encapsulate behavior.
    - Classes follow an appropriate inheritance hierarchy.
    - Overloaded functions allow the same function to operate on different parameters.
    - Derived class functions override virtual base class functions.
    - Templates generalize functions in the project.
- Memory Management
    - The project makes use of references in function declarations.
    - The project uses destructors appropriately.
    - The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.
    - The project follows the Rule of 5.
    - The project uses move semantics to move data, instead of copying it, where possible.
    - The project uses smart pointers instead of raw pointers.
- Concurrency
    - The project uses multithreading.
    - A promise and future is used in the project.
    - A mutex or lock is used in the project.
    - A condition variable is used in the project.