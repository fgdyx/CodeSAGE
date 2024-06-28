#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
#ifdef VAR6
 strcat(VAR3, "");
#else
 strcat(VAR3, "");
#endif
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
