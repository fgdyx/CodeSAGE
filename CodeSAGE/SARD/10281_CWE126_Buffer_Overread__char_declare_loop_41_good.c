#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 size_t VAR3, VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = strlen(VAR5);
 for (VAR3 = 0; VAR3 < VAR4; VAR3++)
 {
 VAR5[VAR3] = VAR2[VAR3];
 }
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR6[50];
 char VAR7[100];
 memset(VAR6, '', 50-1);
 VAR6[50-1] = '';
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 VAR2 = VAR7;
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
