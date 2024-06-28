#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int VAR3;
 VAR3 = -1;
 VAR3 = FUN3("", VAR4|VAR5, VAR6|VAR7);
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
