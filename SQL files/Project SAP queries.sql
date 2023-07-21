--------------------------------------------------------------
--Create a database ProjectSAP
create database ProjectSAP
go

use ProjectSAP
go

--Create tables 
create table Semester
	(SemID int identity(1,1) PRIMARY KEY,
	 Sem_name varchar(20))
go

create table Admissions
	(AdmID int identity(1,1) PRIMARY KEY,
	 Adm_name varchar(50))
go

create table Major
	(MajorID varchar(10) PRIMARY KEY,
	 Major_name varchar(50),
	 Department_name varchar(50))
go

create table High_school
	(High_SchoolID int identity(1,1) PRIMARY KEY,
	 High_School_Name varchar(50),
	 High_School_Address varchar(max),
	 Phone_number int)
go

create table Student
	(StudentEmail varchar(100) PRIMARY KEY,
	 PasswordHash varchar(255),
	 First_name varchar(50),
	 Last_name varchar(50),
	 Gender varchar(10),
	 Mailing_address varchar (max),
	 GPA decimal(3,2),
	 High_SchoolID int NULL,
	 MajorID varchar(10) NULL,
	 FOREIGN KEY (High_SchoolID) references High_school(High_SchoolID),
	 FOREIGN KEY (MajorID) references Major(MajorID))
go

create table ApplicationSAP
	(AppID int identity(1,1) PRIMARY KEY,
	 App_status varchar(50),
	 App_date datetime,
	 SemID int,
	 AdmID int,
	 StudentEmail varchar(100),
	 FOREIGN KEY (StudentEmail) references Student(StudentEmail),
	 FOREIGN KEY (SemID) references Semester(SemID),
	 FOREIGN KEY (AdmID) references Admissions(AdmID))
go

alter table ApplicationSAP
add MajorID varchar(10),
FOREIGN KEY (MajorID) references Major(MajorID)
go

create table LogInHistory
	(LoginID int identity(1,1) PRIMARY KEY,
	 LoginTime datetime,
	 LoginStatus varchar(20), --success or failure
	 StudentEmail varchar(100),
	 FOREIGN KEY (StudentEmail) references Student(StudentEmail))
go

--create table Admitted_students
	--(StudentEmail varchar(100),
	 --First_name varchar(50),
	 --Last_name varchar(50),
	 --AdmID int,
	 --SemID int,
	 --CONSTRAINT fk_email foreign key(StudentEmail) references Student(StudentEmail),
	 --CONSTRAINT fk_admid foreign key(AdmID) references Admissions(AdmID),
	 --CONSTRAINT fk_semid foreign key (SemID) references Semester(SemID))
--go 

--create table Waitlisted_students
	--(StudentEmail varchar(100),
	 --First_name varchar(50),
	 --Last_name varchar(50),
	 --AdmID int,
	 --SemID int,
	 --CONSTRAINT fk_email2 foreign key(StudentEmail) references Student(StudentEmail),
	 --CONSTRAINT fk_admid2 foreign key(AdmID) references Admissions(AdmID),
	 --CONSTRAINT fk_semid2 foreign key (SemID) references Semester(SemID))
--go

--------------------------------------------------------------
--Insert sample data
insert into dbo.LogInHistory (LoginTime, LoginStatus) 
	values ('2022-04-22 10:34:23', 'Success'),
		   ('2022-03-10 12:34:23', 'Success'),
		   ('2022-01-04 10:34:23', 'Success'),
		   ('2022-03-10 12:34:23', 'Success'),
		   ('2022-03-10 12:34:23', 'Success')
go

insert into Admissions (Adm_name)
	values ('Jennie Byong'),
		   ('Katerin Smith')
go

insert into dbo.Semester (Sem_name)
	values ('Fall 2023'),
		   ('Spring 2024'),
		   ('Summer 2024')
go

insert into dbo.Major (MajorID, Major_name, Department_name)
	values('CS', 'Computer Science', 'Computer Systems Technology'),
		  ('BUS', 'Bussiness', 'Bussiness Studies'),
		  ('BIO', 'Biology', 'Biology Studies'),
		  ('COM', 'Communications', 'Communication Studies'),
		  ('PHS', 'Phschology', 'Phschology Studies'),
		  ('PHT', 'Phisical Therapy', 'Phisical Therapy Studies')
go

insert into dbo.High_school	(High_School_Name, High_School_Address, Phone_number)
	values('Gymnasium', 'Northern Street', 035555666),
		  ('Louisiana State High School', 'One University', 035555433)
go

