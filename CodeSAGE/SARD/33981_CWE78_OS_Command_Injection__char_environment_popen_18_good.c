#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = VAR4;
 VAR2 = VAR3;
 goto VAR5;
VAR5:
 strcat(VAR2, "");
 {
 VAR6 *VAR7;
 VAR7 = FUN2(VAR2, "");
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
