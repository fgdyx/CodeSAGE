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
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR3, VAR4, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 }
 ;
}
#endif
