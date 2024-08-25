int JogaDado(int faces){
    //Ja esta criada
}

int testaDados(){
    int soma1=0, soma2=0;
    for (int i=0;i<100;i++){
        int valor = JogaDado(10);
        soma1+= valor;
    }
    for (int i=0;i<50;i++){
        int valor2 = JogaDado(20);
        soma2+= valor2;
    }
    int valor3 = JogaDado(100);
    if (soma1>soma2){
        if(soma1>valor3){
            return 10;
        }
        else{
            return 100;
        }
    }
    else if(soma2>soma1){
        if (soma2>valor3){
            return 50;
        }
        else{
            return 100;
        }
    }
}
