#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 char VAR4[50] = "";
 size_t VAR5, VAR6;
 VAR6 = strlen(VAR3);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 VAR4[50-1] = '';
 FUN2(VAR3);
 }
}
#endif
