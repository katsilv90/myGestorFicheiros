# myGestorFicheiros

**My Gestor de Ficheiros** é um programa simples em **C++** para criar, adicionar conteúdo e ler arquivos de texto.  
Este projeto demonstra a manipulação básica de arquivos usando a biblioteca padrão `<fstream>`.

---

## 🛠 Funcionalidades

O programa possui um **menu interativo** que permite ao utilizador:

1. **Criar um arquivo de texto**  
   - Se o arquivo já existir, o programa informa que ele já existe.
2. **Adicionar texto ao arquivo**  
   - Permite escrever e adicionar várias linhas ao arquivo.
3. **Ler o conteúdo do arquivo**  
   - Exibe no console todas as linhas do arquivo.
4. **Fechar o programa**  

---

## 📂 Estrutura do Código

- **`main()`**: Inicializa o programa e chama o menu principal.
- **`menu()`**: Exibe o menu e gerencia as opções escolhidas pelo utilizador.
- **`criar()`**: Cria um arquivo de texto caso ele não exista.
- **`adicionar()`**: Adiciona conteúdo ao arquivo existente.
- **`ler()`**: Lê e exibe o conteúdo do arquivo.
- **`escrevetexto()`**: Função auxiliar que solicita o texto a ser adicionado.

---

## ⚙️ Tecnologias

- Linguagem: **C++**
- Biblioteca: `<fstream>` (para manipulação de arquivos)
- Compatível com qualquer compilador C++ moderno.

---

## 📌 Como executar

1. Compile o código usando um compilador C++:

```bash
g++ -o myGestorFicheiros main.cpp
