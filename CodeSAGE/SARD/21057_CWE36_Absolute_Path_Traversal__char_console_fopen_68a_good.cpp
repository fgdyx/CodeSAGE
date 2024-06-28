#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 VAR6 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
