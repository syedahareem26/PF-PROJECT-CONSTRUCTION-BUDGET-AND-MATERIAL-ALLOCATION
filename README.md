# PF-PROJECT-CONSTRUCTION-BUDGET-AND-MATERIAL-ALLOCATION
Overview
This C++ program calculates and manages construction materials and budgets for buildings based on user inputs. It allows users to define the building's area (in marlas), number of storeys, and rooms per floor. The program then computes material costs and their distribution among the rooms and provides detailed outputs for each floor.

Features
Dynamic Area Selection:

Users can input the area in marlas (ranging from 3 to 20).
Based on the area, the program provides constraints on the maximum number of storeys.

Customizable Number of Storeys:

Validates the number of storeys allowed based on the selected area.

Room and Material Management:

Users define the number of rooms per floor.
Material costs are divided proportionally among floors and rooms.

Detailed Material Distribution:

Computes and displays the cost and quantity of materials (bricks, cement, and steel) for each floor and room.
Supports standard measurement units for materials (e.g., kgs for cement).

Error Handling:

Validates user inputs to ensure they meet the defined constraints.


Input Requirements
Area (in marlas):

Range: 3 to 20 marlas.
Storeys:

Based on the selected area:
3–5 marlas: Maximum 2 storeys.
6–10 marlas: Maximum 3 storeys.
11–20 marlas: Maximum 4 storeys.

Budget:

Total budget for construction (in USD).

Rooms per Floor:

Maximum rooms per floor: 5.


Outputs
Material Costs for Each Floor:

Displays the cost and quantity of bricks, cement, and steel required.

Room-wise Material Breakdown:

Shows material distribution per room for each floor.