insert into dbo.Student (StudentEmail, PasswordHash, First_name, Last_name, Gender, Mailing_address, GPA, High_SchoolID, MajorID)
	values('risticaleksandra@lsus.edu', 'alex', 'Aleksandra', 'Ristic', 'Female',  '5483 Hector Drive', 4.0, 1, 'CS'),
	      ('tvgoel92@gmail.com', 'tvissha', 'Tvissha', 'Goel', 'Female', '2301 Colonel Street', 3.0, 2, 'BUS'),
	      ('ladygaga@gmail.com', 'gaga', 'Stephanie', 'Germanotta', 'Female', '9701 Wilshire Blvd', 4.0, 1, 'BIO'),
	      ('selenagomez@gmail.com', 'selena', 'Selena', 'Gomez', 'Female', '4600 Vincent Plaza', 2.9, 2, 'PHS'),
	      ('dualipa@gmail.com', 'dua', 'Dua', 'Lipa', 'Female', '3585 Hollywood Avenue', 3.0, 1, 'PHT')
go
select * from Student
insert into dbo.ApplicationSAP (App_status, App_date, SemID, StudentEmail, AdmID)
	values('Completed', '2022-09-15', 1, 'risticaleksandra@lsus.edu', 1),
		  ('Completed', '2022-08-17', 2, 'tvgoel92@gmail.com', 1),
		  ('In Progress', '2022-08-23', 3, 'ladygaga@gmail.com', 2),
		  ('In progress', '2023-03-28', 1, 'selenagomez@gmail.com', 2),
		  ('Completed', '2023-01-18', 2, 'dualipa@gmail.com', 2)
go

--------------------------------------------------------------
--Create views
create view SAPview 
as
select S.StudentEmail, A.App_date, M.Major_name, HS.High_School_Name
from Student S, ApplicationSAP A, Major M, High_school HS
where A.App_date = '2022-09-15'
go

--select * from SAPview

--create view AdmView
--as
--select a.Adm_name, s.StudentEmail, sm.SemID
--from Admissions a, Student s, Semester sm
--where sm.SemID = 'F23'
--go

--select * from AdmView

--create view AcceptedView
--as
--select a.AdmId, a.Adm_status, s.StudentEmail, sm.SemID
--from Admissions a, Student s, Semester sm
--where a.Adm_status = 'Accepted'
--go

--select * from AcceptedView

--create view WaitlistView
--as
--select a.AdmId, a.Adm_status, s.StudentEmail, sm.SemID
--from Admissions a, Student s, Semester sm
--where a.Adm_status = 'Waitlisted'
--go

--select * from WaitlistView

--create view RejectedView
--as
--select a.AdmId, a.Adm_status, s.StudentEmail, sm.SemID
--from Admissions a, Student s, Semester sm
--where a.Adm_status = 'Rejected'
--go

--select * from RejectedView

--------------------------------------------------------------
--Create a procedure for inserting new student user 
CREATE PROCEDURE NewStudent
    @FirstName VARCHAR(50),
    @LastName VARCHAR(50),
    @Email VARCHAR(100),
	@Password VARCHAR(255)
AS
BEGIN
    IF EXISTS (SELECT 1 FROM Student WHERE StudentEmail = @Email)
    BEGIN
        -- Email already exists, perform an update
        UPDATE Student
        SET First_name = @FirstName,
            Last_name = @LastName
        WHERE StudentEmail = @Email
    END
    ELSE
    BEGIN
        -- Email does not exist, insert a new record
        INSERT INTO Student (First_name, Last_name, StudentEmail, PasswordHash)
        VALUES (@FirstName, @LastName, @Email, @Password)
    END
END
GO

EXEC NewStudent @FirstName = 'Alexandra', @LastName = 'Ristic', @Email = 'alexandraristic@lsus.edu', @Password = 'alex'

select * from Student
go

--------------------------------------------------------------
--Create a stored procedure for log in records
CREATE OR ALTER PROCEDURE InsertLogInHistory
	@Email VARCHAR(100),
	@LoginStatus VARCHAR(20)
AS
BEGIN
	DECLARE @LoginTime DATETIME
    SET @LoginTime = GETDATE()
	DECLARE @LoginMessage VARCHAR(100)

	IF @LoginStatus = 'Success'
	BEGIN
		SET @LoginMessage = 'Login successful.' 
	END
	ELSE IF @LoginStatus = 'Failure'
	BEGIN
		SET @LoginMessage = 'Login failed. Invalid email.'
	END

    -- Check if the student email exists in the Student table
    IF EXISTS (SELECT 1 FROM Student WHERE StudentEmail = @Email)
    BEGIN
		-- Insert the login record into the LoginHistory table
		INSERT INTO LoginHistory (LoginTime, LoginStatus, StudentEmail) -- LoginMessage
		VALUES (@LoginTime, @LoginStatus, @Email) -- ,@LoginMessage
    END
END
GO

