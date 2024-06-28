#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 fprintf(VAR4, VAR2);
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
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
 FUN3("");
 VAR2[VAR5] = '';
 }
 }
 }
 fprintf(VAR4, "", VAR2);
}
void FUN4()
{
 FUN1();
 FUN2();
}
#endif
