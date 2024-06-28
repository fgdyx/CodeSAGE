#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[100];
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 }
 {
 char VAR5[50] = "";
 size_t VAR6, VAR7;
 VAR7 = strlen(VAR3);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR3[VAR6];
 }
 VAR5[50-1] = '';
 FUN2(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
