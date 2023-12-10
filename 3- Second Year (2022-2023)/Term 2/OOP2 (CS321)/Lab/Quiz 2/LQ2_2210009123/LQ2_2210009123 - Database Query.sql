# 2210009123 - Yosef Ahmed - Lab Quiz 2 #
DROP DATABASE IF EXISTS Company;
CREATE DATABASE Company;
USE Company;

CREATE TABLE Employee
(
    EmployeeID INT PRIMARY KEY,
	Name VARCHAR(20),
    Salary INT
);

SELECT * FROM Employee;