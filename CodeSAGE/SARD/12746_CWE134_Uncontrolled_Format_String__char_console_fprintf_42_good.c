#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcpy(VAR2, "");
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 fprintf(VAR4, VAR2);
}
static char * FUN3(char * VAR2)
{
 {
 size_t VAR5 = strlen(VAR2);
 if (100-VAR5 > 1)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = strlen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == '')
 {
 VAR2[VAR5-1] = '';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR5] = '';
 }
 }
 }
 return VAR2;
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN3(VAR2);
 fprintf(VAR4, "", VAR2);
}
void FUN6()
{
 FUN5();
 FUN2();
}
#endif
