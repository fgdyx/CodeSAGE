#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcat(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 int VAR8;
 VAR8 = FUN2(VAR2, VAR9|VAR10, VAR11|VAR12);
 if (VAR8 != -1)
 {
 FUN3(VAR8);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
