#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 char * VAR2 = *VAR3;
 {
 char * VAR5 = new char[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR5 - 8;
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 size_t VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR2[VAR6];
 }
 VAR7[100-1] = '';
 FUN2(VAR7);
 }
 }
}
#endif
