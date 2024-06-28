#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 goto VAR4;
VAR4:
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
 FUN2("");
 VAR2[VAR5] = '';
 }
 }
 }
 goto VAR6;
VAR6:
 FUN3("", VAR2);
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 strcpy(VAR2, "");
 goto VAR6;
VAR6:
 FUN3(VAR2);
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
