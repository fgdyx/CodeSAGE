#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
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
 FUN2("");
 VAR2[VAR5] = '';
 }
 }
 }
 }
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 FUN3("", VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
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
 FUN2("");
 VAR2[VAR5] = '';
 }
 }
 }
 }
 if(VAR4)
 {
 FUN3("", VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR4)
 {
 FUN3(VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
 {
 strcpy(VAR2, "");
 }
 if(VAR4)
 {
 FUN3(VAR2);
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
