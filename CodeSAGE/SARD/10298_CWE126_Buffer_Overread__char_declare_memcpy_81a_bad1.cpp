#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR3;
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
#endif
