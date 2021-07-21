#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>

int main(int argc, char **argv){
	
	FILE *fp1 = fopen(argv[1],"rb");
	FILE *fp2 = fopen(argv[2],"rb");
	uint32_t a1;
	uint32_t a2;
//	uint32_t result;

	fread(&a1,sizeof(a1),1,fp1);
	fread(&a2,sizeof(a2),1,fp2);
	a1=htonl(a1);
	a2=htonl(a2);
	printf("1000(0x%0x) + 500(0x%0x) = 1500(0x%0x)",a1,a2,a1+a2);

}
