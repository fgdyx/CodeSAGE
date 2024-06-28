#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 goto VAR6;
VAR6:
 strcat(VAR2, "");
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
