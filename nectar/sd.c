/*
 * sd.c
 *
 *  Created on: 20/08/2014
 *      Author: Tiago
 */

#include "sd.h"

void sdLe() {
	SDSPI_Handle sdspiHandle;
	SDSPI_Params sdspiParams;
	FILE *src;
	unsigned int bytesRead = 0;

	const char inputfile[] = "fat:"STR(SD_DRIVE_NUM)":input.txt";

	char read_buff[BUFF_SIZE + 1];

	/* Mount and register the SD Card */
	SDSPI_Params_init(&sdspiParams);
	sdspiHandle = SDSPI_open(Board_SDSPI0, SD_DRIVE_NUM, &sdspiParams);
	if (sdspiHandle == NULL) {
		printf("Erro ao iniciar o SD card!\n");
		return;
	}
//		else {
//		printf("Drive %u montado!\n", SD_DRIVE_NUM);
//	}
	/* Tenta abrir o arquivo */
	src = fopen(inputfile, "r");
	if (!src) {
		printf("Nao foi possivel abrir o arquivo!\n");
		Task_sleep(10);
		SDSPI_close(sdspiHandle);
		return;
	} else {
		printf("\t\tArquivo aberto!\n");

		while (true) {
			/*  Le do arquivo */
			bytesRead = fread(read_buff, 1, sizeof(read_buff), src);
			//fgets(read_buff, sizeof(read_buff), src);
			printf("%s", read_buff);
			if (feof(src)) {
				printf("\t\tFim do arquivo\n");
				break;
			}
			if (bytesRead == 0) {
				printf("\t\tFim do arquivo\n");
				break; /* Error or EOF */
			}
		}
		fflush(src);
		fclose(src);
	}
	SDSPI_close(sdspiHandle);
}

void sdEscreve(char *conteudo, int tamanho) {
	SDSPI_Handle sdspiHandle;
	SDSPI_Params sdspiParams;
	FILE *src;
	const char outputfile[] = "fat:"STR(SD_DRIVE_NUM)":input.txt";

	/* Mount and register the SD Card */
	SDSPI_Params_init(&sdspiParams);
	sdspiHandle = SDSPI_open(Board_SDSPI0, SD_DRIVE_NUM, &sdspiParams);
	if (sdspiHandle == NULL) {
		printf("Erro ao iniciar o SD card!\n");
		return;
	}
//	else {
//		printf("Drive %u montado!\n", SD_DRIVE_NUM);
//	}
	/* Tenta abrir o arquivo */
	src = fopen(outputfile, "a");
	if (!src) {
		printf("Nao foi possivel criar o arquivo!\n");
		Task_sleep(10);
		SDSPI_close(sdspiHandle);
		return;
	} else {
		printf("Arquivo criado!\n\n");
		/*  escreve do arquivo */
		fputs(conteudo, src);
		fflush(src);
		fclose(src);
	}
	SDSPI_close(sdspiHandle);
}

bool sdApaga(char *nome) {

	SDSPI_Handle sdspiHandle;
	SDSPI_Params sdspiParams;

	char arquivo[20] = "fat:"STR(SD_DRIVE_NUM)":";

	strcat(arquivo, nome);
	strcat(arquivo, ".txt");

	/* Mount and register the SD Card */
	SDSPI_Params_init(&sdspiParams);
	sdspiHandle = SDSPI_open(Board_SDSPI0, SD_DRIVE_NUM, &sdspiParams);
	if (sdspiHandle == NULL) {
		printf("Erro ao iniciar o SD card!\n");
		return false;
	}
	if (remove(arquivo) != 0) {
		printf("Nao foi possivel apagar o arquivo!\n");
		Task_sleep(10);
		SDSPI_close(sdspiHandle);
		return false;
	} else {
		printf("\t\tArquivo apagado!\n");
	}
	SDSPI_close(sdspiHandle);
	return true;
}
