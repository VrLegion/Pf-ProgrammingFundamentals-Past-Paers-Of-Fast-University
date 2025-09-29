#include<iostream>
using namespace std;
int main(){
    cout << "Enter 5 values " << endl;
    cout << "=================" << endl;
    int val1, val2, val3, val4, val5;
    cin >> val1 >> val2 >> val3 >> val4 >> val5;

    // Ensure all values are positive
    while (val1 <= 0 || val2 <= 0 || val3 <= 0 || val4 <= 0 || val5 <= 0) {
        cout << "Please enter only positive values: " << endl;
        cin >> val1 >> val2 >> val3 >> val4 >> val5;
    }

    // Finding max value
    int max_value = val1;
    if (val2 > max_value)
    max_value = val2;
    if (val3 > max_value) 
	max_value = val3;
    if (val4 > max_value) 
	max_value = val4;
    if (val5 > max_value) 
	max_value = val5;

    // ?? **Step 1: Individual Bar Printing**
    for (int col = 1; col <= 5; col++) {
        int height;
        if (col == 1) 
		height = val1;
        else if (col == 2) 
		height = val2;
        else if (col == 3) 
		height = val3;
        else if (col == 4) 
		height = val4;
        else height = val5;

        cout << "\nColumn " << col << ":" << endl;
        for (int i = max_value; i > 0; i--) {
            if (height >= i) cout << "# ";
            else cout << "  ";
            cout << endl;
        }
        cout << "_\n";  // Base line for each column
    }

    // ?? **Step 2: Combined Bar Chart Printing**
    cout << "\nFinal Combined Bar Chart:\n";
    for (int i = max_value; i > 0; i--) {
        for (int j = 1; j <= 5; j++) {
            int height;
            if (j == 1) 
			height = val1;
            else if (j == 2) 
			height = val2;
            else if (j == 3) 
			height = val3;
            else if (j == 4) 
			height = val4;
            else height = val5;

            if (height >= i) cout << "# ";
            
			else cout << "  ";
        }
        cout << endl;
    }

    // Base line
    for (int i = 1; i <= 5; i++) {
        cout << "_ ";
    }
    cout << endl;

    return 0;
}

