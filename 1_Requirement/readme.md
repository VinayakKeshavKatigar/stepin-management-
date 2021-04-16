# Requirements

#introduction

A STEPin management system (also known as a Candidate information system ) helps company's manage data, and get information. A stepin Managment system generates and uses a large amount of data. This data must be communicated appropriately to Candidates, and faculty. A STEPin management system helps comapany to store, manage, and distribute this information.

STEPin management systems are designed to serve all of a comapanys candidate data management needs. candidate management systems are specialized. These specialized solutions target specific needs, such as Comapany applications or candidate information tracking.

STEPin management systems provide many benefits to Companys and institutions, mostly stemming from centralized data management and accessibility. Faculty can more easily input, manage, and access candidate data. 

## Research

### STEPin management system Software Benefits

1. Add Candidate Name.
2. Add Candidate Mobile Number.
3. Add Candidate SFID.
4. Add Candidate Stream.
5. Add Candidate Branch.


### STEPin management system Software Features

1. Add Record.
2. View Record.
3. Search Record.
4. Modify Record.
5. Delect Record.
6. Exit
![image](https://user-images.githubusercontent.com/80456316/115010860-8c0acd80-9ecb-11eb-8d89-d7f5a385f7db.png)




## Defining Our System
### Certain assumptions:
* Few systems already exists with which our system will interact
    * Hospital Management Application
    * Student Managment System
    * Employee Managment System

![Description](    )![image](https://user-images.githubusercontent.com/80456316/115010264-d475bb80-9eca-11eb-8cdf-a3f08204c23e.png)



### Explanation:
* ### STEPin management system Application have few inbuilt features like:
    * Create a Candidate record
    * Delete a Candidate record
    * View a Candidate record
    * Update a Candidatet record
    * Save Candidate to file
    * View Candidate from file 

## SWOT ANALYSIS
![SWOT Analysis]![image](https://user-images.githubusercontent.com/80456316/115008843-3f25f780-9ec9-11eb-9b3b-5bbe4514a72d.png)


# 4W&#39;s and 1&#39;H

## Who:
* Company's and there facult can easy manage and view candidate Record. 

## What:
* Companys can effectivity manage there records such as Name, Mobile number, SFID, Stream, and Branch.

## When:
* During STEPin program

## Where:
* At LTTS

## How:
* During STEPin program the candidate record can be Added, Viewed, Searched, Modifyed, Delected, exit.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new candidate record | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to view a pcandidate record | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to search a candidate record | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to modifyed a candidate record | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to delete a candidate record | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to save records in a file | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to view data from a file | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario |  IMPLEMENTED |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Id should be unique and validated from persistant file or else candidate record should not be accepted. | HR01 |  IMPLEMENTED  |
| LR02 | Reading candidate data should be possible in 2 ways (1). first being by searching by sfid of a candidate (2). By printing all the records available | HR02 |  IMPLEMENTED |
| LR03 | While viewing all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User need to search by name for the candidate record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | User need to search by name for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system should prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 |  IMPLEMENTED  |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |
© 2021 GitHub, Inc.
