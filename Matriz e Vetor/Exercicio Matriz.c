#include <stdio.h>
int main() {

int matriz[3][3] =
{
{1, 2, 3},
{2, 3, 4},
{3, 4, 5,}
};
printf("\t\t\t\t\t Impacto\n");
printf(" Urgencia\n");
for(int lin = 0; lin <3; lin++)
{
for(int col = 0; col < 3; col++)
{
printf("\t\t\t\t%d", matriz[lin][col]);
}
printf("\n");
}
return 0;
}