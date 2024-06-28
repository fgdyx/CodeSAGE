#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[VAR6] = "";
 VAR2 = VAR5;
#ifdef VAR7
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
