#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = VAR6[VAR5];
 }
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
#endif
