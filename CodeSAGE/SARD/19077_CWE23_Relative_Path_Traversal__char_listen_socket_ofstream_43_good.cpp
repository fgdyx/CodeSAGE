#ifndef VAR1
static void FUN1(char * &VAR2)
{
 strcat(VAR2, "");
}
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 ofstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN3()
{
 FUN2();
}
#endif
