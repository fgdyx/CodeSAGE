#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 VAR2 * VAR7 = (VAR2 *)FUN4(50*sizeof(VAR2));
 VAR2 * VAR8 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3 = VAR8;
 FUN5(VAR3);
}
void FUN6()
{
 FUN3();
}
#endif
