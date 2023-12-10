/********************************************************************************/
/*																				*/
/*	Kroenke, Auer, Vandenberg, and Yoder - DBC (9th Edition) CH03 / Ext B		*/
/*																				*/
/*	Garden Glory Database Create Tables											*/
/*																				*/
/*	These are the MySQL 8.0	SQL code solutions									*/
/*																				*/
/********************************************************************************/

/* Prior to version 8.0.16, MySQL parses but does not enforce the CHECK constraint */
DROP Database if exists garden_glory;
CREATE DATABASE garden_glory;
USE garden_glory;

CREATE TABLE OWNER(
	OwnerID				Int				NOT NULL AUTO_INCREMENT,
	OwnerName			Char(50)		NOT NULL,
	OwnerEmailAddress	VarChar(100)	NULL,
	OwnerType			Char(12)		NULL,
	CONSTRAINT			OWNER_PK		PRIMARY KEY(OwnerID),
	CONSTRAINT			OWNER_TYPE_CHECK CHECK (OwnerType IN 
							('Individual','Corporation'))
	);

CREATE TABLE OWNED_PROPERTY(
	PropertyID			Int				NOT NULL AUTO_INCREMENT,
	PropertyName		VarChar(50)		NOT NULL,
	PropertyType		VarChar(50)		NOT NULL,
	Street				Char(35)		NOT NULL,
	City				Char(35)		NOT NULL,
	State				Char(2)			NOT NULL,
	ZIP					Char(10)		NOT NULL,
	OwnerID				Int				NOT NULL,
	CONSTRAINT			OWNED_PROPERTY_PK	PRIMARY KEY(PropertyID),
	CONSTRAINT			PROPERTY_OWNER_FK	FOREIGN KEY (OwnerID)
							REFERENCES OWNER(OwnerID)
									ON DELETE NO ACTION
									ON UPDATE NO ACTION,
	CONSTRAINT			PROPERTY_TYPE_CHECK CHECK (PropertyType IN
						('Office','Apartments','Private Residence'))
	);

CREATE TABLE EMPLOYEE(
	EmployeeID			Int				NOT NULL AUTO_INCREMENT,
	LastName			Char(25)		NOT NULL,
	FirstName			Char(25)		NOT NULL,
	CellPhone			Char(12)		NOT NULL,
	ExperienceLevel		Char(15)		NOT NULL,
	CONSTRAINT			EMPLOYEE_PK		PRIMARY KEY(EmployeeID),
	CONSTRAINT			EXPERIENCE_LEVEL_CHECK CHECK (ExperienceLevel IN
							('Junior','Senior','Master'))
	);

CREATE TABLE GG_SERVICE(
	ServiceID			Int				NOT NULL AUTO_INCREMENT,
	ServiceDescription	VarChar(100)	NOT NULL,
	CostPerHour			Numeric (6,2)	NULL,
	CONSTRAINT			GG_SERVICE_PK 	PRIMARY KEY(ServiceID)
	);

CREATE TABLE PROPERTY_SERVICE(
	PropertyServiceID	Int				NOT NULL AUTO_INCREMENT,
	PropertyID			Int				NOT NULL,
	ServiceID			Int				NOT NULL,
	ServiceDate			Date			NOT NULL,
	EmployeeID			Int				NOT NULL,
	HoursWorked			Numeric (4,2)	NULL,
	CONSTRAINT			PROP_SERVICE_PK 		
							PRIMARY KEY(PropertyServiceID),
	CONSTRAINT			PROP_SERVICE_PROP_FK FOREIGN KEY (PropertyID)
							REFERENCES OWNED_PROPERTY(PropertyID)
									ON DELETE NO ACTION
									ON UPDATE NO ACTION,
	CONSTRAINT			PROP_SERVICE_SERVICE_FK FOREIGN KEY (ServiceID)
							REFERENCES GG_SERVICE(ServiceID)
									ON DELETE NO ACTION
									ON UPDATE NO ACTION,
	CONSTRAINT			PROP_SERVICE_EMP_FK FOREIGN KEY (EmployeeID)
							REFERENCES EMPLOYEE(EmployeeID)
									ON DELETE NO ACTION
									ON UPDATE NO ACTION
	);

/********************************************************************************/


/********************************************************************************/
/*																				*/
/*	Kroenke, Auer, Vandenberg, and Yoder - DBC (9th Edition) CH03 / Ext B		*/
/*																				*/
/*  Garden Glory Database Data													*/
/*																				*/
/*	These are the MySQL 8.0 SQL code solutions									*/
/*																				*/
/********************************************************************************/

/*****   OWNER DATA   ***************************************************************/
/* MySQL allows nulls in auto_increment fields on insert to generate the next value */

INSERT INTO OWNER VALUES(
	null, 'Mary Jones', 'Mary.Jones@somewhere.com', 'Individual');
INSERT INTO OWNER VALUES(
	null, 'DT Enterprises', 'DTE@dte.com', 'Corporation');
