#ifndef VAR1
static void FUN1(char * &VAR2)
{
#ifdef VAR3
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
}
static void FUN2()
{
 char * VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 ifstream VAR6;
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
void FUN3()
{
 FUN2();
}
#endif
