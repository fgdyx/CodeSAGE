#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 {
 int64_t VAR5[100] = {0};
 memmove(VAR3, VAR5, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR4 = VAR3;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
