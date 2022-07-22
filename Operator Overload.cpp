#include<iostream>
using namespace std;
class Tile{
	private:
		int feet, inch;
	public:
		Tile(int feet, int inch){
			this->feet=feet;
			this->inch=inch;
		}
		void show(){
			cout <<"Size of tile is " << feet << " feet and "<< inch << " inch" << endl;
		}
		Tile add(Tile t){
			int f=feet+t.feet;
			int i=inch+t.inch;
			if(i>=12){
				f++;
				i-=12;
			}
			return Tile(f,i);
		}
};
main(){
	
	Tile t1(3,7),t2(6,3),t3(2,8),t4(3,9);
	Tile x=t1.add(t2);
	Tile y=x.add(t3);
	Tile z=y.add(t4);
	z.show();
}
