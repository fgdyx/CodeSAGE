#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 }
 else
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR5[VAR4] = VAR2[VAR4];
 }
 VAR5[100-1] = '';
 FUN3(VAR5);
 }
}
#endif
