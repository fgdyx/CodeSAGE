#ifndef VAR1
static void FUN1(char * VAR2)
{
 FUN2(VAR2[0]);
}
static void FUN3()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = "";
 FUN4(VAR2);
}
static void FUN5(char * VAR2)
{
 if (VAR2 != NULL)
 {
 FUN2(VAR2[0]);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR5;
 VAR2 = NULL;
 FUN4(VAR2);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
