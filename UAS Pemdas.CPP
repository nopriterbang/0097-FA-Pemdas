/**
 * @file UCP3.CPP
 * @author Naufal Priyamukti Wibowo (20230140097)
 * @brief UAS Pemograman dasar
 * @version 0.1
 * @date 2024-06-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*!
* \mainpage Sistem manajememen perekapan presensi, activity, exercise, dan tugas akhir pada mata kuliah
*
* \section structure_sec Struktur kode terdiri dari 2 class
* - \b matakuliah : untuk menangani presensi, activity, exercise, dan tugas akhir
* - \b pemograman : untuk menangani matakuliah pemograman
* - \b jaringan : untuk menanganu matakuliah jaringan
* - \b int main : sebagai tempat eksekusi program
*
*
*/
#include <iostream>
using namespace std;



/**
 * 
 * @class Matakuliah
 *
 * @brief base class
 * 
 */
class Matakuliah
{
private: ///< access private
    virtual void nilai() = 0;
    float presensi; ///< variable float untuk menyimpan nilai presensi
    double activity; ///< variable double untuk menyimpan nilai activity
    double exercise; ///< Variable double untuk menyimpan nilai exercise
    double tugasakhir; ///< Variable double untuk menyimpan nilai tugas akhir
    // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public: ///<access public
    Matakuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasakhir = 0.0;
        // tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
    }
   
    /**
     * @brief getter dan setter untuk mengakses dari access private  mata kuliah
     * 
     * @param setPresensi 
     */
    void setPresensi(float nilaipresensi) 
    {
        this->presensi = nilaipresensi;
    }
    float getPresensi()
    {
        return presensi;
    }

    void setActivity(double nilaiactivity ) 
    {
        this->activity = nilaiactivity;
    }
    double getActivity()
    {
        return activity;
    }

    void setExercise(double nilaiexercise)
    {
        this->exercise;
    }

    void setTugasAkhir(double nilaitugasakhir) {
        this->tugasakhir = nilaitugasakhir;
    }

    double getTugasAkhir() {
        return tugasakhir;
    }


    /**
     * @brief Fungsi virtual untuk mendapatkan nama mata kuliah
     * 
     */
    virtual void namaMatakuliah() = 0; 
     /**
     * @brief Fungsi virtual untuk input nilai
     * 
     */
    virtual void inputNilai() = 0; 
     /**
     * @brief Fungsi virtual untuk menghitung nilai akhir
     * 
     * 
     */
    virtual double hitungNilaiAkhir() = 0; 
    /**
     * @brief Fungsi virtual untuk mengecek kelulusan
     * 
     * 
     */
    virtual bool cekKelulusan() = 0; 

// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};

/**
 * @class pemograman
 * 
 *
 * @brief subclass dari mata kuliah
 * 
 */
class Pemrograman : public Matakuliah
{
    
     /**
     * @brief Menampilkan nama mata kuliah
     * 
     */
    void namaMatakuliah() override {
        cout << "Matakuliah: Pemrograman" << endl;
    }

    /**
     * @brief Menginput nilai untuk mata kuliah Pemrograman
     * 
     * @param inputNilai
     */
    void inputNilai() override {
        cout << "Masukkan nilai Presensi: ";
        float presensi;
        cin >> presensi;
        setPresensi(presensi);

        cout << "Masukkan nilai Activity: ";
        double activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai Exercise: ";
        double exercise;
        cin >> exercise;
        setExercise(exercise);

        cout << "Masukkan nilai Tugas Akhir: ";
        double tugasakhir;
        cin >> tugasakhir;
        setTugasAkhir(tugasakhir);
    }

    /**
     * @brief Menghitung nilai akhir untuk mata kuliah Pemrograman 
     * 
     * @return double Nilai akhir
     */
    double hitungNilaiAkhir() override {
        float bobotPresensi = 0.1;
        double bobotActivity = 0.2;
        double bobotExercise = 0.3;
        double bobotTugasAkhir = 0.4;

        double nilaiAkhir = 
        getPresensi() * bobotPresensi +
        getActivity() * bobotActivity +
        getExercise() * bobotExercise +
        getTugasAkhir() * bobotTugasAkhir;

        return nilaiAkhir;
    }

    /**
     * @brief Mengecek kelulusan untuk mata kuliah Pemrograman
     * 
     * 
     * @param parameter-bool cekKelulusan
     */
    bool cekKelulusan() override {
        double nilaiAkhir = hitungNilaiAkhir();
        return nilaiAkhir >= 75.0;
    }
};

/**
 * @class jaringan
 * @brief subclass dari matakuliah
 * 
 */
class Jaringan : public Matakuliah
{
void namaMataKuliah() override {
        cout << "Matakuliah: Jaringan" << endl;
    }

    /**
     * @brief Menginput nilai untuk mata kuliah Jaringan
     * 
     * @param inputNilai
     */

    void inputNilai() override {
        cout << "Masukkan nilai Activity: ";
        double activity;
        cin >> activity;
        setActivity(activity);

        cout << "Masukkan nilai Exercise: ";
        double exercise;
        cin >> exercise;
        setExercise(exercise);
    }



    /**
     * @brief Mengecek kelulusan untuk mata kuliah Pemrograman
     * 
     * 
     * @param parameter-bool cekKelulusan
     */
    bool cekKelulusan() override {
        double nilaiAkhir = hitungNilaiAkhir();
        return nilaiAkhir >= 75.0;
    }
    
};

/**
 * @brief fungsi utama untuk eksekusi program
 * 
 * @return int main berfungsi untuk mengeksekusi program
 */
int main()
{
    char pilih;
    Matakuliah *Matakuliah;
    Pemrograman  pemrograman;
    Jaringan  jaringan;

    /**
     * @brief tampilan untuk memilih mata kuliah
     * 
     */
    cout << "Pilih mata kuliah: " << endl;
    cout << "1. Pemrograman" << endl;
    cout << "2. Jaringan" << endl;
    cin >> pilih;

    // isi disini untuk menentukan mata kuliah yang dipilih
}
