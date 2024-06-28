#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 int VAR6;
 VAR6 = FUN3(VAR2, VAR7|VAR8, VAR9|VAR10);
 if (VAR6 != -1)
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
