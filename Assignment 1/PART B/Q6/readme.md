IPO CHART
| **INPUT**                          | **PROCESS**                                                        | **OUTPUT**                            |
| ---------------------------------- | ------------------------------------------------------------------ | ------------------------------------- |
| Vehicle type (EV/Hybrid)           | Check whether the charging station is available                    | Vehicle type                          |
| Battery charge level (SOC)         | Check whether the vehicle can use the charging station             | Current battery percentage            |
| Required charging level            | Calculate required charging percentage                             | Required charging percentage          |
| Expected parking duration          | Determine charging priority                                        | Charging priority                     |
| Current time                       | Calculate charging cost based on vehicle type and parking duration | Charging price / final payable amount |
| Membership status                  | Apply membership discount if applicable                            | Charging and parking status           |
| Disabled-person priority status    | Apply priority rules and any required charges                      | Appropriate warning messages          |
| Emergency charging priority status | Calculate the final payable amount                                 |                                       |
| Charging station availability      | Generate appropriate warning messages                              |                                       |
| Parking duration and charging rate |                                                                    |                                       |

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
