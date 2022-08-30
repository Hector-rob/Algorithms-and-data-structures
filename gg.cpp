#include <iostream>
#include <string>

using namespace std;

int main(){
    int opcion;
    string nom_usuario = "Caramelito28";
    string pass;
    string password = "Pikachu123";
    string usuario;
    string new_nom_usuario;
    string new_pass;
    cout << "Ingresa la opción deseada: " << endl;
    cout << "1. Inicio de sesión" << endl;
    cout << "2. Crear cuenta" << endl;
    cout << "3. Salir" << endl;
    cin >> opcion;
    switch(opcion){
        case 1:
            cout << "Inicio de sesión\n" << endl;
            cout << "Ingresa tu nombre de usuario: " << endl;
            cin >> usuario;
            cout << "Ingresa tu contraseña: " << endl;
            cin >> pass;
            do{
                cout << "Ingresa tu nombre de usuario: " << endl;
                cin >> usuario;
                cout << "Ingresa tu contraseña: " << endl;
                cin >> pass;
                if(usuario != nom_usuario || pass != password){
                    cout << "Usuario o contraseña incorrectos" << endl;
                } 
            }
            while(usuario != nom_usuario || pass != password);
            cout << "Bienvenid@ a AbogApp " <<usuario << endl;
            cout << "Selecciona una opción: " << endl;
            

        case 2:
            cout << "Crear cuenta" << endl;
            cout << "Introduce tu nombre de usuario: ";
            cin >> new_nom_usuario;
            do{
                cout << "Introduce tu contraseña: "; 
                cin >> new_pass;
                cout << "Vuelve a introducir tu contraseña: ";
                cin >> pass;
                if(new_pass != pass) {
                    cout << "La contraseña no coincide, vuelve a ingresar tu contraseña" << endl;
                }
            }
            while(new_pass != pass);
            cout << "Cuenta creada exitosamente!" << endl << endl;
            cout << "Bienvenid@ a AbogApp " << new_nom_usuario << endl;
    }

    return 0;
}