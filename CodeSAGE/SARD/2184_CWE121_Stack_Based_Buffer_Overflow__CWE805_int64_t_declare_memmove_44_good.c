#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 memmove(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 void (*VAR5) (VAR2 *) = VAR6;
 int64_t VAR7[50];
 int64_t VAR8[100];
 VAR3 = VAR8;
 FUN4(VAR3);
}
void FUN5()
{
 FUN3();
}
#endif
