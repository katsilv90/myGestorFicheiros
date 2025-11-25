#include <iostream>
#include <fstream>
#include <locale.h>

using namespace std;

// Declara o objeto myfile para manipulação de arquivos
fstream myfile;

//Função para escrever texto
string escrevetexto(){
    string a;
    cout<<"Insira o testo que deseja adicionar: ";
    getline(cin, a);
    return a;
}

 //Criar ficheiro de texto - ios::out (output)
void criar(){
    myfile.open("myFicheiro.txt"); //verifica se o ficheiro existe
    if(myfile){ //se já existe o ficheiro
        cout<< "O ficheiro já existe." << endl;
    }else{ //se não existe o ficheiro
        myfile.open("myFicheiro.txt", ios::out);
        cout<< "O ficheiro foi criado." << endl;
    }
    myfile.close();// Fecha o arquivo aberto
}

 //Adicionar conteúdo ao ficheiro - ios::app (append)
void adicionar(){
    myfile.open("myFicheiro.txt", ios::app);
    if(myfile.is_open()){ //Verifica se o ficheiro já foi aberto
        myfile << escrevetexto() << endl;// Chama a função escrevetexto()
        myfile.close();// Fecha o arquivo aberto
    }else{
        cout<<"Não foi possível abrir o ficheiro"<<endl;
    }
}

//Ler conteúdo do ficheiro - ios::in (input)
void ler(){
    myfile.open("myFicheiro.txt", ios::in);
    if(myfile.is_open()){ //Verifica se o ficheiro já foi aberto
        string linhadetexto; //Variável que vai receber cada linha de texto
        while(getline(myfile, linhadetexto)){ //Enquanto o ficheiro estiver aberto
            cout << linhadetexto << endl; //Escreve cada linha de texto como uma string (linhadetexto)
        }
        myfile.close();// Fecha o arquivo aberto
    }
}

//Menu principal do programa
void menu(){
    int escolha;

    do{
        cout<<"\n*** Escolha uma opção ***"<<endl;
        cout<<endl;
        cout<<" 1 - Criar um Ficheiro "<<endl;
        cout<<" 2 -  Adicionar texto "<<endl;
        cout<<" 3 -  Ler conteúdo do ficheiro "<<endl;
        cout<<" 4 -  Fechar o programa "<<endl;
        cout<<"\nEscolha: ";
        cin>>escolha;
        cin.ignore(); // Limpa o buffer do cin após a leitura da opção

        switch(escolha){
        case 1:
            criar();
            break;
        case 2:
            adicionar();
            break;
        case 3:
            ler();
            break;
        case 4:
            cout<<"\nEncerrou gestor de ficheiros.\n"<<endl;
            break;
        default:
            cout << "\nOpção inválida! Escolha uma opção (1 - 4)!." << endl;
        }
    }while(escolha !=4);
}

int main(){
    setlocale(LC_ALL, "");

    menu();

    return 0;
}
