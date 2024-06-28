#ifndef VAR1
void FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 100-1;
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
