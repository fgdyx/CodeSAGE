#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char * VAR5 = (char *)FUN4(100*sizeof(char));
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 VAR3 = VAR2;
 FUN1();
}
#endif
