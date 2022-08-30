def tupla(lista):
    tup = tuple(lista)
    return tup

def checarTupla(tupla,cadena):
    for i in tupla:
        if  cadena in tupla:
            return True
        else:
            return False



def crearTupla(lista,letra,numero):
    lista2 = []
    for i in range(len(lista)):
        elemento = lista[i]
        if letra in str(lista[i]):
            lista2.append(letra)
    print(lista2)

    #tupla2 = [i for i in lista if i in lista]
    #print(tupla2)
    
def crearTupla2(lista,letra,numero):
    lista2 = []
    elemento = letra
    longitud = len(lista2)
    contador = 0
    for i in range(len(lista)):
        for j in range(longitud):
            if letra in str(lista[i][j]):
                contador += 1
        for i in range(contador):       
            elemento = str(elemento) + str(letra)
        print(elemento)
        contador = 0
        lista2.append("")
        lista2[i] = elemento
        elemento = letra
    print(lista2)





lista = ["holaaa","nati","te","quiero","a"]
tupla1 = 'kiwi','platano','nati'



print(tupla(lista))
print(checarTupla(tupla1,'nati'))
crearTupla2(lista,'a',2)















