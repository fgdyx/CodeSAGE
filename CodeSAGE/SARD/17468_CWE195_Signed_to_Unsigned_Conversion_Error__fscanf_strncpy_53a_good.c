#ifndef VAR1
void FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 100-1;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
