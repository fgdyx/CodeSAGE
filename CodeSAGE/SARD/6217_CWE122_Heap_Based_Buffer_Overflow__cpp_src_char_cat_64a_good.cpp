#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = new char[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
