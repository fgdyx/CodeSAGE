#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, VAR4);
 {
 VAR5 *VAR6;
 VAR6 = FUN2(VAR2, "");
 if (VAR6 != NULL)
 {
 FUN3(VAR6);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
