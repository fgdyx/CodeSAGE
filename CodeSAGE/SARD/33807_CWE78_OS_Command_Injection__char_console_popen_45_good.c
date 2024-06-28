#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 *VAR5;
 VAR5 = FUN2(VAR2, "");
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR6[100] = VAR7;
 VAR2 = VAR6;
 strcat(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
