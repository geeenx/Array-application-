#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    // --- 1D Array: Weekly Revenue Tracker ---
    printf("=== 1D Array: Weekly Revenue Tracker ===\n");
    float revenue[7];
    float total_revenue = 0.0;

    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }
    float average_revenue = total_revenue / 7.0;
    printf("Total weekly revenue: %.2f\n", total_revenue);
    printf("Average daily revenue: %.2f\n\n", average_revenue);

    // --- 2D Array: Room Occupancy (One Branch: 5 floors, 10 rooms) ---
    printf("=== 2D Array: Room Occupancy ===\n");
    int occupancy[5][10];

    for (int f = 0; f < 5; f++) {
        int occupied_count = 0;
        int vacant_count = 0;
        for (int r = 0; r < 10; r++) {
            occupancy[f][r] = rand() % 2; // Random 1 (occupied) or 0 (vacant)
            if (occupancy[f][r] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", f + 1, occupied_count, vacant_count);
    }
    printf("\n");

    // --- 3D Array: Multiple Branches (3 branches, 5 floors, 10 rooms) ---
    printf("=== 3D Array: Multiple Branches Occupancy ===\n");
    int chain[3][5][10];
    int total_chain_occupied = 0;

    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1) {
                    total_chain_occupied++;
                }
            }
        }
    }
    printf("Total number of occupied rooms across all 3 branches: %d\n", total_chain_occupied);

    return 0;
}
