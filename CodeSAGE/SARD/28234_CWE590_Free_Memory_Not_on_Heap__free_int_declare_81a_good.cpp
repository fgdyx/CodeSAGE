#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 if (VAR3 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
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
