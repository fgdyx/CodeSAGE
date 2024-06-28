#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 int VAR3;
 VAR3 = FUN2(VAR2, VAR4|VAR5, VAR6|VAR7);
 if (VAR3 != -1)
 {
 FUN3(VAR3);
 }
 }
}
static void FUN4()
{
 char * VAR2;
 void (*VAR8) (char *) = VAR9;
 char VAR10[VAR11] = VAR12;
 VAR2 = VAR10;
 strcat(VAR2, "");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
