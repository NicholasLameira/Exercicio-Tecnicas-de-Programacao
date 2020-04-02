int func (int n )
{
    if ( n == 0 ) return 0;
    else return n + func (n-1);
}

/*
Analisando o comportamento da função recursiva acima

O valor entregue para n é 8 e vamos ter de mostar como a coisa vai funcionar

Chamadas Recursiva:
1º Entrada na Função e verificar se o caso base foi alcançado e esse não é o caso, então retornamos:
8 + func(8 - 1) = 8 + func(7)

2º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
7 + func(7 - 1) = 7 + func(6)

3º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
6 + func(6 - 1) = 6 + func(5)

4º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
5 + func(5 - 1) = 5 + func(4)

5º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
4 + func(4 - 1) = 4 + func(3)

6º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
3 + func(3 - 1) = 3 + func(2)

7º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
2 + func(2 - 1) = 2 + func(1)

8º Entrada na Função, voltamos a ver se o caso base foi alcançado e novamente assim não foi e vamos retornar:
1 + func(1 - 1) = 1 + func(0)

9º Agora quando voltamos a entrar na função vamos ver que o caso base foi alcansado retornamos o valor 0 e começamos a fazer o caminho inverso, já que agora sabemos qual é valor de func(0) que é 0 podemos substituir este valor na 8º entrada da função e ficaria:

8º Entrada:
1 + func(0) = 1; e note que a 8º Entrada é corresponde a func(1) que agora vale 1, logo

7º Entrada:
2 + func(1) = 2 + 1 = 3; e voltamos a informar que o mesmo que aconteceu com a 8º Entrada voltara a acontecer com as anteriores

6º Entrada:
3 + func(2) = 3 + 3 = 6;

5º Entrada:
4 + func(3) = 4 + 6 = 10;

4º Entrada:
5 + func(4) = 5 + 10 = 15;

3º Entrada:
6 + func(5) = 6 + 15 = 21;

2º Entrada:
7 + func(6) = 7 + 21 = 28;

1º Entrada:
8 + func(7) = 8 + 28 = 36;
*/