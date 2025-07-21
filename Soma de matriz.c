
int main() {
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
int lin, col, soma = 0;

for (lin = 0; lin < 2; lin++) {

for (col = 0; col < 3; col++) {
soma = soma + matriz[lin][col]; }
}

printf("A soma completa da matriz é:
%d", soma);

return 0;
}