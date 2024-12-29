#include <iostream>
using namespace std;

int main() {
    int N, H;
    int vet[10000];

    while (true) {
        cin >> N;
        if (N == 0) break;

        int contador = 0;

        // Preenche o vetor com todas as amostras
        for (int i = 0; i < N; i++) {
            cin >> vet[i];
        }

        // Verificar as amostras e fazer a contagem de picos
        if (N == 2) {
            // Para N = 2, cada elemento é um pico em relação ao outro
            cout << 2 << endl;
        } else {
            for (int i = 0; i < N; i++) {
                // Índices dos vizinhos, considerando a periodicidade do loop
                int prev = (i - 1 + N) % N;
                int next = (i + 1) % N;

                if ((vet[i] > vet[prev] && vet[i] > vet[next]) ||  // Pico máximo
                    (vet[i] < vet[prev] && vet[i] < vet[next])) {  // Vale mínimo
                    contador++;
                }
            }
            cout << contador << endl;
        }
    }
    return 0;
}
