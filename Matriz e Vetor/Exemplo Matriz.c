#include <stdio.h>
int main() {

float matriz[3][3] =
{
{8, 7, 9.5},
{4.5, 5, 6.5},
{5.5, 7.2, 3.5}
};
printf("Notas registradas:\n");

for(int lin = 0; lin < 3; lin++)
{
for(int col = 0; col < 3; col++)
{
printf("%.1f ", matriz[lin][col]);
}
printf("\n");
}
return 0;
}