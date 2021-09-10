#include<iostream>

using namespace std;

class Car{
private:
    int x,y,*p;
    int *q=new int;
public:
	Car(int x1,int y1,int z1)
	{cout<<"Car ctr\n";
        x=x1;
        y=y1;

        p=q;
        p=&z1;
        *p=z1;
	}//constructor

	~Car()
	{
	    delete q;
	}

	int setz(int z1)
	{

	    return *p=z1;
	}

	Car(const Car& c)          //copy constructor
	{cout<<"Car Copy ctr\n";
	x=c.x;
	y=c.y;
	p=new int;          // This block created for deep copy
	*p=*(c.p);
	}

/*	Car&  func( Car &oldCar)// 1
	{
		Car &newCar = oldCar; // 2

		return newCar; // 3
	}*/

	int getx(){return x;}
	int gety(){return y;}
	int getz(){return *p;}

};
int main()
{
	Car car(10,20,30); //constructor call
	Car car1=car;
	//car.func(car);
	//car1.setz(40);  //To check deep copy modifying value of another object or not;



	cout<<"car.x = "<<car.getx()<<endl<<"car.y = "<<car.gety()<<endl<<"car.z = "<<car.getz();
	cout<<"\ncar1.x = "<<car1.getx()<<endl<<"car1.y = "<<car1.gety()<<endl<<"car1.z = "<<car1.getz();
	return 0;
}
