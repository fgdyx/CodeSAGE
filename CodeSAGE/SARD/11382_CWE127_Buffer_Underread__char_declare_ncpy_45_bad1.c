#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 VAR3 = VAR2;
 FUN1();
}
#endif
