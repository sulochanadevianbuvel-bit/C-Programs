#include <stdio.h>
int main() {
    int n,score,total=0,below=0;
    float average;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &score);
        total += score;
        if(score < 40)
            below++;
    }
    average = (float)total / n;
    printf("Average Score: %.0f\n", average);
    printf("Failed Subject: %d", below);
    return 0;
}