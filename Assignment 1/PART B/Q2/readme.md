IPO CHART
| INPUT                    | PROCESS                                                   | OUTPUT                                                          |
| ------------------------ | --------------------------------------------------------- | --------------------------------------------------------------- |
| Number of floor requests | Compare requested floor with current floor                | "Moving Up", "Moving Down", or "Doors Opening" for each request |
| Requested floor          | If requested floor > current floor, print "Moving Up"     | Current floor after each stop                                   |
| Starting floor (Floor 0) | If requested floor < current floor, print "Moving Down"   | Display the results                                             |
|                          | If requested floor = current floor, print "Doors Opening" |                                                                 |
|                          | Update current floor to requested floor                   |                                                                 |

PAC CHART

| **Input**                | **Process**                                | **Conditions**                                       | **Loops**                                       | **Output**                        | **Alternate Solution**                                   |
| ------------------------ | ------------------------------------------ | ---------------------------------------------------- | ----------------------------------------------- | --------------------------------- | -------------------------------------------------------- |
| Number of floor requests | Compare requested floor with current floor | If requested floor > current floor → "Moving Up"     | Repeat for each floor request                   | Movement message for each request | Set current floor to 0                                   |
| Requested floor          | Update current floor to requested floor    | If requested floor < current floor → "Moving Down"   | Continue until all floor requests are processed | Final current floor               | Take requested floor one by one                          |
| Starting floor = 0       |                                            | If requested floor = current floor → "Doors Opening" |                                                 |                                   | Check whether floor is above, below, or equal            |
|                          |                                            |                                                      |                                                 |                                   | Display the appropriate message and update current floor |
