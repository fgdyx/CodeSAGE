#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR5[VAR4];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR6 = new char[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR6 - 8;
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
