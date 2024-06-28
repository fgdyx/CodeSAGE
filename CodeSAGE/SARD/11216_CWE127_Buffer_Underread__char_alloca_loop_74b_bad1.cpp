#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR6[VAR5] = VAR4[VAR5];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
#endif
