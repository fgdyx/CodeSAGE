#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 char * VAR3;
 structType VAR2;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
#ifdef VAR6
 strcat(VAR3, "");
#else
 strcat(VAR3, "");
#endif
 VAR2.VAR7 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
