#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char VAR4[100];
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strcat(VAR5, VAR3);
 FUN3(VAR3);
 }
}
#endif
