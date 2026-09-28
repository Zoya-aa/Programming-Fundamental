IPO CHART
| **INPUT**                                  | **PROCESS**                                                             | **OUTPUT**                             |
| ------------------------------------------ | ----------------------------------------------------------------------- | -------------------------------------- |
| Number of vehicles                         | Validate vehicle and permit information                                 | Total number of vehicles processed     |
| Vehicle type (Car/Bike)                    | Check parking eligibility based on vehicle type, driver type and permit | Total accepted vehicles                |
| Driver type (Faculty/Student/Visitor)      | Check available space in the assigned zone                              | Total rejected vehicles                |
| Permit status                              | Assign vehicle to Zone A, B, or C if eligible and space is available    | Number of cars and bikes               |
| Emergency vehicle status                   | Reject vehicle if it is not eligible or no suitable space is available  | Number of successfully parked vehicles |
| Current occupied spaces in Zone A, B and C | Update occupied spaces after each vehicle                               | Final occupancy of Zone A, B and C     |
|                                            | Track parked, rejected, car and bike counts                             | Parking facility full/not full status  |
|                                            | Check whether the parking facility is full                              |                                        |

PAC CHART
| **Input**                             | **Process**                                                   | **Conditions**                                        | **Loops**                                 | **Output**                             | **Alternate Solution**                              |
| ------------------------------------- | ------------------------------------------------------------- | ----------------------------------------------------- | ----------------------------------------- | -------------------------------------- | --------------------------------------------------- |
| Number of vehicles                    | Validate vehicle and permit information                       | If vehicle information is valid → continue            | Repeat for each vehicle                   | Total vehicles processed               | Take vehicle details one by one                     |
| Vehicle type (Car/Bike)               | Check the vehicle's parking eligibility                       | If emergency vehicle → check emergency rules first    | Continue until all vehicles are processed | Total accepted vehicles                | Validate the entered information                    |
| Driver type (Faculty/Student/Visitor) | Check available space in the appropriate zone                 | If driver is eligible and permit is valid → eligible  |                                           | Total rejected vehicles                | Check emergency vehicle rules first                 |
| Permit status                         | Assign vehicle to a suitable zone                             | If suitable zone has space → assign vehicle           |                                           | Number of cars                         | Check driver's eligibility and permit               |
| Emergency vehicle status              | Reject vehicle if it is not eligible or no space is available | If no space is available → reject vehicle             |                                           | Number of bikes                        | Check whether the required zone has available space |
| Current occupancy of Zone A, B and C  | Update zone occupancy after each vehicle                      | If vehicle is eligible but no space → reject          |                                           | Number of successfully parked vehicles | Assign or reject the vehicle                        |
|                                       | Count parked and rejected vehicles                            | If parking spaces are full → facility is full         |                                           | Final occupancy of Zone A, B and C     | Update zone occupancy and vehicle counts            |
|                                       | Count cars and bikes                                          | If parking spaces are not full → facility is not full |                                           | Parking facility full/not full         | Repeat until all vehicles are processed             |
|                                       | Check if the parking facility is full                         |                                                       |                                           |                                        | Display the final parking summary                   |