INSERT INTO OWNER VALUES(
	null, 'Sam Douglas', 'Sam.Douglas@somewhere.com', 'Individual');
INSERT INTO OWNER VALUES(
	null, 'UNY Enterprises', 'UNYE@unye.com', 'Corporation');
INSERT INTO OWNER VALUES(
	null, 'Doug Samuels', 'Doug.Samuels@somewhere.com', 'Individual');

-- SELECT * FROM OWNER;

/*****   OWNED_PROPERTY DATA  *******************************************************/
/* MySQL allows nulls in auto_increment fields on insert to generate the next value */

INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Eastlake Building', 'Office', '123 Eastlake', 'Seattle', 'WA', '98119', 2);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Elm St Apts', 'Apartments', '4 East Elm', 'Lynwood', 'WA', '98223', 1);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Jefferson Hill', 'Office', '42 West 7th St', 'Bellevue', 'WA', '98007', 2);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Lake View Apts', 'Apartments', '1265 32nd Avenue', 'Redmond', 'WA', '98052', 3);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Kodak Heights Apts', 'Apartments', '65 32nd Avenue', 'Redmond', 'WA', '98052', 4);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Jones House', 'Private Residence', '1456 48th St', 'Bellevue', 'WA', '98007', 1);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Douglas House', 'Private Residence', '1567 51st St', 'Bellevue', 'WA', '98007', 3);
INSERT INTO OWNED_PROPERTY VALUES(
	null, 'Samuels House', 'Private Residence', '567 151st St', 'Redmond', 'WA', '98052', 5);


-- SELECT * FROM OWNED_PROPERTY;

/*****   EMPLOYEE DATA   ************************************************************/
/* MySQL allows nulls in auto_increment fields on insert to generate the next value */

INSERT INTO EMPLOYEE VALUES(
	null, 'Smith', 'Sam', '206-254-1234', 'Master');
INSERT INTO EMPLOYEE VALUES(
	null, 'Evanston', 'John','206-254-2345', 'Senior');
INSERT INTO EMPLOYEE VALUES(
	null, 'Murray', 'Dale', '206-254-3456', 'Junior');
INSERT INTO EMPLOYEE VALUES(
	null, 'Murphy', 'Jerry', '585-545-8765', 'Master');
INSERT INTO EMPLOYEE VALUES(
	null, 'Fontaine', 'Joan', '206-254-4567', 'Senior');

-- SELECT * FROM EMPLOYEE;

/*****   GG_SERVICE DATA   **********************************************************/
/* MySQL allows nulls in auto_increment fields on insert to generate the next value */

INSERT INTO GG_SERVICE VALUES(null, 'Mow Lawn', 25.00);
INSERT INTO GG_SERVICE VALUES(null, 'Plant Annuals', 25.00);
INSERT INTO GG_SERVICE VALUES(null, 'Weed Garden', 30.00);
INSERT INTO GG_SERVICE VALUES(null, 'Trim Hedge', 45.00);
INSERT INTO GG_SERVICE VALUES(null, 'Prune Small Tree', 60.00);
INSERT INTO GG_SERVICE VALUES(null, 'Trim Medium Tree',100.00);
INSERT INTO GG_SERVICE VALUES(null, 'Trim Large Tree', 125.00);


-- SELECT * FROM GG_SERVICE;

/*****   PROPERTY_SERVICE   *********************************************************/
/* MySQL allows nulls in auto_increment fields on insert to generate the next value */

INSERT INTO PROPERTY_SERVICE VALUES(null, 1, 2, '2019-05-05', 1, 4.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 3, 2, '2019-05-08', 3, 4.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 2, 1, '2019-05-08', 2, 2.75);
INSERT INTO PROPERTY_SERVICE VALUES(null, 6, 1, '2019-05-10', 5, 2.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 5, 4, '2019-05-12', 4, 7.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 8, 1, '2019-05-15', 4, 2.75);
INSERT INTO PROPERTY_SERVICE VALUES(null, 4, 4, '2019-05-19', 1, 1.00);
INSERT INTO PROPERTY_SERVICE VALUES(null, 7, 1, '2019-05-21', 2, 2.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 6, 3, '2019-06-03', 5, 2.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 5, 7, '2019-06-08', 4, 10.50);
INSERT INTO PROPERTY_SERVICE VALUES(null, 8, 3, '2019-06-12', 4, 2.75);
INSERT INTO PROPERTY_SERVICE VALUES(null, 4, 5, '2019-06-15', 1, 5.00);
INSERT INTO PROPERTY_SERVICE VALUES(null, 7, 3, '2019-06-19', 2, 4.00);

-- SELECT * FROM PROPERTY_SERVICE;


/****************************************************************************************/

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
FROM employee JOIN property_service ON employee.EmployeeID = property_service.EmployeeID
GROUP BY ExperienceLevel
ORDER BY ExperienceLevel DESC;




