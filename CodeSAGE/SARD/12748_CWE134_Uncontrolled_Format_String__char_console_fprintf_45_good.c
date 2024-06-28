#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 fprintf(VAR4, VAR2);
}
static void FUN2()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 char * VAR2 = VAR6;
 fprintf(VAR4, "", VAR2);
}
static void FUN4()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
 size_t VAR7 = strlen(VAR2);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN5("");
 VAR2[VAR7] = '';
 }
 }
 }
 VAR6 = VAR2;
 FUN3();
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
