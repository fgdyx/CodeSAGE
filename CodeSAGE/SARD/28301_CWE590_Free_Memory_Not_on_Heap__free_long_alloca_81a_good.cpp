#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = (long *)malloc(100*sizeof(long));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 const VAR5& VAR6 = FUN4();
 VAR6.FUN5(VAR2);
}
void FUN6()
{
 FUN1();
}
#endif
