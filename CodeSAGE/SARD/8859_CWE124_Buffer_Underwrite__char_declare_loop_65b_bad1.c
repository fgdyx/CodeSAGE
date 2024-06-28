#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 size_t VAR3;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = VAR4[VAR3];
 }
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
#endif
