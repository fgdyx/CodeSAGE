#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 strcpy(VAR3, VAR4);
 FUN3(VAR3);
 delete [] VAR3;
 }
 ;
}
#endif
