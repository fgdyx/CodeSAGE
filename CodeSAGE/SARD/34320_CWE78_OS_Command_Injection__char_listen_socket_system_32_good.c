#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[100] = VAR6;
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcat(VAR2, "");
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
 }
}
void FUN5()
{
 FUN1();
}
#endif
