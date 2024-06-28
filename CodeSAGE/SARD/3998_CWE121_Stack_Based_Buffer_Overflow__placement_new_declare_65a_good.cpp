#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[sizeof(VAR6)];
 char VAR7[sizeof(VAR8)];
 VAR2 = VAR7;
 FUN3(VAR2);
}
void FUN4(char * VAR2);
static void FUN5()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR9;
 char VAR5[sizeof(VAR6)];
 char VAR7[sizeof(VAR8)];
 VAR2 = VAR5;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
