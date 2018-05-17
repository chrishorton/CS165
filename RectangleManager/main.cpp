#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>


using namespace std;

struct Rectangle {
    int height;
    int width;
    string id;
    // Type is h, v, s
    // h is horizontally bigger
    // v is vertically bigger
    // s is square
    string type;

    void display(){

    }
};

// Had to move this outside of the class becuase was getting overwritten
vector <Rectangle*> rectangles;

class RectMgr {

    void addRectangles() {
        int heightIn, widthIn;

        fstream inputFile;
        string fileName = "/Users/chris/CLionProjects/CS165/RectangleManager/rectangles.txt";

        inputFile.open(fileName.c_str(), ios::in);

        if (inputFile.good()) {
            while (!inputFile.eof()) {
                inputFile >> heightIn >> widthIn;
                // Call this constructor to create rectangle with the height and width
                RectMgr(widthIn, heightIn);
            }
        }
    }

public:

    ~RectMgr(){
        for (int i = 0; i < rectangles.size(); ++i) {
            if(rectangles[i]!= nullptr)
                delete rectangles[i];
        }
    }

    RectMgr(){
        // Called upon first initialization of this class
        addRectangles();
    };

//    ~RectMgr() {
//        for (int i = 0; i < rectangles.size(); ++i) {
//            if(rectangles[i]!= nullptr)
//                delete rectangles[i];
//        }
//    }
//

    RectMgr(int width, int height){
        Rectangle * rect = new Rectangle;

        rect->width = width;
        rect->height = height;

        int random = (rand() %100000);

        rect->id = "r" + to_string(random);
        if ( width > height ) {
            rect->type = "h";
        } else if (height > width) {
            rect->type = "v";
        } else if (height == width ) {
            rect->type = "s";
        }
        rectangles.push_back(rect);
    }

    void displayRect(int h, int w){
        cout << endl;
        cout << string( w, '*' ) << endl;

        // Draw sides: asterisk, width-2 spaces, asterisk
        for( int j = 0; j < h - 2; ++j )
            cout << '*' << string( w - 2, ' ' ) << '*' << endl;

        // Draw row of 'w' asterisks for bottom side
        cout << string( w, '*' ) << endl;
    }

    void display(string toDisplay){
        Rectangle currentRect;

        // Which way is faster, one big loop with lots of checks or small nested loops - test both
        // I think the other way will be faster... Of course...
        // Best case 2 comparisons, worst case, 4 comparisons
        for (int i = 0; i < rectangles.size(); ++i) {

            currentRect = * rectangles[i];

            if ( toDisplay == "v" ) {
                if ( currentRect.width < currentRect.height ) {
                    cout << "Height: " << currentRect.height << " Width: " << currentRect.width << " ID: " << currentRect.id << endl;
                    cout << "Would you like to see what this rectangle looks like? (y/n) " << endl;
                    string input;
                    cin >> input;
                    if (input == "n"){
                    } else if (input == "y") {
                        displayRect(currentRect.height, currentRect.width);
                    }
                }
            } else if ( toDisplay == "h" ) {
                if (currentRect.width > currentRect.height) {
                    cout << "Height: " << currentRect.height << " Width: " << currentRect.width << " ID: " << currentRect.id << endl;
                    cout << "Would you like to see what this rectangle looks like? (y/n) " << endl;
                    string input;
                    cin >> input;
                    if (input == "n"){
                    } else if (input == "y") {
                        displayRect(currentRect.height, currentRect.width);
                    }
                }
            } else if ( toDisplay == "s" ) {
                if (currentRect.width == currentRect.height) {
                    cout << "Height: " << currentRect.height << " Width: " << currentRect.width << " ID: " << currentRect.id << endl;
                    cout << "Would you like to see what this rectangle looks like? (y/n) " << endl;
                    string input;
                    cin >> input;
                    if (input == "n"){
                    } else if (input == "y") {
                        displayRect(currentRect.height, currentRect.width);
                    }
                }
            }
        }
    }

    void calculateArea(string idToFind){
        Rectangle currentRect;
        int area;
        for (int i = 0; i < rectangles.size(); ++i) {
            currentRect = * rectangles[i];
            if (currentRect.id == idToFind) {
                area = currentRect.height * currentRect.width;
                cout << "Height: " << currentRect.height << " Width: " << currentRect.width << " ID: " << currentRect.id;
                cout << " Area: " << area << endl;
            }
        }
    }

    void promptUser(){
        string input;

        bool toContinue = true;

        while (toContinue) {
            cout << endl << "What would you like to see?" << endl << "Input help to see all options";
            cin >> input;
            cout << endl << endl;

            if (input == "help" || input=="Help" ) {
                cout << "Press V to see all rectangles with longer vertical lengths" << endl;
                cout << "Press H to see all rectangles with longer horizontal lengths" << endl;
                cout << "Press S to see all squares" << endl;
                cout << "Press A to see the area of a certain rectangle that you specify an ID for" << endl;
                cout << "Press Q to quit" << endl << endl;

            } else if (input=="V" ||input=="v"){
                // Check for all vertical longers
                display("v");
            } else if (input=="H"||input=="h"){
                // Check for all horizontal longers
                display("h");
            } else if (input=="A"||input=="a"){
                // Ask for id
                // search rectangles for that id
                // If you have time, make rectangles a linked list and sort so you can do binary search - big speed up at scale :)
                string idInput;
                cout << "Which rectangle would you like to see? ";
                cin >> idInput;
                calculateArea(idInput);
            } else if (input=="S"||input=="s") {
                display("s");
                // Display all squares
            } else if (input=="Q"||input=="q") {
                break;
            }
        }
    }


    void displayAll(){
        for (int i = 0; i < rectangles.size(); ++i) {
            cout << rectangles[i]->height << " ";
            cout << rectangles[i]->width << " ";
            cout << rectangles[i]->id << endl;
        }
    }
};



int main() {
    srand(time(0));

    RectMgr main;
    main.displayAll();
    main.promptUser();

    return 0;
}