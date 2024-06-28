#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 ofstream VAR3;
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
static void FUN2()
{
 char * VAR2;
 char VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
