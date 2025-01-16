#include <stdio.h>

int main () {
    //Declare variables
    char name[] = "John doe";
    int courseID = 2271;
    int studentID = 100234;
    int difference = studentID - courseID;

    //Print the output 
    printf("Name: %s/n", name);
    printf("Course_ID: %d/n", courseID); 
    printf("Student_ID: %d/n", studentID);
    printf("Student_ID - Course ID is: %d/n", difference);

    return 0;
}