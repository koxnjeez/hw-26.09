#include "settings.h"

void middle(int arr[], int count) {
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    cout << sum / count;
}

void minmax(double arr[], int count) {
    int imax = 0, max = arr[0], imin = 0, min = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
            imax = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            imin = i;
        }
    }
    cout << "max:\nind: " << imax << "\telem: " << max << "\nmin:\nind: " << imin << "\telem: " << min;
}

void reverse(double arr[], int count) {
    double arr2[5] = {};
    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[count];
        count--;
        cout << arr2[i] << " ";
    }

}

int main()
{
    const int count = 5;

    int massive[count] = { -10,13,3,-1,6 };
    middle(massive, count);
    cout << "\n\n";

    double massive2[count] = { 8,0,4,-12,2 };
    minmax(massive2, count);
    cout << "\n\n";

    double massive3[count] = { 9,0,1,-8,20 };
    reverse(massive3, count - 1);

    Sleep(INFINITE);
}