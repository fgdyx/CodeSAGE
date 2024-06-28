#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 {
 size_t VAR4, VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR5 = strlen(VAR6);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR3[VAR4];
 }
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
#endif
