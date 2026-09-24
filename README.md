PART B Q1 IPO

INPUT:
- Season
- Room type
- Number of nights
- Number of guests
 
PROCESS:
- Select room rate according to season and room type
- Calculate price= rate × nights
- Apply 15% discount if nights>7
- Calculate final price
- Add final price to total hotel revenue

OUTPUT:
- Final price for each guest
- Total hotel revenue

PART B Q1 PAC

INPUT:
- Number of guests
- Season
- Room type
- Number of nights

PROCESS:
- Select room rate based on season and room type
- Calculate price= rate × nights
- If nights>7,apply 15% discount
- Calculate final price
- Add final price to total hotel revenue

OUTPUT:
- Final price for each guest
- Total hotel revenue

Alternate Solution:
- Use separate conditions for Peak and Off-Peak rates
- Select the rate according to the room type
- Calculate the total price
- Check if nights are more than 7 and apply the discount

PART B Q2 IPO

INPUT:
- Number of floor requests
- Requested floor
- Starting floor (Floor 0)

PROCESS:
- Compare requested floor with current floor
- If requested floor>current floor,print "Moving Up"
- If requested floor<current floor,print "Moving Down"
- If requested floor=current floor,print "Doors Opening"
- Update current floor to requested floor

OUTPUT:
- "Moving Up","Moving Down",or"Doors Opening" for each request
- Current floor after each stop
- PART ce to the hotel revenue
- Display the results

PART B Q2 PAC

INPUT:
- Number of floor requests
- Requested floor
- Starting floor= 0

 PROCESS:
- Compare requested floor with current floor
- If requested floor is higher,print "Moving Up"
- If requested floor is lower,print "Moving Down"
- If requested floor is the same,print "Doors Opening"
- Update current floor to requested floor

  OUTPUT:
- Movement message for each request
- Final current floor

Alternate Solution:
- Set the current floor to 0
- Take the requested floor one by one
- Check whether the requested floor is above, below, or equal to the current floor
- Display the appropriate message
- Set the current floor equal to the requested floor
- Repeat until all floor requests are processed

PART B Q3 IPO

INPUT:
- Number of students
- 5 subject marks for each student

PROCESS:
- Add the 5 subject marks
- Calculate average=sum ÷ 5
- Check if any subject mark is <33
- If any mark is below 33,classify as "Fail — Subject Deficiency"
- Otherwise, if average >= 80, classify as "Distinction"
- If average >= 60 and below 80, classify as "Pass"
- If average < 60, classify as "Fail"

OUTPUT:
- Average marks for each student
- Result for each student

PART B Q3 PAC

INPUT:
- Number of students
- 5 subject marks for each student

PROCESS:
- Add the 5 subject marks
- Calculate the average
- Check if any subject mark is <33
- If any mark is <33, result= "Fail — Subject Deficiency"
- Otherwise,classify according to average:
  . Average >= 80= "Distinction"
  . Average >= 60 and < 80= "Pass"
  . Average < 60= "Fail"

OUTPUT:
- Average marks for each student
- Result for each student

Alternate Solution:
- Take the 5 marks for each student
- Keep a check for any mark <33
- Calculate the total and average of the marks
- First check the subject deficiency condition
- If there is no subject deficiency,check the average
- Display the appropriate result for the student

PART B Q4 IPO

INPUT:
- Quantity of products
- Price per item
- Discount percentage
- Tax percentage

PROCESS:
- Calculate subtotal= quantity × price
- Calculate discount amount
- Subtract discount from subtotal
- Calculate tax on the discounted amount
- Calculate final bill
- Validate all entered values
- Store calculation details and generate the bill

OUTPUT:
- Subtotal
- Discount amount
- Tax amount
- Final bill
- Bill document

PART B Q4 PAC

INPUT:
- Quantity of products
- Price per item
- Discount percentage
- Tax percentage

Process:
- Validate all entered values
- Calculate subtotal= quantity × price
- Calculate discounted amount
- Calculate tax on the discounted amount
- Calculate final bill
- Store calculation details
- Generate the bill document

Output:
- Subtotal
- Discount amount
- Tax amount
- Final bill
- Bill document

