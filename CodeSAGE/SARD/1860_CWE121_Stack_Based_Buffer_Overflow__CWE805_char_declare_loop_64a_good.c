#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char VAR4[50];
 char VAR5[100];
 VAR3 = VAR5;
 VAR3[0] = '';
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
