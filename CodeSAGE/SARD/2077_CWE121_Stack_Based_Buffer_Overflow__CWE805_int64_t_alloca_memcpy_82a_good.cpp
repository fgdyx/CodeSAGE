#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3 = VAR5;
 VAR6* VAR7 = new VAR8;
 VAR7->FUN3(VAR3);
 delete VAR7;
}
void FUN4()
{
 FUN1();
}
#endif
