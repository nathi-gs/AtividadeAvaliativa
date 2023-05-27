int main(){
	char nomeVendedor[20]; 
	float salario, vendasFeitas, total;
	
	printf("Digite o nome do vendedor(a): ");
	scanf("%s", &nomeVendedor);
	printf("Digite o salario fixo: ");
	scanf("%f", &salario);
	printf("Digite o total de vendas efetuadas por ele no mes: ");
	scanf("%f", &vendasFeitas);
	
	total = salario + (vendasFeitas * 1.15);
	
	printf("O vendedor(a) %s ira receber %2.2f no final do mes", nomeVendedor, total);
	
	
	return 0;
	
}
