IPO CHART
| **INPUT**                        | **PROCESS**                                                          | **OUTPUT**                     |
| -------------------------------- | -------------------------------------------------------------------- | ------------------------------ |
| Number of students               | Add the 5 subject marks                                              | Average marks for each student |
| 5 subject marks for each student | Calculate average = sum ÷ 5                                          | Result for each student        |
|                                  | Check if any subject mark is < 33                                    |                                |
|                                  | If any mark is below 33, classify as "Fail — Subject Deficiency"     |                                |
|                                  | Otherwise, if average ≥ 80, classify as "Distinction"                |                                |
|                                  | If average ≥ 60 and < 80, classify as "Pass"                         |                                |
|                                  | If average < 60, classify as "Fail"                                  |                                |

PAC CHART 
| **Input**                        | **Process**                                  | **Conditions**                                   | **Loops**                 | **Output**                     | **Alternate Solution**                             |
| -------------------------------- | -------------------------------------------- | ------------------------------------------------ | ------------------------- | ------------------------------ | -------------------------------------------------- |
| Number of students               | Add the 5 subject marks                      | If any mark < 33 → Fail — Subject Deficiency     | Repeat for each student   | Average marks for each student | Take the 5 marks for each student                  |
| 5 subject marks for each student | Calculate the average                        | If average ≥ 80 → Distinction                    | Repeat for all 5 subjects | Result for each student        | Keep a check for any mark < 33                     |
|                                  | Check subject marks                          | If average ≥ 60 and < 80 → Pass                  |                           |                                | Calculate total and average                        |
|                                  | Classify the result according to the average | If average < 60 → Fail                           |                           |                                | First check subject deficiency, then check average |
|                                  | Display the result                           |                                                  |                           |                                | Display the appropriate result                     |
