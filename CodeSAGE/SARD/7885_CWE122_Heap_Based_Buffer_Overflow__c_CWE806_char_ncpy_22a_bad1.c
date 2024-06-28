#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = (char *)malloc(100*sizeof(char));
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strncpy(VAR4, VAR3, strlen(VAR3));
 VAR4[50-1] = '';
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
