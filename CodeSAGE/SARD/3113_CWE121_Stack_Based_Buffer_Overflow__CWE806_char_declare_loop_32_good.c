#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100];
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 char VAR6[50] = "";
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR2);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR6[VAR7] = VAR2[VAR7];
 }
 VAR6[50-1] = '';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
