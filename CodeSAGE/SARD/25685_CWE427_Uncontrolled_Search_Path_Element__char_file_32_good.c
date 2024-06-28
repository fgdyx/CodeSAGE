#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[250] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 strcat(VAR2, VAR6);
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
