#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 strcat(VAR2, "");
 {
 char * VAR2 = VAR3;
 {
 int VAR7;
 VAR7 = FUN2(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
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
