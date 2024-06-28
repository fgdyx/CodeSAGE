#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 memcpy(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
#endif
