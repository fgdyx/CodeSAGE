#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 {
 char * VAR4 = new char;
 *VAR4 = '';
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
