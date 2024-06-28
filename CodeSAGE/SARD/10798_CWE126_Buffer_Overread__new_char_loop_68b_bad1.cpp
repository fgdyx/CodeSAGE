#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 size_t VAR4, VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR5 = strlen(VAR6);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR2[VAR4];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 delete [] VAR2;
 }
}
#endif
