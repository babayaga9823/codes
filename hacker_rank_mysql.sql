select distinct city from station where id%2=0;
--this below query will result in the difference between total no.of cities and no. of distinct cities
select count(city)-count(distinct(city)) from station;

--Query the two cities in STATION with the shortest and longest CITY names, 
--as well as their respective lengths (i.e.: number of characters in the name). If there is more than one smallest or largest city, 
--choose the one that comes first when ordered alphabetically.
select CITY,LENGTH(CITY) from STATION order by Length(CITY) asc, CITY limit 1; 
select CITY,LENGTH(CITY) from STATION order by Length(CITY) desc, CITY limit 1; 

#Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.(really imp
select distinct city from station where city like 'a%' ||  city like 'e%' ||  city  like 'o%' ||  city  like 'i%' ||  city  like 'u%';)--actually this should be done using regular expression


#Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates.
select distinct city from station where city like '%a' ||  city like '%e' ||  city  like '%o' ||  city  like '%i' ||  city  like '%u';


#Query the list of CITY names from STATION that do not start with vowels. Your result cannot contain duplicates.
select distinct city from station where city not like 'a%' &&  city not like 'e%' &&  city not like 'o%' && city not like 'i%' &&  city not like 'u%';)

#Query the list of CITY names from STATION that do not end with vowels. Your result cannot contain duplicates.
select distinct city from station where city not like '%a' &&  city not like '%e' &&  city not like '%o' && city not like '%i' &&  city not like '%u';)

#Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) as both their first and last characters. Your result cannot contain duplicates
SELECT DISTINCT CITY FROM STATION WHERE (CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%') 
AND (CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u') order by city;   --notice the placement of brackets that imp  


#Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. Your result cannot contain duplicates.
select distinct city from station where (city not like '%a' &&  city not like '%e' &&  city not like '%o' && city not like '%i' &&  city not like '%u')||
(city not like 'a%' &&  city not like 'e%' &&  city not like 'o%' && city not like 'i%' &&  city not like 'u%'); --notice the placement of brackets that imp  


#Query the Name of any student in STUDENTS who scored higher than  
--Marks. Order your output by the last three characters of each name. 
--If two or more students both have names ending in the same last three characters 
--(i.e.: Bobby, Robby, etc.), secondary sort them by ascending ID
--notice that its lst 3 chars
SELECT Name FROM STUDENTS WHERE Marks > 75 ORDER BY RIGHT(Name, 3), ID;



#query to check triangle
SELECT IF(A+B>C AND A+C>B AND B+C>A, IF(A=B AND B=C, 'Equilateral', IF(A=B OR B=C OR A=C, 'Isosceles', 'Scalene')), 'Not A Triangle') FROM TRIANGLES;

#simple count but imp
#Query a count of the number of cities in CITY having a Population larger than 
SELECT COUNT(ID) FROM CITY WHERE POPULATION > 100000;

#Query the total population of all cities in CITY where District is California.
select sum(population) from city where district='California' ;


#Query the average population for all cities in CITY, rounded down to the nearest integer

SELECT ROUND(AVG(POPULATION)) FROM CITY;

#Query the difference between the maximum and minimum populations in CITY.
select max(population)-min(population) from city;


#Query the sum of Northern Latitudes (LAT_N) from STATION having values greater than  and less than .
# Truncate your answer to  decimal places.
#notice to round off to 4 decimal places
select round(sum(LAT_N),4) from station where lat_n > 38.7880 and lat_n <137.2345;




#Samantha was tasked with calculating the average monthly salaries for all employees in the EMPLOYEES table, 
#but did not realize her keyboard's  key was broken until after completing the calculation. She wants your help finding the difference 
#between her miscalculation (using salaries with any zeroes removed), and the actual average salary. 
#Write a query calculating the amount of error (i.e.:  average monthly salaries), and round it up to the next integer.
    
SELECT CEIL(AVG(Salary) - AVG(REPLACE(Salary, '0', ''))) FROM EMPLOYEES;


#Query the following two values from the STATION table:
#The sum of all values in LAT_N rounded to a scale of  decimal places.
#The sum of all values in LONG_W rounded to a scale of  decimal places.
#notice that rounded off to 2 decimal places
select round(sum(lat_n),2),round(sum(long_w),2) from station ;


--beautiful question below

#We define an employee's total earnings to be their monthly  worked, and the maximum total earnings to be the maximum total earnings for any employee in the Employee table. 
#Write a query to find the maximum total earnings for all employees as well as the total number of employees who have maximum total earnings. 
#Then print these values as  space-separated integers.
SELECT (months*salary) as earnings, COUNT(*) FROM Employee GROUP BY earnings ORDER BY earnings DESC LIMIT 1;


#Query the Western Longitude (LONG_W) for the largest Northern Latitude (LAT_N) in STATION that is less than . Round your answer to  decimal places.
select round(long_w,4) from station where lat_n<137.2345 order by lat_n desc limit 1;


#Query the smallest Northern Latitude (LAT_N) from STATION that is greater than . Round your answer to  decimal places.
SELECT ROUND(MIN(LAT_N), 4) FROM STATION WHERE LAT_N > 38.7780;

#the same above code can also be written as below
select round(LAT_N,4) from station where LAT_N>38.7780 order by LAT_N asc limit 1;

#beautiful question just read the question carefully
#Query the Western Longitude (LONG_W)where the smallest Northern Latitude (LAT_N) in STATION is greater than . Round your answer to  decimal places.
    
SELECT ROUND(LONG_W, 4) FROM STATION WHERE LAT_N > 38.7780 ORDER BY LAT_N LIMIT 1;


#Weather Observation Station 18
#notice that here we can use abs
select abs(min(round(LAT_N,4))-max(round(LAT_N,4)))+abs(min(round(LONG_W,4))-max(round(LONG_W,4)))from station ;

#Weather Observation Station 19
select round(sqrt(pow((min(round(LAT_N,4))-max(round(LAT_N,4))),2)+pow((min(round(LONG_W,4))-max(round(LONG_W,4))),2)),4)from station ;
 #Asian Population
 select sum(city.population)
from country join city
on city.countrycode=country.code
where country.continent='asia';





