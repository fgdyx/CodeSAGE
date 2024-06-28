#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6!=5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR2, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 if(VAR6==5)
 {
 strcat(VAR2, "");
 }
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR2, "");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
