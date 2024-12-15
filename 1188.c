#include <stdio.h>
#include <string.h>

// Define the structure for a candidate
struct Candidate {
    char name[10];
    int votes;
};

int main() {
    // Array of candidates
    struct Candidate candidates[5] = {
        {"zhang", 0},
        {"wang", 0},
        {"zhao", 0},
        {"liu", 0},
        {"miao", 0}
    };

    int n;
    scanf("%d", &n);

    // Read votes
    for(int i = 0; i < n; ++i) {
        char vote[10];
        scanf("%s", vote);
        
        // Increment votes for the corresponding candidate
        for(int j = 0; j < 5; ++j) {
            if(strcmp(candidates[j].name, vote) == 0) {
                candidates[j].votes++;
                break;
            }
        }
    }

    // Output votes for each candidate
    for(int i = 0; i < 5; ++i) {
        printf("%s %d\n", candidates[i].name, candidates[i].votes);
    }

    return 0;
}