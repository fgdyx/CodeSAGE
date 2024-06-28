#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcat(VAR2, "");
 return VAR2;
}
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 VAR5 *VAR6;
 VAR6 = FUN3(VAR2, "");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
