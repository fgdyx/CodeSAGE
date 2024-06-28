#ifndef VAR1
static void FUN1(char * VAR2)
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
 void (*VAR5) (char *) = VAR6;
 char VAR7[100] = "";
 VAR2 = VAR7;
 strcpy(VAR2, VAR8);
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
