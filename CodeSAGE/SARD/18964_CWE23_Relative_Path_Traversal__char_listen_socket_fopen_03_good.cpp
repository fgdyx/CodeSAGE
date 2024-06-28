#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(5==5)
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7 = NULL;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
