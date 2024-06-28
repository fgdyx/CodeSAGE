#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, VAR2);
 FUN3(VAR4);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
static void FUN5()
{
 char * VAR2 = VAR6;
 {
 char VAR4[100] = "";
 FUN2(VAR4, 100-1, "", VAR2);
 FUN3(VAR4);
 }
}
static void FUN6()
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
 FUN3("");
 VAR2[VAR7] = '';
 }
 }
 }
 VAR6 = VAR2;
 FUN5();
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
