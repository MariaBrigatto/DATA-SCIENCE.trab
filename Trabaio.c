#include <stdio.h>
int main()
{
	float temperatura = 0;
	int turbidez = 0, gordura = 0, odor = 0, gosto = 0;

	printf(" **** AVALIAÇÃO DA QUALIDADE DO LEITE ****\n\n");

	printf("TEMPERATURA:\n");
	scanf("%f", &temperatura);

	if (temperatura > 45)
		printf("BAIXA QUALIDADE\n");

	else
	{

		if (temperatura <= 45 && temperatura > 0)
		{

			printf("TURBIDEZ:\n");
			scanf("%d", &turbidez);

			if (turbidez == 1)
			{
				printf("GORDURA:\n");
				scanf("%d", &gordura);
				if (gordura == 1)
				{
					printf("ODOR:\n");
					scanf("%d", &odor);
					if (odor == 1)
					{

						printf("TEMPERATURA:\n");
						scanf("%f", &temperatura);
						if (temperatura > 43)
							printf("QUALIDADE ALTA\n");
						else
						{

							if (temperatura <= 43 && temperatura > 0)

								printf("GOSTO:\n");
							scanf("%d", &gosto);
							if (gosto == 1)
								printf("QUALIDADE ALTA\n");
							else
							{

								if (gosto == 0)

									printf("TEMPERATURA\n");
								scanf("%f", &temperatura);
								if (temperatura > 35)
									printf("BAIXA QUALIDADE\n");
								else
								{

									if (temperatura <= 35 && temperatura > 0)
										printf("QAUALIDADE ALTA\n");
								}
							}
						}
					}
				}
				else
				{

					if (gordura == 0)
					{
						printf("ODOR:\n");
						scanf("%d", &odor);

						if (odor == 1)
							printf("LEITE DE BAIXA QUALIDADE\n");
						else
						{

							if (odor == 0)
								printf("QUALIDADE MEDIA\n");
						}
					}
				}
			}

			else
			{

				if (turbidez == 0)
				{

					printf("GORDURA:\n");
					scanf("%d", &gordura);

					if (gordura == 0)
					{
						if (temperatura <= 38)
						{
							printf("LEITE DE MEDIA QUALIDADE \n");
						}
						else
						{
							if (temperatura <= 40)
								printf("LEITE DE BAIXA QUALIDADE \n");
						}
						else if (temperatura > 40) printf("LEITE DE MEDIA QUALIDADE \n");
					}
					else if (gordura == 1)
					{
						if (temperatura <= 38)
						{
							printf("ODOR: ");
							scanf("%d", &odor);
							if (odor)
							{
								printf("LEITE DE ALTA QUALIDADE\n");
							}
							else
							{
								if (temperatura <= 36)
									printf("LEITE DE MEDIA QUALIDADE \n");
								else if (temperatura > 36)
								{
									if (temperatura <= 37)
										printf("LEITE DE ALTA QUALIDADE\n");
									else
									{
										printf("GOSTO: ");
										scanf(" %d", &gosto);
										if (gosto)
										{
											printf("LEITE DE ALTA QUALDIDADE\n");
											else printf("LEITE DE MEDIA QUALIDADE\n");
										}
									}
								}
							}
						}
						else
						{
							if (temperatura <= 41)
								printf("LEITE DE MEDIA QUALIDADE\n");
							else
							{
								printf("GOSTO: ");
								scanf(" %d", &gosto);
								if (!gosto)
									printf("LEITE DE MEDIA QUALIDADE\n");
								else
								{
									printf("ODOR: ");
									scanf(" %d", &odor);
									if (!odor)
										printf("LEITE DE ALTA QUALIDADE\n");
									else
										printf("LEITE DE MEDIA QUALIDADE");
								}
							}
						}
					}
				}
			}
		}
	}
}