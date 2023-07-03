#include <iostream> 
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}
	virtual float hitungNilaiAkhir() { return 0;}
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }


	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getpresensi() {
		return presensi;
	
		

	}

};

class pemrograman : public MataKuliah {

};
int main() {

}

