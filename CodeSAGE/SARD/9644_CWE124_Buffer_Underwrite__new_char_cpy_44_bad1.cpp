#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strcpy(VAR2, VAR3);
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 VAR2 = NULL;
 {
 char * VAR6 = new char[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR6 - 8;
 }
 FUN4(VAR2);
}
#endif
