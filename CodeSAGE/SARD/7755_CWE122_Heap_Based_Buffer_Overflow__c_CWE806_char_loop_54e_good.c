#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[50] = "";
 size_t VAR4, VAR5;
 VAR5 = strlen(VAR2);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR3[VAR4] = VAR2[VAR4];
 }
 VAR3[50-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
