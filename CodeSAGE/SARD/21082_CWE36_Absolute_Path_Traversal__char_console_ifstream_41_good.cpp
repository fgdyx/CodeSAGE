#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 ifstream VAR3;
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
static void FUN2()
{
 char * VAR2;
 char VAR4[VAR5] = "";
 VAR2 = VAR4;
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
