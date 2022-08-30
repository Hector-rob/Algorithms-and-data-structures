
class DemoFact{
    public:
    static int factInt(int);
    int factRec(int);
};

int DemoFact::factInt(int var){
    int resultado = 0;
    for (int i = var; i >=2; i--){
        resultado = i*resultado;
    }
    return resultado;

}


int DemoFact::factRec(int val){
    //caso base el cual me permita terminar, si no debe de haber una llamada recursiva

    if(val == 0){
        return 1;
    }
    else{
        return val * factRec(val-1); //recursion
    }
}


