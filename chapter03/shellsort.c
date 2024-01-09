#include <stdio.h>

// shellsort : sort v[O]...v[n - 1] into increasing order
void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

int main()
{
    int yearsOfExperience[] = {5, 2, 8, 1, 7, 9, 6, 4, 20, 03}; // Example dataset

    int n = sizeof(yearsOfExperience) / sizeof(yearsOfExperience[0]);

    printf("Unsorted Years of Experience:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", yearsOfExperience[i]);
    }

    // Sorting the years of experience using shellsort
    shellsort(yearsOfExperience, n);

    printf("\n\nSorted Years of Experience:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", yearsOfExperience[i]);
    }

    return 0;
}
