DROP Database if exists gardenglory;
CREATE database gardenglory;
USE gardenglory;

CREATE TABLE owner
(
	OwnerID int auto_increment PRIMARY KEY,
    OwnerName varchar(40),
    OwnerEmailAddress varchar(40),
    OwnerType char
);

CREATE TABLE owned_property
(
	PropertyID int auto_increment PRIMARY KEY,
    PropertyName varchar(40),
    PropertyType char,
    Street varchar(20),
    City varchar(20),
    State varchar(20),
    Zip int,
    OwnerID int,
    
    FOREIGN KEY (OwnerID) REFERENCES owner(OwnerID)
);

CREATE TABLE gg_service
(
	ServiceID int auto_increment PRIMARY KEY,
    ServiceDescription varchar(40),
    CostPerHour double
);

CREATE TABLE employee
(
	EmployeeID int auto_increment PRIMARY KEY,
    LastName varchar(40),
    FirstName varchar(40),
    CellPhone long,
    ExperienceLevel varchar(10)
);

CREATE TABLE property_service
(
	PropertyServiceID int auto_increment PRIMARY KEY,
    PropertyID int,
    ServiceID int,
    ServiceDate date,
    EmployeeID int,
    HoursWorked int,
    
    FOREIGN KEY (PropertyID) REFERENCES owned_property(PropertyID),
    FOREIGN KEY (ServiceID) REFERENCES gg_service(ServiceID),
    FOREIGN KEY (EmployeeID) REFERENCES employee(EmployeeID)
);
#--------------- Data Inserting --------------#

INSERT INTO Owner (OwnerName, OwnerEmailAddress, OwnerType)
VALUES('Walter White', 'WalterW@gmail.com', "I"),
('Skylar White', 'SkylarW@gmail.com', "M"),
('Hank Shrader', 'HandS@gmail.com', "M"),
('Saul Goodman', 'SaulG@gmail.com', "O");

INSERT INTO OWNED_PROPERTY (OwnerID, PropertyType, Street, City, zip)
VALUES(1, "H", "Negra Arroyo lane ", "Albuquerque", "108284"),
(3, "D", "3rd Ave", "Chicago", "23222");

INSERT INTO GG_SERVICE (ServiceDescription, CostPerHour)
VALUES("Plumbing", 50);

INSERT INTO EMPLOYEE (FirstName, LastName, CellPhone, ExperienceLevel)
VALUES("Gus", "Fring", "5058425662", "Master"),
("Mike", "Finger", "5068126322", "Basic"),
("Jessie", "Pinkman", "5252322323", "Master");

INSERT INTO PROPERTY_SERVICE (PropertyID, ServiceID, ServiceDate, EmployeeID, HoursWorked)
VALUES(1, 1, "2018-01-01", 1, 2);


#--------------- Queries --------------#

#A
SELECT * FROM owner;
SELECT * FROM owned_property;
SELECT * FROM gg_service;
SELECT * FROM employee;
SELECT * FROM property_service;

#B
SELECT FirstName, LastName, Cellphone 
FROM employee
WHERE ExperienceLevel = "Master";

#C
SELECT LastName, FirstName, Cellphone 
FROM employee
WHERE ExperienceLevel = "Master" && FirstName LIKE "J%";

#D
SELECT ExperienceLevel, sum(HoursWorked)
FROM employee JOIN property_service ON employee.EmployeeID
GROUP BY ExperienceLevel
ORDER BY ExperienceLevel DESC;

