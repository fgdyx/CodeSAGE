#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 size_t VAR5, VAR6;
 char VAR7[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR6 = strlen(VAR7);
 for (VAR5 = 0; VAR5 < VAR6; VAR5++)
 {
 VAR7[VAR5] = VAR4[VAR5];
 }
 VAR7[100-1] = '';
 FUN3(VAR7);
 free(VAR4);
 }
}
#endif
