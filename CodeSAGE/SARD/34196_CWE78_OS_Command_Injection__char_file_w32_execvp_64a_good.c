#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcat(VAR3, "");
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
