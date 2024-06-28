#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR4);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR4[VAR6];
 }
 VAR5[50-1] = '';
 FUN3(VAR4);
 }
}
#endif