--EXEC the value that already exists
EXEC InsertLogInHistory @Email = 'alexristic@lsus.edu'
--EXEC the value that doesn't exist
--EXEC InsertLogInHistory @LoginStatus = 'Failure', @Email = 'spam@lsus.edu'

select * from LogInHistory 
go

--------------------------------------------------------------
-- Create a stored procedure Submit Student Application and update all connected tables
CREATE OR ALTER PROCEDURE SubmitApplication
    @FirstName VARCHAR(50),
    @LastName VARCHAR(50),
    @HomeAddress VARCHAR(MAX),
	@Gender VARCHAR(10),
	@EmailAddress VARCHAR(100),
	@GPA DECIMAL (3,2),
	@HighSchoolName VARCHAR(MAX),
	@MajorName VARCHAR(MAX),
	@SemesterName VARCHAR(MAX)
AS
BEGIN
   
   DECLARE @HighSchoolID INT,
		   @MajorID VARCHAR(MAX),
		   @SemesterID INT

	IF @HighSchoolName = 'Gymnasium'
	BEGIN
		SET @HighSchoolID = 1
	END
	ELSE IF @HighSchoolName = 'Louisiana State High School'
	BEGIN
		SET @HighSchoolID = 2
	END

	IF @MajorName = 'Computer Science'
	BEGIN
		SET @MajorID = 'CS'
	END
	ELSE IF @MajorName = 'Business'
	BEGIN
		SET @MajorID = 'BUS'
	END
	ELSE IF @MajorName = 'Biology'
	BEGIN
		SET @MajorID = 'BIO'
	END
	ELSE IF @MajorName = 'Communications'
	BEGIN
		SET @MajorID = 'COM'
	END
	ELSE IF @MajorName = 'Phschology'
	BEGIN
		SET @MajorID = 'PHS'
	END
	ELSE IF @MajorName = 'Phisical Therapy'
	BEGIN
		SET @MajorID = 'PHT'
	END

	IF @SemesterName = 'Fall 2023'
	BEGIN
		SET @SemesterID = 1
	END
	ELSE IF @SemesterName = 'Spring 2024'
	BEGIN
		SET @SemesterID = 2
	END
	ELSE IF @SemesterName = 'Summer 2024'
	BEGIN
		SET @SemesterID = 3
	END

	INSERT INTO dbo.Student (StudentEmail, First_name, Last_name, Gender, Mailing_address, GPA, High_SchoolID, MajorID)
	VALUES (@EmailAddress, @FirstName, @LastName, @Gender, @HomeAddress, @GPA, @HighSchoolID, @MajorID)

	INSERT INTO dbo.ApplicationSAP (App_status, App_date, SemID, StudentEmail, MajorID)
	VALUES ('Submitted', GETDATE(), @SemesterID, @EmailAddress, @MajorID)

END
GO

EXEC SubmitApplication @FirstName = 'Kiki', @LastName = 'Ristic', @HomeAddress = 'Majora Marka', @Gender = 'Female', @EmailAddress = 'kiki@gmail.com',
					   @GPA = 4.0, @HighSchoolName = 'Gymnasium', @MajorName = 'Computer Science', @SemesterName = 'Fall 2023'
GO

Select * from Student
Select * from ApplicationSAP

GO
--------------------------------------------------------------
--Create a procedure to view student information
CREATE PROCEDURE ViewStudentData
    @StudentEmail VARCHAR(100)
AS
BEGIN
    -- Retrieve student data and information from connected tables
    SELECT S.*, HS.High_school_name, M.Major_name
    FROM Student S
    LEFT JOIN High_school HS ON S.High_SchoolID = HS.High_SchoolID
    LEFT JOIN Major M ON S.MajorID = M.MajorID
    --LEFT JOIN Documents D ON S.DocID = D.DocID
    WHERE S.StudentEmail = @StudentEmail;
END;

EXEC ViewStudentData @StudentEmail = 'risticaleksandra@lsus.edu'
GO

--------------------------------------------------------------
--DATABASE SECURITY
-- Create a login for admission people
--CREATE LOGIN Jennie WITH PASSWORD = 'test'
--GO 

USE ProjectSAP
CREATE USER Jennie FOR LOGIN Jennie
GO

GRANT SELECT, UPDATE, DELETE, INSERT ON ApplicationSAP TO Jennie
GO

USE ProjectSAP
CREATE ROLE ApplicationSTATUS
GO

USE ProjectSAP
CREATE ROLE StudentData
GO

select * from Student

--SELECT name FROM sys.sql_logins WHERE name = 'Jennie';
--ALTER LOGIN Jennie WITH PASSWORD = 'newpassword', CHECK_POLICY = OFF, CHECK_EXPIRATION = OFF;
--------------------------------------------------------------

