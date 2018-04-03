#include <iostream>

using namespace std;
void drawSquare(int width) {

    if (width%2==0) {
        // EVEN

        for (int row = 0; row < width; row++) {
            for (int column = 0; column < width; column++){

                if ( column ==(width-1)) {
                    cout << "*\n";
                } else if (row == 0 || column == 0 || row==(width-1)){
                    cout << "*";
                } else if ((column == width/2 || column == (width/2)-1) && (row == width/2 || row == (width/2)-1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }

    } else {
        // ODD
        for (int row = 0; row < width; row++) {
            for (int column = 0; column < width; column++){

                if ( column ==(width-1)) {
                    cout << "*\n";
                } else if (row == 0 || column == 0 || row==(width-1)){
                    cout << "*";
                } else if ((column == width/2 || column == (width/2)-1 || column == (width/2)+1) && (row == width/2 || row == (width/2)-1 || row == (width/2) + 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
    }
}

void drawHourglass(int width) {
    width = width/2;
    if (width%2==0){
        //EVEN
        for (int i = width; i > 0; i--){
            for (int j = width; i < j; j--)
            {
                cout << " ";
            }
            for (int j = 0; i > j; j++)
            {
                cout << "*";
            }
            for (int j = 0; i > j; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = 0; i < width; i++){
            for (int j = 0; j < (width - (i+1)); j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= (2 * i) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

    } else {

        for (int i = width; i > 0; i--){
            for (int j = width; i < j; j--)
            {
                cout << " ";
            }
            for (int j = 0; i > j; j++)
            {
                cout << "*";
            }
            for (int j = 0; i > j; j++)
            {
                cout << "*";
            }
            cout << endl;
        }


        for (int k = 0; k < (width); ++k) {
            // Print middle star
            if (k == (width/2)+2){
                cout << "*"<< endl;
            } else {
                cout << " ";
            }
        }


        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < (width - (i+1)); j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= (2 * i) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

}

void diceRoll(){
    srand(time(0));

    int one=0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    for (int i = 0; i < 1000; ++i) {
        int r = (rand() % 6) + 1;

        if (r==1){
            one += 1;
        } else if (r==2){
            two += 1;
        } else if (r==3){
            three += 1;
        } else if (r==4){
            four += 1;
        } else if (r==5){
            five += 1;
        } else {
            six += 1;
        }
    }

    double percent;
    cout << endl;

    cout << "SIDE 1: ";
    percent = one/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

    cout << "SIDE 2: ";
    percent = two/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

    cout << "SIDE 3: ";
    percent = three/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

    cout << "SIDE 4: ";
    percent = four/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

    cout << "SIDE 5: ";
    percent = five/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

    cout << "SIDE 6: ";
    percent = six/10.;
    cout << percent;
    for (int j = 0; j < percent; ++j) {
        cout << "*";
    } cout << endl;

}

int main() {
    int EVEN = 100;
    int ODD = 99;


    // MARK: PRINT ALL EVEN FUNCTIONS FIRST
    cout << "EVEN" << endl;
    drawSquare(EVEN);
    cout << "\n";
    drawHourglass(EVEN);

    cout << "\n\n";
    for (int i = 0; i < 100; ++i) {
        cout << "-";
    }
    cout << "\n";
    cout << "ODD";
    cout << "\n\n";

    // MARK: PRINT ALL ODD FUNCTIONS NEXT
    drawSquare(ODD);
    cout << "\n";
    drawHourglass(ODD);

    cout << "\n\n";
    for (int i = 0; i < 100; ++i) {
        cout << "-";
    }
    cout << "\n";

    cout << "DICE ROLLER";
    diceRoll();


    return 0;
}