#include <stdio.h>

int main(void){
	
	float valor_hr = 0, sal_normal = 0, sal_extra = 0,sal_bruto = 0, desc_inss = 0, imp_sind = 0, imp_IR = 0;
	int hr_semanal = 0;
	
	printf("Digite o valor da hora trabalhada: R$");
	scanf("%f", &valor_hr);
	printf("Quantidade de horas trabalhadas na semana: ");
	scanf("%d", &hr_semanal);
	
	if(hr_semanal > 40){
		sal_extra = ((valor_hr+(valor_hr*0.5))*(hr_semanal-40));
		sal_normal = 40*valor_hr;
		desc_inss = (sal_normal+sal_extra)*0.11;
		imp_sind  = (sal_normal+sal_extra)*0.08;
		sal_bruto = sal_extra + sal_normal - desc_inss - imp_sind;
		
		if(sal_bruto <= 1787.77){
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, sal_bruto);
		}else if(sal_bruto >= 1787.78 && sal_bruto <= 2679.29){
			imp_IR = sal_bruto*0.075;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto >= 2679.30 && sal_bruto <= 3572.43){
			imp_IR = sal_bruto*0.15;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto >= 3572.44 && sal_bruto <= 4463.81){
			imp_IR = sal_bruto*0.225;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto > 4463.81){
			imp_IR = sal_bruto*0.275;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}
		
	}else{
		sal_normal = hr_semanal*valor_hr;
		desc_inss = (sal_normal+sal_extra)*0.11;
		imp_sind  = (sal_normal+sal_extra)*0.08;
		sal_bruto = sal_extra + sal_normal - desc_inss - imp_sind;
		
		if(sal_bruto <= 1787.77){
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, sal_bruto);
		}else if(sal_bruto >= 1787.78 && sal_bruto <= 2679.29){
			imp_IR = sal_bruto*0.075;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto >= 2679.30 && sal_bruto <= 3572.43){
			imp_IR = sal_bruto*0.15;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto >= 3572.44 && sal_bruto <= 4463.81){
			imp_IR = sal_bruto*0.225;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}else if(sal_bruto > 4463.81){
			imp_IR = sal_bruto*0.275;
			printf("INSS: R$-%.2f\nIMP_SINDICAL: R$-%.2f\nIMP_RENDA: R$-%.2f\nSAL_BRUTO: R$%.2f\n", desc_inss, imp_sind, imp_IR, (sal_bruto - imp_IR));	
		}
	}
}
