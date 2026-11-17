# Projeto 4: RankLab - Central de Ordenação Inteligente

**Disciplina:** Algoritmos e Pensamento Computacional  
**Professor:** Vinicius Alves  

## Integrantes do Grupo
* **Maria Eduarda Flausino Alves** - RGM: 49177681
* **Wagner Alves Moreira** - RGM: 47547821

---

## 1. Descrição do Projeto
O **RankLab** é um sistema desenvolvido em linguagem C para gerenciar e organizar pontuações de competições acadêmicas[cite: 1]. O programa lê dez pontuações inteiras (validadas entre 0 e 100), preserva a sequência original criando três cópias independentes, e as ordena utilizando três algoritmos clássicos: **Bubble Sort**, **Selection Sort** e **Insertion Sort**[cite: 1, 2]. Ao final, o sistema valida a equivalência dos resultados, exibe estatísticas (menor, maior e mediana) e apresenta um relatório comparativo com a quantidade de comparações feitas por cada método[cite: 1, 2].

---

## 2. Instruções de Execução

### Pré-requisitos
Você precisa ter um compilador de C instalado no seu computador (como o GCC).

### Como Compilar
Abra o terminal na pasta onde o arquivo `projeto4_ranklab.c` está salvo e execute o comando:
```bash
gcc projeto4_ranklab.c -o projeto4_ranklab