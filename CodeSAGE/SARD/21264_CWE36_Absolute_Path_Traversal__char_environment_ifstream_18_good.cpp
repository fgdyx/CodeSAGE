#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
#ifdef VAR6
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 {
 ifstream VAR7;
 VAR7.open((char *)VAR2);
 VAR7.close();
 }
}
void FUN2()
{
 FUN1();
}
#endif
