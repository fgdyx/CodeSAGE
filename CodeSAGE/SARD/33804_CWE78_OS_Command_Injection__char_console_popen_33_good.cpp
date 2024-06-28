#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = VAR5;
 VAR2 = VAR4;
 strcat(VAR2, "");
 {
 char * VAR2 = VAR3;
 {
 VAR6 *VAR7;
 VAR7 = FUN2(VAR2, "");
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
