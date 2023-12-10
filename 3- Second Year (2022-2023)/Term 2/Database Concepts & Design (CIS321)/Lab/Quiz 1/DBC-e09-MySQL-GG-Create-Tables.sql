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