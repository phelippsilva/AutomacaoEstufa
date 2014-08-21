/*
 * sd.c
 *
 *  Created on: 20/08/2014
 *      Author: Tiago
 */

#include "sd.h"

const char inputfile[] = "fat:"STR(SD_DRIVE_NUM)":input.txt";
const char outputfile[] = "fat:"STR(SD_DRIVE_NUM)":input.txt";

unsigned char cpy_buff[CPY_BUFF_SIZE + 1];

void sdLe() {
	SDSPI_Handle sdspiHandle;
	SDSPI_Params sdspiParams;
	FILE *src;
	char bytesRead;

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
			bytesRead = fread(cpy_buff, 1, CPY_BUFF_SIZE, src);
			printf("%s", cpy_buff);
			if (bytesRead == 0) {
				printf("\t\tFim do arquivo\n");
				break; /* Error or EOF */
			}
		}
		fclose(src);
	}
	SDSPI_close(sdspiHandle);
}

void sdEscreve(char *conteudo, int tamanho) {
	SDSPI_Handle sdspiHandle;
	SDSPI_Params sdspiParams;
	FILE *src;

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
		fclose(src);
	}
	SDSPI_close(sdspiHandle);
}
