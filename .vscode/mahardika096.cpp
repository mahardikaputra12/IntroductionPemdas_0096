#include <iostream>
using namespace std;


float input_berat();
float input_tinggi();
float hitung_bmi(float b, float t);
string status_bmi(float bmi);

int main() {
    float b, t, bmi;
    string status;

    cout << "--- Selamat Datang Mahasiswa Kelas B 2025 ---" << endl;
    
    b = input_berat();
    t = input_tinggi();
    
    bmi = hitung_bmi(b, t);
    status = status_bmi(bmi);

    cout << "\n--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << status << endl;

    return 0;
}


float input_berat() {
    float berat;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    return berat;
}

float input_tinggi() {
    float tinggi;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
    return tinggi;
}

float hitung_bmi(float b, float t) {
    return b / (t * t);
}

string status_bmi(float bmi) {
    string s;
    if (bmi < 18.5) {
        s = "Berat Badan Kurang";
    } else {
        if (bmi < 25) {
            s = "Berat Badan Normal";
        } else {
            if (bmi < 30) {
                s = "Berat Badan Kelebihan";
            } else {
                s = "Obesitas";
            }
        }
    }
    return s;
    // Propotype fungsi
    // fungsi input
    // Rumus berat badan ideal
    // berat badan ideal
    //else
}