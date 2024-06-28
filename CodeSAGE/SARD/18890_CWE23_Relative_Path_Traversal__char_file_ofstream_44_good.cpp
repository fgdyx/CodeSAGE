#ifndef VAR1
static void FUN1(char * VAR2)
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
 void (*VAR4) (char *) = VAR5;
 char VAR6[VAR7] = VAR8;
 VAR2 = VAR6;
 strcat(VAR2, "");
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
