#include <iostream>

using namespace std;

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3, float n4) {
    return (n1 + n2 + n3 + n4) / 4;
}

// Função para verificar a aprovação
void verificarAprovacao(float media) {
    if (media >= 5) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
}

int main() {
    // Declaração de variáveis
    float n1, n2, n3, n4;

    // Entrada de dados com validação
    cout << "Digite a primeira nota: ";
    cin >> n1;
    while (n1 < 0 || n1 > 10) {
        cout << "Nota inválida! Digite novamente (0 a 10): ";
        cin >> n1;
    }

    cout << "Digite a segunda nota: ";
    cin >> n2;
    while (n2 < 0 || n2 > 10) {
        cout << "Nota inválida! Digite novamente (0 a 10): ";
        cin >> n2;
    }

    cout << "Digite a terceira nota: ";
    cin >> n3;
    while (n3 < 0 || n3 > 10) {
        cout << "Nota inválida! Digite novamente (0 a 10): ";
        cin >> n3;
    }

    cout << "Digite a quarta nota: ";
    cin >> n4;
    while (n4 < 0 || n4 > 10) {
        cout << "Nota inválida! Digite novamente (0 a 10): ";
        cin >> n4;
    }

    // Cálculo da média
    float media = calcularMedia(n1, n2, n3, n4);

    // Saída do resultado
    cout << "A média é: " << media << endl;

    // Verificação da aprovação
    verificarAprovacao(media);

    return 0;
}
