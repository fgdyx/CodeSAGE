#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 {
 int * VAR4 = new int;
 *VAR4 = 5;
 VAR3 = VAR4;
 }
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
