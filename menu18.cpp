#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;


void menu(string usuario){
    int opcion;
    do{
        cout << "\n<<<<<<<<< Menu principal >>>>>>>>>\n" << endl;
        cout << "Bienvenid@ a AbogApp " << usuario << endl;
        cout << "1. Entregar documentos" << endl;
        cout << "2. Ver mis documentos" << endl;
        cout << "3. Comunicarse con abogado" << endl;
        cout << "4. Ver Perfil" << endl;
        cout << "5. Notificaciones" << endl;
        cout << "6. Registrar abogado" << endl;
        cout << "7. Preguntas frecuentes" << endl;
        cout << "8. Recomendaciones de abogados" << endl;
        cout << "9. Ajustes" << endl;
        cout << "10. Cerrar sesión" << endl;
        cout << "\nSelecciona una opción: ";
        cin >> opcion;
        cout << endl;
        switch(opcion){
            case 1:
                cout << "1. Entregar documentos" << endl;
                cout << "// Mostrar documentos seleccionables //";
                cout << "// Subir archivo a la base de datos del abaogado correspondiente //";
                break;
            case 2:
                cout << "2. Ver mis documentos" << endl;
                cout << "// Mostrar documentos legales por orden de más reciente //";
                break;
            case 3:
                cout << "3. Comunicarse con abogado" << endl;
                cout << "// Iniciar chat //" << endl;
                break;
            case 4:
                cout << "4. Ver Perfil" << endl;
                cout << "Nombre de usuario: " << usuario << endl;
                break;
            case 5:
                cout << "5. Notificaciones" << endl;
                break;
            case 6:
                cout << "6. Registrar abogado" << endl;
                cout << "Introduce nombre completo y correo del abogado o escanea codigo: ";
                break;
            case 7:
                cout << "7. Preguntas frecuentes" << endl;
                cout << "¿Qué se necesita para un divorcio";
                cout << "Estar casado" << endl;
                break;
            case 8:
                cout << "8. Recomendaciones de abogados" << endl;
                cout << "Gertrudis Ramirez: 5 estrellas" <<endl;
                cout << "Helen Chufe 5 estrellas";
                cout << "Elba Surero 4.8 estrellas"<< endl;
                cout << "Aitor Tilla 4.55 estrellas" << endl;
                cout << "Lola Mento 4.44 estrellas" << endl;
                cout << "Ines tornudo 4.33 estrellas" << endl;
                cout << "Matias Queroso 4.22 estrellas" << endl;
                cout << "Esteban Quito 4 estrellas" << endl;
                cout << "Alex Cremento 4 estrellas" << endl;
                cout << "Elton Tito 4 estrellas" << endl;
                cout << "Pere Gil 4 estrellas" << endl;
                break;
            case 9:
                cout << "9. Ajustes" << endl;
                break;
            case 10:
                cout << "Hasta luego " << usuario << endl;
                exit(0);
        }
    }
    while(opcion != 10);
}

int main(){
    int opcion;
    string nom_usuario = "Caramelito28";
    string password = "Pikachu123";
    string pass, new_nom_usuario, new_pass, usuario;
    vector<pair<string, string> > usuarios;
    pair <string, string> caramelito;
    caramelito.first = "Caramelito28";
    caramelito.second = "Pikachu123";
    usuarios.push_back(caramelito);
    cout << "\n<<<<<<<<< AbogApp >>>>>>>>>\n" << endl;
    cout << "1. Inicio de sesión" << endl;
    cout << "2. Crear cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "\nIngresa la opción deseada: ";
    cin >> opcion;
    do{
        switch(opcion){
            case 1:
                cout << "Inicio de sesión\n" << endl;
                cout << "Ingresa tu nombre de usuario: ";
                cin >> usuario;
                cout << "Ingresa tu contraseña: ";
                cin >> pass;
                for(int i = 0; i < usuarios.size(); i++){
                    if(usuarios[i].first != usuario || usuarios[i].second != pass){
                        do{
                            cout << "Ingresa tu nombre de usuario: ";
                            cin >> usuario;
                            cout << "Ingresa tu contraseña: ";
                            cin >> pass;
                            if(usuarios[i].first != usuario || usuarios[i].second != pass){
                                cout << "Usuario o contraseña incorrectos" << endl;
                            } 
                        }
                        while(usuarios[i].first != usuario || usuarios[i].second != pass); 
                    }                
                }
                menu(usuario);

            case 2:
                cout << "Crear cuenta" << endl;
                cout << "Introduce tu nombre de usuario: ";
                cin >> new_nom_usuario;
                pair<string, string> new_user;
                new_user.first = new_nom_usuario;
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
                new_user.second = pass;
                usuarios.push_back(new_user);
                cout << "Cuenta creada exitosamente!\n" << endl;
                cout << "Bienvenid@ a AbogApp " << new_nom_usuario << endl;
                menu(new_nom_usuario);
        }
    }
    while(opcion != 3);
    
    return 0;
}