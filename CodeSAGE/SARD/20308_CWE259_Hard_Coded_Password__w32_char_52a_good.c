#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = '';
 }
 VAR4 = strlen(VAR2);
 if (VAR4 > 0)
 {
 VAR2[VAR4-1] = '';
 }
 }
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
