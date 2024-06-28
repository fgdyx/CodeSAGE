#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[50];
 char VAR5[100];
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR5;
 }
 {
 size_t VAR6, VAR7;
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 VAR7 = strlen(VAR8);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR3[VAR6];
 }
 VAR8[100-1] = '';
 FUN2(VAR8);
 }
}
void FUN3()
{
 FUN1();
}
#endif