Alternate Solution:
- Take all required values from the customer
- Check whether the entered values are valid
- Use the subtotal function to calculate the total before discount
- Use the discount function to find the discounted amount
- Use the final bill function to add tax
- Store all calculation details
- Display the final bill to the customer

PART B Q5 IPO

INPUT:
- Number of vehicles
- Vehicle type (Car/Bike)
- Driver type (Faculty/Student/Visitor)
- Permit status
- Emergency vehicle status
- Current occupied spaces in Zone A,B and C

PROCESS:
- Validate the vehicle and permit information
- Check parking eligibility based on vehicle type,driver type and permit
- Check available space in the assigned zone
- Assign the vehicle to Zone A,B, or C if eligible and space is available
- Reject the vehicle if it is not eligible or no suitable space is available
- Update the occupied spaces after each vehicle
- Track parked, rejected,car,and bike counts
- Check whether the parking facility is full

OUTPUT:
- Total number of vehicles processed
- Total accepted vehicles
- Total rejected vehicles
- Number of cars and bikes
- Number of successfully parked vehicles
- Final occupancy of Zone A,B,and C
- Parking facility full/not full status

PART B Q5 PAC

INPUT:
- Number of vehicles
- Vehicle type (Car/Bike)
- Driver type (Faculty/Student/Visitor)
- Permit status
- Emergency vehicle status
- Current occupied spaces in Zone A,B,and C

PROCESS:
- Validate vehicle and permit information
- Check the vehicle's parking eligibility
- Check available space in the appropriate zone
- Assign the vehicle to a suitable zone if eligible
- Reject the vehicle if it is not eligible or no space is available
- Update zone occupancy after each vehicle
- Count parked and rejected vehicles
- Count cars and bikes
- Check if the parking facility is full

OUTPUT:
- Total vehicles processed
- Total accepted vehicles
- Total rejected vehicles
- Number of cars
- Number of bikes
- Number of successfully parked vehicles
- Final occupancy of Zone A, B, and C
- Whether the parking facility is full

Alternate Solution:
- Take vehicle details one by one
- Validate the entered information
- Check emergency vehicle rules first
- Check the driver's eligibility and permit
- Check whether the required zone has available space
- Assign or reject the vehicle
- Update the zone occupancy and vehicle counts
- Repeat until all vehicles are processed
- Display the final parking summary

PART B Q6 IPO

INPUT:
- Vehicle type (EV/Hybrid)
- Battery charge level (SOC)
- Required charging level
- Expected parking duration
- Current time
- Membership status
- Disabled-person priority status
- Emergency charging priority status
- Charging station availability
- Parking duration and charging rate

PROCESS:
- Check whether the charging station is available
- Check whether the vehicle can use the charging station
- Calculate required charging percentage
- Determine charging priority
- Calculate charging cost based on vehicle type and parking duration
- Apply membership discount if applicable
- Apply priority rules and any required charges
- Calculate the final payable amount
- Generate appropriate warning messages

OUTPUT:
- Vehicle type
- Current battery percentage
- Required charging percentage
- Charging priority
- Charging price/final payable amount
- Charging and parking status
- Appropriate warning messages

PART B Q6 PAC 

INPUT:
- Vehicle type (EV/Hybrid)
- Battery charge level(SOC)
- Required charging level
- Expected parking duration
- Current time
- Membership status
- Disabled-person priority status
- Emergency charging priority status
- Charging station availability

PROCESS:
- Check charging station availability
- Check vehicle eligibility
- Calculate required charging percentage
- Determine charging priority
- Calculate charging cost
- Apply membership discount if applicable
- Calculate parking charges
- Calculate final payable amount
- Display appropriate warnings

OUTPUT:
- Vehicle type
- Current battery percentage
- Required charging percentage
- Charging priority
- Final payable amount
- Charging/parking status
- Appropriate warning messages

Alternate Solution:
- Take the vehicle and charging details
- Check station availability
- Validate the vehicle information
- Determine the charging priority
- Calculate charging and parking charges
- Apply any applicable discount
- Calculate the final amount
- Display the vehicle details, charges, priority, and warning messages
