#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcat(VAR2, "");
 {
 char * VAR2 = VAR3;
 FUN2(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
 }
}
void FUN3()
{
 FUN1();
}
#endif
