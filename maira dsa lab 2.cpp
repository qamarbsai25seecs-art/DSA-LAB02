//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int rows, cols;
//
//    // 1. Read and validate rows and columns
//    do
//    {
//        cout << "Enter number of students: ";
//        cin >> rows;
//    } while (rows <= 0);
//
//    do
//    {
//        cout << "Enter number of subjects: ";
//        cin >> cols;
//    } while (cols <= 0);
//
//    // 2. Allocate array of row pointers
//    int** marks = new int* [rows];
//
//    // Allocate columns for each row
//    for (int r = 0; r < rows; r++)
//    {
//        marks[r] = new int[cols];
//    }
//
//    // 3. Read marks
//    for (int r = 0; r < rows; r++)
//    {
//        cout << "Student " << r + 1 << ":\n";
//
//        for (int c = 0; c < cols; c++)
//        {
//            do
//            {
//                cout << "Enter mark for subject " << c + 1 << " (0-100): ";
//                cin >> marks[r][c];
//
//                if (marks[r][c] < 0 || marks[r][c] > 100)
//                {
//                    cout << "Invalid mark! Please enter a value between 0 and 100.\n";
//                }
//
//            } while (marks[r][c] < 0 || marks[r][c] > 100);
//        }
//    }
//
//    // Display matrix
//    cout << "\nMarks Matrix:\n";
//
//    for (int r = 0; r < rows; r++)
//    {
//        for (int c = 0; c < cols; c++)
//        {
//            cout << marks[r][c] << " ";
//        }
//
//        cout << endl;
//    }
//
//    // 4. Calculate totals
//    int bestTotal = 0;
//    int bestStudent = 1;
//
//    // Find first student's total first
//    int total = 0;
//
//    for (int c = 0; c < cols; c++)
//    {
//        total += marks[0][c];
//    }
//
//    bestTotal = total;
//
//    // Compare remaining students
//    for (int r = 1; r < rows; r++)
//    {
//        total = 0;
//
//        for (int c = 0; c < cols; c++)
//        {
//            total += *(*(marks + r) + c);
//        }
//
//        cout << "Student " << r + 1 << " total: " << total << endl;
//
//        if (total > bestTotal)
//        {
//            bestTotal = total;
//            bestStudent = r + 1;
//        }
//    }
//
//    // Display first student's total too
//    int firstTotal = 0;
//
//    for (int c = 0; c < cols; c++)
//    {
//        firstTotal += marks[0][c];
//    }
//
//    cout << "Student 1 total: " << firstTotal << endl;
//
//    cout << "\nHighest total: " << bestTotal << endl;
//    cout << "Top student: " << bestStudent << endl;
//
//    // 5. Delete every separately allocated row
//    for (int r = 0; r < rows; r++)
//    {
//        delete[] marks[r];
//    }
//
//    // Delete row-pointer array
//    delete[] marks;
//
//    // Set pointer to null
//    marks = nullptr;
//
//    return 0;
//}
