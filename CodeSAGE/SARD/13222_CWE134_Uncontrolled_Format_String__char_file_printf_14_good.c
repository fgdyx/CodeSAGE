#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN2("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 }
 if(VAR4!=5)
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
 if(VAR4==5)
 {
 {
 size_t VAR5 = strlen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (fgets(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN2("");
 VAR2[VAR5] = '';
 }
 fclose(VAR7);
 }
 }
 }
 }
 if(VAR4==5)
 {
 FUN3("", VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4!=5)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR4==5)
 {
 FUN3(VAR2);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 strcpy(VAR2, "");
 }
 if(VAR4==5)
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
