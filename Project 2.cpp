//
//  main.cpp
//  Proj2_905327084
//
//  Created by Alex De Santiago on 7/3/21.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string model; // phone model
    string color; // phone color
    int memory; // phone memory
    
    cout << "What type of iPhone do you want? ";
    getline( cin, model );
    cout << "What color do you want? ";
    getline( cin, color );
    cout << "How much memory do you want? ";
    cin >> memory;
    
    {
    if (model == "iPhone 12") //manually using if statements for each variable
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 64)
                
        {
                cout << "Your " << color << " " << model << " costs $799.00." << endl;
        }
        
    if (model == "iPhone 12")
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 128)
            
        {
                cout << "Your " << color << " " << model << " costs $849.00." << endl;
        }
        
    if (model == "iPhone 12")
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 256)
        {
                cout << "Your " << color << " " << model << " costs $949.00." << endl;
        }
        
    
    if (model == "iPhone 12 Mini")
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 64)
        {
                cout << "Your " << color << " " << model << " costs $699.00." << endl;
        }
        
    if (model == "iPhone 12 Mini")
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 128)
            {
                cout << "Your " << color << " " << model << " costs $749.00." << endl;
            }
        
    if (model == "iPhone 12 Mini")
        if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
            if (memory == 256)
            {
                cout << "Your " << color << " " << model << " costs $849.00." << endl;
            }
        
    
    if (model == "iPhone 12 Pro")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 128)
        {
                cout << "Your " << color << " " << model << " costs $999.00." << endl;
        }
        
    if (model == "iPhone 12 Pro")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 256)
            {
                cout << "Your " << color << " " << model << " costs $1099.00." << endl;
            }
        
    if (model == "iPhone 12 Pro")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 512)
            {
                cout << "Your " << color << " " << model << " costs $1299.00." << endl;
            }
        
    
    if (model == "iPhone 12 Pro Max")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 128)
        {
                cout << "Your " << color << " " << model << " costs $1099.00." << endl;
        }
        
    if (model == "iPhone 12 Pro Max")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 256)
            {
                cout << "Your " << color << " " << model << " costs $1199.00." << endl;
            }
            
    if (model == "iPhone 12 Pro Max")
        if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory == 512)
            {
                cout << "Your " << color << " " << model << " costs $1399.00." << endl;
            }
}
    // Where selection value is not valid messages start and all my issues lie
    
    if (model != "iPhone 12" && model != "iPhone 12 Mini" && model != "iPhone 12 Pro" && model != "iPhone 12 Pro Max") //did not realize at first that I needed to use &&'s instead of ||'s for some of the lower code
        {
        cout << "Your model selection is not valid!" << endl;
        } // GOOD DONT CHANGE IT
    
    else if (model == "iPhone 12" || model == "iPhone 12 Mini")
    {
        if (color != "White" && color != "Black" && color != "Blue" && color != "Green" && color != "Red" && color != "Purple") // put color and memory closer together to try and use else if statements to have less chances of overlap between other selection not valid statements
        {
            cout << "Your color selection is not valid!" << endl;
        } //kept getting two different selection not valid messages because I was using the || statements for everything
    
        else if (color == "White" || color == "Black" || color == "Blue" || color == "Green" || color == "Red" || color == "Purple")
                if (memory != 64 && memory != 128 && memory != 256)
        {
                cout << "Your memory selection is not valid!" << endl;
            } //here i was really struggling with else statements so I just decided to use an if statement for the final memory not valid statement and used the else statement here to code for all three statements for all the iphones
    } // the code is works but I am getting an additional memory selection not valid statement so I gotta fix up the else statement I believe
        
    //these selection not valid took the longest because it was hard for me to figure out how to give only one of the selection not valid statements without stopping the code entirely
    
    else if (model == "iPhone 12 Pro" || model == "iPhone 12 Pro Max")
    {
        if (color != "Graphite" && color != "Silver" && color != "Gold" && color != "Blue")
        {
            cout << "Your color selection is not valid!" << endl;
        }
        else if (color == "Graphite" || color == "Silver" || color == "Gold" || color == "Blue")
            if (memory != 128 && memory != 256 && memory != 512)
            {
                cout << "Your memory selection is not valid!" << endl;
            }
    }
    
        //fix last memory error message for pro and pro max
    return(0);
    }
void prompt( string& model, string& color, int& memory )
{
}
