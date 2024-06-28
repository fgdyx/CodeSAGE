#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 FUN2(VAR2);
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = strlen(VAR2);
 if (100-VAR4 > 1)
 {
 if (fgets(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = strlen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == '')
 {
 VAR2[VAR4-1] = '';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR4] = '';
 }
 }
 }
 FUN2("", VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
