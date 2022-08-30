class Gauss{
    public:
    static int sumaIt(int);
    static int sumaG(int);
    static int sumaRec(int);
};




int Gauss::sumaIt(int var){
    int resultado = 0;
    for(int i = 0; i<= var; i++){ //Gauss it
        resultado += i;
    }
    return resultado;
}

int Gauss::sumaG(int var){
    return (var+1) * (float(var/2)); // o var/2.0f
}

int Gauss::sumaRec(int var){
    if (var == 0){
        return 0;
    }
    else{
        return var + sumaRec(var-1); //terminar recursion
    }
}

