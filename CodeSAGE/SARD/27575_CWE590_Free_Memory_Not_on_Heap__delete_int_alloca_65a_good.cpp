#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 {
 int * VAR5 = new int;
 *VAR5 = 5;
 VAR2 = VAR5;
 }
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
