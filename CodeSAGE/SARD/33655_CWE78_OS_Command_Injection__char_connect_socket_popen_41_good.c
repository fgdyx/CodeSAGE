#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 VAR3 *VAR4;
 VAR4 = FUN2(VAR2, "");
 if (VAR4 != NULL)
 {
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR5[100] = VAR6;
 VAR2 = VAR5;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
