using namespace std;

void square_in_place(int& x) { // pass by reference
    x = x * x;
}

int main() {
    int num = 5;
    square_in_place(num);
    cout << "Squared = " << num << endl; // 25
}
