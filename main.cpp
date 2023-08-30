#include <iostream>

using namespace std;

void questao1(){
	for (int i = 1; i <= 50; i++){
		if(i % 4 == 0){
			
			cout << "PIM" << endl;
			
		}
		
		else {
			
			cout << i << endl;
		}
	}
}

using namespace std;
void questao2(){
	
	const int VET = 20;
    int valores[VET];
    
    cout << "Digite " << VET << " valores inteiros:" << endl;
    
    for (int i = 0; i < VET; i++){
    	
    	cout << "Numero " << i+1 << ": ";
        cin >> valores[i];
	}
	
	int soma = 0;
	
	for (int i = 0; i < VET; i++){
		soma += valores[i];
	}
	
	cout << "Soma: " << soma << endl;	
}
using namespace std;
void questao3(){
	int n; 
	
	cout << "Digite a quantidade de numeros que deseja informar:" << endl;
	cin >> n;
	
	
	int somaPares = 0;
	int numero;


	for (int i = 0; i < n; i++ ){
		
		cout << "Digite um numero:" << endl;
		cin >> numero;
		
		if(numero % 2 == 0){
			
			somaPares += numero;
			
			cout << "Soma: " << somaPares << endl;

		}
		
	}
	if(somaPares > 0){
		cout << "Soma dos numeros pares:" << somaPares << endl;
	}
	
	else{
		cout << "a soma nao foi possivel pois todos os numeros sao impares!" << endl;
	}
}

using namespace std;

void questao5(){
	int numero;
	int fatorial = 1;
	
	cout << "Digite um numero:" << endl;
	cin >> numero;
	
	for (int i = numero; i >= 1; i--){
		fatorial *= i;
		cout << i;
		
		if (i > 1){
			cout << ".";
		}	
	}
	
	cout << " = " << fatorial << endl;
}

using namespace std;

void questao6(){
	const int VET = 10;
	
	int valores[VET];
	
	cout << "Digite " << VET << " valores inteiros:" << endl;
	
	for (int i = 0; i < VET; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> valores[i];
    }
    
	
	cout << "Valores pares: ";
	for (int i = 0; i < VET; i++){
		
		if (valores[i] % 2 == 0 ){
			cout << valores[i] << " ";
		}
		
	}
	
	cout << "\nValores impares: " ;
	
	for (int i = 0; i < VET; i++ ){
		if(valores[i] % 2 != 0){
			cout << valores[i] << " ";
			
		}
	}
	
	cout << endl;

}

using namespace std;

void questao7(){
	const int VET = 100;
	double valores[VET];
	
	cout << "Digite" << VET << "valores inteiros:" << endl;
	
	for (int i = 0; i < VET; i++){
		cout << "Numero:" << i+1 << ": ";
		cin >> valores[i];
	}
	
	cout << "Posicoes com valores menores ou iguais a 10:" << endl;
    
    for (int i = 0; i < VET; i++) {
        if (valores[i] <= 10) {
            cout << "V [" << i << "] = " << valores[i] << endl;
        }
    }
}

using namespace std;

void questao8(){
	
	int coluna;
	int matriz[3][4];
	
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			cout <<" Digite o elemento da linha " << i << " coluna " << j << ": ";
			cin >> matriz[i][j];
		}
	}
	
	cout << "Digite um numero de 0 a 9 para indicar a coluna a ser somada:" << endl;
	cin >> coluna;
	
	int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][coluna];
    }
    
    cout << "Matris resultante: " << endl;
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Soma dos valores na coluna " << coluna << ": " << soma << endl;


	
}

using namespace std;

void questao10(double nota1, double nota2, double nota3){
	
	double media = (nota1 + nota2 + nota3) / 3;
	
	cout << "Media: " << media << endl;
}
int main(int argc, char** argv) {
	
	int escolha;
	
	cout << "Escolha a questao (1 a 11):" << endl;
	cin >> escolha;
	
	switch(escolha){
		
		case 1:
			questao1();
			break;
		
		case 2:
			questao2();
			break;
			
		case 3:
			questao3();
			break;
			
		case 5:
			questao5();
			break;
			
		case 6:
			questao6();
			break;
			
		case 7:
			questao7();
			break;
			
		case 8:
			questao8();
			break;
			
		case 10:
			
			double nota1, nota2, nota3;
			
			cout << "Digite a primeira nota: ";
            cin >> nota1;

            cout << "Digite a segunda nota: ";
            cin >> nota2;

            cout << "Digite a terceira nota: ";
            cin >> nota3;
            
			questao10(nota1,nota2,nota3);
			break;
			
		default:
		cout << "opcao invalida!" << endl;	
	}
	
	system("pause");
	return 0;
}
