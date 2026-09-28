IPO CHART

| **INPUT**            | **PROCESS**                                     | **OUTPUT**      |
| -------------------- | ----------------------------------------------- | --------------- |
| Quantity of products | Calculate subtotal = quantity × price           | Subtotal        |
| Price per item       | Calculate discount amount                       | Discount amount |
| Discount percentage  | Subtract discount from subtotal                 | Tax amount      |
| Tax percentage       | Calculate tax on the discounted amount          | Final bill      |
|                      | Calculate final bill                            | Bill document   |
|                      | Validate all entered values                     |                 |
|                      | Store calculation details and generate the bill |                 |

PAC CHART
| **Input**            | **Process**                            | **Conditions**                                                    | **Loops**                                                | **Output**      | **Alternate Solution**                                           |
| -------------------- | -------------------------------------- | ----------------------------------------------------------------- | -------------------------------------------------------- | --------------- | ---------------------------------------------------------------- |
| Quantity of products | Validate all entered values            | If quantity ≤ 0 → invalid input                                   | Repeat for each product if multiple products are entered | Subtotal        | Take all required values from the customer                       |
| Price per item       | Calculate subtotal = quantity × price  | If price < 0 → invalid input                                      | Continue until all product calculations are completed    | Discount amount | Check whether the entered values are valid                       |
| Discount percentage  | Calculate discounted amount            | If discount percentage is outside the valid range → invalid input |                                                          | Tax amount      | Use the subtotal function to calculate the total before discount |
| Tax percentage       | Calculate tax on the discounted amount | If tax percentage is outside the valid range → invalid input      |                                                          | Final bill      | Use the discount function to find the discounted amount          |
|                      | Calculate final bill                   | If values are valid → continue calculations                       |                                                          | Bill document   | Use the final bill function to add tax                           |
|                      | Store calculation details              |                                                                   |                                                          |                 | Store all calculation details                                    |
|                      | Generate the bill document             |                                                                   |                                                          |                 | Display the final bill to the customer                           |
