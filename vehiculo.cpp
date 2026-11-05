#include <iostream>
#include <string>

using namespace std;

class vehiculo{
	private:
		string numeroPlaca;
		string color;
		string marca;
		int velocimetro;
	public:
		vehiculo(string,string,string,int);
		void mostrarDatos();
		void cambiarVelocidad(int vn);
};
vehiculo :: vehiculo(string nP, string c, string m, int v) {
	numeroPlaca = nP;
	color = c;
	marca = m;
	velocimetro = v;
}
void vehiculo::	mostrarDatos(){
	cout <<"El Vehiculo tiene la placa: "<<numeroPlaca<<", es de color: "<<color<<", es de la marca "<<marca<<" y va a "<<velocimetro<<"Km/h";
}
void vehiculo :: cambiarVelocidad(int vn){
	velocimetro = vn;
}
class Automovil : public vehiculo {
		private:
			int cantidadPuertas;
			int cantidadPasajeros;
		public:
			Automovil(string , string , string , int , int , int);
			void mostrarAutomovil();
			void subirPasajeros(int p);
			void bajarPasajeros(int p);
};
Automovil :: Automovil(string nP , string c , string m , int v, int cpuertas , int cpasajeros) : vehiculo(nP,c,m,v){
	cantidadPuertas = cpuertas;
	cantidadPasajeros = cpasajeros;
}
void Automovil::mostrarAutomovil(){
	mostrarDatos();
	cout<<endl<<"Tiene "<<cantidadPuertas<<" puertas y "<<cantidadPasajeros<<" pasajeros";
}
void Automovil::subirPasajeros(int p){
	cantidadPasajeros = cantidadPasajeros + p;
}
void Automovil::bajarPasajeros(int p){
	cantidadPasajeros= cantidadPasajeros - p;
}
class Camion : public vehiculo {
	private:
		int carga;
	public:
		Camion(string ,string, string, int, int);
		void mostrarCamion();
		void cambiarCarga(int car);	
};
Camion::Camion(string nP,string c,string m,int v,int car):vehiculo(nP,c,m,v){
	carga = car;
}
void Camion::mostrarCamion(){
	mostrarDatos();
	cout<<endl<<"Y lleva "<<carga;
}
void Camion::cambiarCarga(int car){
	carga=car;
}
int main(){
	Automovil a("A1B-234","Rojo","Toyota",20,4,2);
	a.mostrarAutomovil();
	cout<<endl<<"--------------------"<<endl;
	Camion c("Z1X-S3B","Verde","Scania",15,50);
	c.mostrarCamion();
	cout<<endl<<"--------------------"<<endl;
	vehiculo v("23G-HZ1","Negro","Ferrari",30);
	v.mostrarDatos();
	int cen=1,n;
	while(cen=1){
		cout<<endl<<"--------------------"<<endl;
		cout<<"Desea cambiar algun atributo: "<<endl<<"  1.C";
		cin>>n;
		c.cambiarVelocidad(n);
		c.mostrarDatos();
		cin>>cen;
		
				 
		
	}	
}

