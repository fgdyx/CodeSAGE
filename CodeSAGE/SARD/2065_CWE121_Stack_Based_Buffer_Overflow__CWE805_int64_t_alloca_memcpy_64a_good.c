#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 VAR3 * VAR5 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR6 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR4 = VAR6;
 FUN1(&VAR4);
}
void FUN4()
{
 FUN2();
}
#endif
