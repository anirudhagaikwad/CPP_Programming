/*
Develop a graphical user interface (GUI) library with a virtual base class Widget and a derived class Button.
Implement a virtual function draw() in the base class and override it in the Button class to display the button on the screen.


Input:  Widget* widget = new Button(100, 50, "Click Me!");
        widget->draw();
Output: Drawing a button with label "Click Me!" at (100, 50)

Input: Widget* widget2 = new Widget(140, 250);
       widget2->draw();
Output: Drawing a generic widget at (140, 250)

Input:  Widget* widget = new Button(200, 250, "Subscribe!");
        widget->draw();
Output: Drawing a button with label "Subscribe!" at (200, 250)

*/


#include <iostream>
#include <string>
using namespace std;

// Base class representing a Widget
class Widget {
protected:
    int x, y; // Coordinates of the widget on the screen
public:
    Widget(int _x, int _y) : x(_x), y(_y) {}

    // Virtual function to draw the widget
    virtual void draw() const {
        cout << "Drawing a generic widget at (" << x << ", " << y << ")" << endl;
    }
};

// Derived class representing a Button, inheriting from Widget
class Button : public Widget {
private:
    string label; // Label of the button
public:
    Button(int _x, int _y, string _label) : Widget(_x, _y), label(_label) {}

    // Override the draw function to display the button
    void draw() const override {
        cout << "Drawing a button with label \"" << label << "\" at (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Widget* widget = new Button(100, 50, "Click Me!");

    // When we call the draw method on the base class pointer, the virtual function
    // will be dispatched to the appropriate version based on the actual object type.
    widget->draw();

    Widget* widget2 = new Widget(140, 250);
    widget2->draw(); // Output: Drawing a generic widget at (140, 250)


    delete widget;
    return 0;
}

/*
In this program, we have defined a graphical user interface (GUI) library with a virtual base class Widget. The Widget class represents a generic widget on the screen and has two protected attributes x and y, representing the coordinates of the widget on the screen. It also has a virtual function draw(), which is intended to be overridden in the derived classes to draw the specific widget.

We then define a derived class Button, inheriting from the Widget class. The Button class adds an additional attribute label, representing the label text of the button. We provide a constructor for the Button class to initialize the x, y, and label attributes.

The Button class overrides the draw() function from the base class to provide its specific implementation of drawing a button. In this case, the draw() function of the Button class displays the button's label along with its coordinates.

In the main() function, we create a Button object using the base class pointer Widget*. This demonstrates polymorphism, as we can store derived class objects in a base class pointer. When we call the draw() function on the base class pointer, it dynamically dispatches the appropriate version of the draw() function based on the actual object type pointed to by the pointer. In this case, it calls the draw() function of the Button class to display the button on the screen.


*/
