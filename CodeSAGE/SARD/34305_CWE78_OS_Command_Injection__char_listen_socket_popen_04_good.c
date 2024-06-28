#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 if(VAR8)
 {
 strcat(VAR2, "");
 }
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, "");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
